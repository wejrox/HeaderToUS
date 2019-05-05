using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.UnrealScriptDefinitions
{
    public class StructDefinition : Definition
    {
        /// <summary>Where to find the definition of this Struct.</summary>
        private const int definitionIndex = 0;
        /// <summary>Where to find the specific details inside the definition.</summary>
        private const int detailsIndex = 2;
        /// <summary>Where to find the package name inside the details.</summary>
        private const int packageNameIndex = 0;
        /// <summary>Where to find the class name inside the details.</summary>
        private const int classNameIndex = 1;
        /// <summary>Where to find the struct name inside the details.</summary>
        private const int structNameindex = 2;
        /// <summary>Where to find the variables of this Struct in the header definition after it is split.</summary>
        private const int variableBeginIndex = 1;

        private List<VariableDefinition> Variables { get; set; } = new List<VariableDefinition>();
        public bool UsesNative = false;

        /// <summary>
        /// Sets the super class properties and adds the <c>Struct</c> variables.
        /// </summary>
        /// <param name="headerDefinition">Header definition of this struct.</param>
        public StructDefinition(string headerDefinition)
        {
            List<string> lines = headerDefinition.Split('\n').ToList<string>();
            string[] enumDetails = lines[definitionIndex].Split(' ')[detailsIndex].Split('.');

            // Get the enum details from the header file.
            this.PackageName = enumDetails[packageNameIndex];
            this.ClassFileName = enumDetails[classNameIndex];
            this.Name = enumDetails[structNameindex];

            // Inform the user where we're up to.
            Console.WriteLine("[INFO] Parsing structs for '{0}'", this.ClassFileName);

            // Get the lines that are variables.
            string variableDefinitions = headerDefinition.Split(new Char[] { '{', '}' })[1];
            List<string> variableLines = variableDefinitions.Split('\n').ToList<string>();

            // Parse each enum line which are explicitly defined with the value they equal (e.g. `val = 0, valTwo = 1`)
            foreach (string variable in variableLines)
            {
                // Only parse the string if it has contents.
                if (!(variable == ""))
                {
                    try
                    {
                        VariableDefinition newVariable = new VariableDefinition(variable, this.PackageName, this.ClassFileName);

                        // Make sure the class uses native if a struct within it does.
                        if (newVariable.Modifiers.Contains(VariableDefinition.VariableModifier.Native)) {
                            this.UsesNative = true;
                        }

                        // Add it to the list.
                        this.Variables.Add(newVariable);
                    }
                    catch (InvalidVariableException e)
                    {
                        Console.WriteLine("[ERROR] Invalid Header variable in struct '{0}': '{1}'.", this.Name, e.Message);
                    }
                }
            }
        }

        /// <summary>
        /// Modifies the <c>ToString</c> method to return an UnrealScript definition of a <c>Struct</c>.
        /// </summary>
        /// <returns>A valid UnrealScript struct definition.</returns>
        public override string ToString()
        {
            // Define the struct.
            string output = "struct " + this.Name + '\n';
            output += "{" + '\n';

            // Add the struct variables.
            foreach (VariableDefinition variable in this.Variables)
            {
                // Don't add the variable if it's uneditable and we have the console flag set.
                if (Program.OnlyExportEditable && !variable.Modifiers.Contains(VariableDefinition.VariableModifier.Edit))
                {
                    continue;
                }

                output += "    " + variable.ToString();
            }

            // Add closing brace.
            output += "};" + '\n' + '\n';

            return output;
        }
    }
}

using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.UnrealScriptDefinitions
{
    public class ClassDefinition
    {
        /// <summary>
        /// Representations of the type of class being ingested. 
        /// </summary>
        public  enum ClassTypes
        {
            Class,
            Enum,
            Interface
        }

        /// <summary>Which line contains the package this class belongs to.</summary>
        private const int packageNameDefinitionIndex = 0;
        /// <summary>Which entry in the line is the package name.</summary>
        private const int packageNameIndex = 3;
        /// <summary>The array location in which to find the class definition line.</summary>
        private const int classDefinitionIndex = 2;
        /// <summary>Array index in the class definition to find what class type this is.</summary>
        private const int classTypeIndex = 0;
        /// <summary>Array index in the class definition to find the class name.</summary>
        private const int classNameIndex = 1;
        /// <summary>Array index in the class definition to find the class to extend from.</summary>
        private const int extensionNameIndex = 4;
        /// <summary>Array index in a string split by 'public:' that the variable definitions can be found.</summary>
        private const int variablesIndex = 1;

        public ClassTypes ClassType { get; private set; }
        public string PackageName { get; private set; }
        public string ClassName { get; private set; }
        public string ExtensionClassName { get; private set; }
        public List<VariableDefinition> Variables { get; private set; }

        public ClassDefinition(string headerDefinition)
        {
            // Split the header into lines for parsing certain details.
            string[] definitionLines = headerDefinition.Split('\n');

            // Inform user Which class we're up to.
            Console.WriteLine(definitionLines[packageNameDefinitionIndex]);

            // Gets the package definition which contains the class name too.
            string packageDefinition = definitionLines[packageNameDefinitionIndex].Split(' ')[2];
            string[] packagePath = packageDefinition.Split('.');

            // Set the package and class name.
            this.PackageName = packagePath[0];
            this.ClassName = packagePath[1];

            // Set the extension class.
            string[] classDefinition = definitionLines[classDefinitionIndex].Split(' ');

            // Set the class type.
            this.ClassType = ClassTypes.Class;

            // Remove any special characters and remove the prefix before the class extension (usually 'U').
            this.ExtensionClassName = classDefinition[extensionNameIndex].Replace("\n", "").Remove(0, 1);

            // Update to an interface if necessary.
            if(this.ExtensionClassName == "Interface")
            {
                this.ClassType = ClassTypes.Interface;
            }

            // Set class variables.
            this.Variables = new List<VariableDefinition>();

            // Get the variables portion of the definition.
            // (Split based on `public:` since it is the separator between class definition, variables, and functions).
            string[] classDefinitions = Regex.Split(headerDefinition, @"public:");

            // Remove tab characters.
            string variableDefinitions = classDefinitions[variablesIndex];
            UpdateVariables(variableDefinitions);
        }

        /// <summary>
        /// Given a string containing variables, updates the variables of this class to match those contained.
        /// Creates a new variable entry for each variable in the string that is editable.
        /// </summary>
        /// <param name="variables"></param>
        public void UpdateVariables(string variables)
        {
            // Split based on newline to get each line of the variables.
            string[] variableDefinitions = variables.Split('\n');

            // Iterate through the variables definitions.
            foreach (string stringDefinition in variableDefinitions)
            {
                // Only add the variable if it's not an empty reference.
                if (stringDefinition.Length > 0)
                {
                    try
                    {
                        // Add the variable to the list.
                        this.Variables.Add(new VariableDefinition(stringDefinition));
                    }
                    catch (InvalidVariableException)
                    {
                        Console.WriteLine("Invalid variable in class {0}. Skipping...", this.ClassName);
                    }
                }
            }
        }

        /// <summary>
        /// Processes each class property to create a class definition that can be exported directly into a file.
        /// </summary>
        /// <returns>The class as a string representation that would compile in UDK3.</returns>
        public override string ToString()
        {
            // Whether or not the class should be marked as native.
            bool isNative = false;
            string variableDefinition = "";

            // Create variable definitions and decide if class is native.
            foreach (VariableDefinition v in this.Variables)
            {
                variableDefinition += v.ToString();
                if(variableDefinition.Contains("native"))
                {
                    isNative = true;
                }
            }

            // Create the class definition.
            string classDefinition = "";
            classDefinition += this.ClassType == ClassTypes.Class ? "class " : "interface ";
            classDefinition += this.ClassName;
            classDefinition += this.ClassType == ClassTypes.Class ? " extends " : " implements ";
            classDefinition += this.ExtensionClassName;

            if(isNative)
            {
                classDefinition += '\n';
                classDefinition += "    native";
            }
            classDefinition += ";";
            
            // Double new line for formatting.
            classDefinition += '\n';
            classDefinition += '\n';

            classDefinition += variableDefinition;
            return classDefinition;
        }
    }
}

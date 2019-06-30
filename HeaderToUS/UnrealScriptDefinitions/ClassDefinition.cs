using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using HeaderToUS.Audit;

namespace HeaderToUS.UnrealScriptDefinitions
{
    public class ClassDefinition : Definition
    {
        /// <summary>
        /// Type of class that this definition contains.
        /// </summary>
        public enum ClassTypes
        {
            Class,
            Interface,
            Invalid
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

        /// <summary>Whether or not the class should be considered native.</summary>
        public bool IsNative { get; set; } = false;
        /// <summary>Whether this definition is a class or an interface.</summary>
        public ClassTypes ClassType { get; set; }
        /// <summary>Name of the class to extend from.</summary>
        public string ParentClassName { get; private set; }
        /// <summary>Variables contained within this class.</summary>
        private List<VariableDefinition> Variables { get; set; } = new List<VariableDefinition>();
        /// <summary>Structs that are defined within this class.</summary>
        public List<StructDefinition> Structs { get; set; } = new List<StructDefinition>();
        /// <summary>Enums that are defined within this class.</summary>
        public List<EnumDefinition> Enums { get; set; } = new List<EnumDefinition>();

        /// <summary>
        /// Constructor for enums that don't have parent classes in existsnce.
        /// </summary>
        /// <param name="invalidEnum"></param>
        public ClassDefinition (EnumDefinition invalidEnum)
        {
            this.PackageName = invalidEnum.PackageName;
            this.Name = invalidEnum.ClassFileName;
            this.ClassFileName = invalidEnum.ClassFileName;
            this.ClassType = ClassTypes.Invalid;
            this.Enums.Add(invalidEnum);
        }

        /// <summary>
        /// Constructor for structs that don't have parent classes in existence.
        /// </summary>
        /// <param name="invalidStruct"></param>
        public ClassDefinition(StructDefinition invalidStruct)
        {
            this.PackageName = invalidStruct.PackageName;
            this.Name = invalidStruct.ClassFileName;
            this.ClassFileName = invalidStruct.ClassFileName;
            this.ClassType = ClassTypes.Invalid;
            this.Structs.Add(invalidStruct);
        }

        /// <summary>
        /// Sets the package and class name, gets the class type and extension, then creates all the variables.
        /// </summary>
        /// <param name="headerDefinition">A string header representation of the class.</param>
        public ClassDefinition(string headerDefinition)
        {
            // Split the header into lines for parsing certain details.
            string[] definitionLines = headerDefinition.Split('\n');

            // Gets the package definition which contains the class name too.
            string packageDefinition = definitionLines[packageNameDefinitionIndex].Split(' ')[2];
            string[] packagePath = packageDefinition.Split('.');

            // Set this definitions base properties.
            this.GenerateDefinition(packagePath[1], packagePath[0], packagePath[1]);

            // Inform user Which class we're up to.
            Logger.Info("Parsing '" + this.Name + "'.");

            // Set the extension class.
            string[] classDefinition = definitionLines[classDefinitionIndex].Split(' ');

            // Remove any special characters and remove the prefix before the class extension (usually 'U').
            if (classDefinition.Length >= extensionNameIndex + 1)
            {
                this.ParentClassName = classDefinition[extensionNameIndex].Replace("\n", "").Remove(0, 1);
            }
            else
            {
                this.ParentClassName = "";
                Logger.Info("Class '" + this.ClassFileName + "' has no extension class.");
            }

            // Decide on class type.
            if (this.ParentClassName == "Interface")
            {
                this.ClassType = ClassTypes.Interface;
            }
            else
            {
                this.ClassType = ClassTypes.Class;
            }

            // Get the variables portion of the definition.
            // (Split based on <c>public:</c> or <c>static UClass</c> since they are the separators between class definition, variables, and functions).
            string[] classDefinitions = Regex.Split(headerDefinition, @"public:|static UClass.*|template.*|static inline.*");

            // Get the variable portion of the class definition.
            string variableDefinitions = classDefinitions[variablesIndex];

            // Parse the variable group string.
            ParseVariables(variableDefinitions);
        }

        /// <summary>
        /// Given a string containing variables, updates the variables of this class to match those contained.
        /// Creates a new variable entry for each variable in the string that is editable.
        /// </summary>
        /// <param name="variables">A string containing variables delimited by <c>\n</c></param>
        private void ParseVariables(string variables)
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
                        // Create the variable.
                        VariableDefinition newVariable = new VariableDefinition(stringDefinition, this.PackageName, this.ClassFileName);

                        // Add the variable to the list.
                        this.Variables.Add(newVariable);

                        // Set native if necessary.
                        if(newVariable.Modifiers.Contains(VariableDefinition.VariableModifier.Native))
                        {
                            Logger.Info("Updating class '" + this.PackageName + "." + this.Name + "' to be native as it contains native variables.");
                            this.IsNative = true;
                        }
                    }
                    catch (InvalidVariableException e)
                    {
                        Logger.Warn("Invalid Header variable in class '" + this.Name + "': ", e);
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
            string enumDefinition = "";
            string structDefinition = "";

            // Create variable definitions and decide if class is native.
            foreach (VariableDefinition v in this.Variables)
            {
                // Don't add the variable if it's uneditable and we have the console flag set.
                if (Program.OnlyExportEditable && !v.Modifiers.Contains(VariableDefinition.VariableModifier.Edit))
                {
                    continue;
                }

                variableDefinition += v.ToString();
                if(variableDefinition.Contains("native"))
                {
                    isNative = true;
                }
            }

            // Add enums.
            foreach (EnumDefinition definition in this.Enums)
            {
                enumDefinition += definition.ToString();
            }

            // Add structs.
            foreach (StructDefinition definition in this.Structs)
            {
                // Mark native if necessary.
                if(definition.UsesNative)
                {
                    isNative = true;
                }

                structDefinition += definition.ToString();
            }

            // Create the class definition.
            string classDefinition = "";
            classDefinition += "/*******************************************************************************\n";
            classDefinition += " * " + this.ClassFileName + " generated by HeaderToUS.\n";
            classDefinition += " * HeaderToUS © 2019-2025 James McDowell. All rights reserved.\n";
            classDefinition += " * https://github.com/wejrox/HeaderToUS \n";
            classDefinition += " * \n";
            classDefinition += " * Ownership of transpiled classes remain with their original authors. \n";
            classDefinition += " *******************************************************************************/\n";

            // Don't attempt to create the class definition if it doesn't exist.
            if (this.ClassType != ClassTypes.Invalid)
            {
                classDefinition += this.ClassType == ClassTypes.Class ? "class " : "interface ";
                classDefinition += this.Name;

                if (this.ParentClassName != "")
                {
                    classDefinition += " extends " + this.ParentClassName;
                }

                // Set as native if required.
                if (isNative)
                {
                    classDefinition += '\n';
                    classDefinition += "    native";
                }
                classDefinition += ";";

                // Double new line for formatting.
                classDefinition += '\n';
                classDefinition += '\n';

            }
            // Add enums.
            classDefinition += enumDefinition;

            // Add structs.
            classDefinition += structDefinition;

            // Add class variables.
            classDefinition += variableDefinition;
            return classDefinition;
        }
    }
}

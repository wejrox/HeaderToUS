using HeaderToUS.UnrealScriptDefinitions;
using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.Linq;
using HeaderToUS.ClassExporter;

namespace HeaderToUS.UnrealScript
{
    public class ClassGenerator
    {
        /// <summary>The definitions that are currently being made.</summary>
        private List<ClassDefinition> GeneratedDefinitions { get; set; } = new List<ClassDefinition>();

        /// <summary>
        /// Formats the header definitions, and adds a new class definition for each class entry.
        /// </summary>
        /// <param name="entireHeaderDefinitions">A header file as one string.</param>
        public ClassGenerator (string entireHeaderDefinitions)
        {
            // Preprocess the definitions, removing line breaks and tabs.
            string strippedHeaderFile = entireHeaderDefinitions.Replace("\t", "").Replace("\r", "");

            // Split the header file based on where it defines a new class.
            // Gets from the definition onwards until it hits another definition.
            List<string> definitions = Regex.Split(strippedHeaderFile, @"(?=\/\/ Class)|(?=\/\/ Enum)|(?=\/\/ ScriptStruct)").ToList();

            // First element is always empty.
            definitions.RemoveAt(0);

            List<string> classDefinitions = new List<string>();
            List<string> enumDefinitions = new List<string>();
            List<string> structDefinitions = new List<string>();

            // Handle each definition.
            foreach (string definition in definitions)
            {
                // Figure out which type of definition.
                if (definition.Contains("// Class"))
                {
                    classDefinitions.Add(definition);
                }
                else if (definition.Contains("// Enum"))
                {
                    enumDefinitions.Add(definition);
                }
                else if (definition.Contains("// ScriptStruct"))
                {
                    structDefinitions.Add(definition);
                }
            }

            // Create each class.
            foreach (string definition in classDefinitions)
            {
                this.GeneratedDefinitions.Add(new ClassDefinition(definition));
            }

            // Add each enum to the correct class.
            foreach (string definition in enumDefinitions)
            {
                EnumDefinition newStruct = new EnumDefinition(definition);
                ClassDefinition parentClass = GeneratedDefinitions.Find(def => def.PackageName == newStruct.PackageName && def.ClassFileName == newStruct.ClassFileName);
                if (parentClass == null)
                {
                    Console.WriteLine("[ERROR] Parent class '{0}.{1}' of enum '{2}' not found, skipping.", newStruct.PackageName, newStruct.ClassFileName, newStruct.Name);
                }
                parentClass.Enums.Add(newStruct);
            }

            // Add each struct to the correct class.
            foreach (string definition in structDefinitions)
            {
                StructDefinition newStruct = new StructDefinition(definition);
                ClassDefinition parentClass = GeneratedDefinitions.Find(def => def.PackageName == newStruct.PackageName && def.ClassFileName == newStruct.ClassFileName);
                if (parentClass == null)
                {
                    Console.WriteLine("[ERROR] Parent class '{0}.{1}' of struct '{2}' not found, skipping.", newStruct.PackageName, newStruct.ClassFileName, newStruct.Name);
                    continue;
                }
                parentClass.Structs.Add(newStruct);
            }
        }

        /// <summary>
        /// Exports the classes that have been generated using the <c>Export</c> utility class.
        /// </summary>
        public void ExportClasses()
        {
            // Export each of the generated classes.
            foreach (ClassDefinition definition in this.GeneratedDefinitions)
            {
                Console.WriteLine("[INFO] Generating UnrealScript file for '{0}'", definition.ClassFileName);
                Exporter.ExportClass(definition);
            }
        }
    }
}

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
        /// <summary>The classes that are currently being made.</summary>
        private List<ClassDefinition> GeneratedClasses { get; set; }

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
            List<string> classDefinitions = Regex.Split(strippedHeaderFile, @"(?=\/\/ Class)").ToList();

            // First element is always empty.
            classDefinitions.RemoveAt(0);

            // Create the classes and headers variables.
            this.GeneratedClasses = new List<ClassDefinition>();

            // Handle each definition.
            foreach (string definition in classDefinitions)
            {
                // Hand the class over to ClassDefinition for parsing.
                GeneratedClasses.Add(new ClassDefinition(definition));
            }
        }

        /// <summary>
        /// Exports the classes that have been generated using the <c>Export</c> utility class.
        /// </summary>
        public void ExportClasses()
        {
            // Export each of the generated classes.
            foreach (ClassDefinition classToExport in this.GeneratedClasses)
            {
                Console.WriteLine("[INFO] Generating UnrealScript file for '{0}'", classToExport.ClassName);
                Exporter.ExportClass(classToExport);
            }
        }
    }
}

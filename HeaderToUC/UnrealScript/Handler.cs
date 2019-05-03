using HeaderToUS.UnrealScriptDefinitions;
using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using HeaderToUS.ClassExporter;

namespace HeaderToUS.UnrealScript
{
    public class Handler
    {
        /// <summary>A reference to the entire header file.</summary>
        private readonly string entireHeaderDefinitions;
        /// <summary>The classes that are currently being made.</summary>
        public List<ClassDefinition> Classes { get; private set; }
        /// <summary>The header strings that are used to generate the classes.</summary>
        public List<string> ClassHeaders { get; private set; }

        /// <summary>
        /// Creates the handler
        /// </summary>
        /// <param name="entireHeaderDefinitions"></param>
        public Handler (string entireHeaderDefinitions)
        {
            // Preprocess the definitions, removing line breaks and tabs.
            this.entireHeaderDefinitions = entireHeaderDefinitions.Replace("\t", "").Replace("\r", "");

            // Split the definitions based on where they define a new class.
            // Gets anything in-between a class definition, including the commented definition.
            List<string> classDefinitions = Regex.Split(this.entireHeaderDefinitions, @"(?=\/\/ Class)").ToList();

            // First element is always empty.
            classDefinitions.RemoveAt(0);

            // Create the classes and headers variables.
            this.ClassHeaders = new List<string>();
            this.Classes = new List<ClassDefinition>();

            // Handle each definition.
            foreach (string definition in classDefinitions)
            {
                // Add the class to the stored definition.
                ClassHeaders.Add(definition);

                // Hand the class over to ClassDefinition for parsing.
                Classes.Add(new ClassDefinition(definition));
            }
        }

        /// <summary>
        /// Exports the classes that have been generated using the <c>Export</c> utility class.
        /// </summary>
        public void ExportClasses()
        {
            // Export each of the generated classes.
            foreach (ClassDefinition classToExport in this.Classes)
            {
                Exporter.ExportClass(classToExport);
            }
        }
    }
}

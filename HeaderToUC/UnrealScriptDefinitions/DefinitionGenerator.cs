using HeaderToUS.UnrealScriptDefinitions;
using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.Linq;
using HeaderToUS.ClassExporter;
using HeaderToUS.Audit;
using System.IO;

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
                EnumDefinition newEnum = new EnumDefinition(definition);
                ClassDefinition parentClass = GeneratedDefinitions.Find(def => def.PackageName == newEnum.PackageName && def.ClassFileName == newEnum.ClassFileName);

                // Create a new class if the parent doesn't exist.
                if (parentClass == null)
                {
                    Logger.Error("Parent class '" + newEnum.PackageName + "." + newEnum.ClassFileName + "' of enum '" + newEnum.Name + "' not found, setting as invalid.");
                    ClassDefinition invalidClass = new ClassDefinition(newEnum);
                    this.GeneratedDefinitions.Add(invalidClass);
                    continue;
                }

                parentClass.Enums.Add(newEnum);
            }

            // Add each struct to the correct class.
            foreach (string definition in structDefinitions)
            {
                StructDefinition newStruct = new StructDefinition(definition);
                ClassDefinition parentClass = GeneratedDefinitions.Find(def => def.PackageName == newStruct.PackageName && def.ClassFileName == newStruct.ClassFileName);

                // Create a new class if the parent doesn't exist.
                if (parentClass == null)
                {
                    Logger.Error("Parent class '" + newStruct.PackageName + "." + newStruct.ClassFileName + "' of struct '" + newStruct.Name + "' not found, setting as invalid.");
                    ClassDefinition invalidClass = new ClassDefinition(newStruct);
                    this.GeneratedDefinitions.Add(invalidClass);
                }
                else if (parentClass.ClassType == ClassDefinition.ClassTypes.Invalid)
                {
                    Logger.Error("Parent class '" + newStruct.PackageName + "." + newStruct.ClassFileName + "' of struct '" + newStruct.Name + "' not found, setting as invalid.");
                    parentClass.Structs.Add(newStruct);
                }
                else
                {
                    parentClass.Structs.Add(newStruct);
                }
            }

            // Check each class and set the extension class to native if the class is native. (Native classes can only extend native classes).
            foreach (ClassDefinition definition in this.GeneratedDefinitions)
            {
                if (definition.IsNative)
                {
                    ClassDefinition parentClass = this.GeneratedDefinitions.Find(predicateClass => predicateClass.Name == definition.ExtensionClassName);

                    // Could extend from a class that isn't in the header files given.
                    if (parentClass != null)
                    {
                        Logger.Info("Setting parent class '" + parentClass.Name + "' of '" + definition.Name + "' to native as the child is native.");
                        parentClass.IsNative = true;
                    }
                    else
                    {
                        Logger.Warn("Attempted to set the parent class '" + definition.ExtensionClassName + "' of '" + definition.Name + "' to native, but no reference exists.");
                    }
                }
            }
        }

        /// <summary>
        /// Exports the classes that have been generated using the <c>Export</c> utility class.
        /// </summary>
        public void ExportClasses()
        {
            // Delete the old packages if required.
            if (Program.FreshExport)
            {
                Logger.Info("Flag set for clean transpilation. \n       Wiping packages if they already exist...");
                List<string> packageNames = new List<string>();

                // Get package names.
                foreach (ClassDefinition definition in this.GeneratedDefinitions)
                {
                    string packageName = definition.PackageName;

                    // Generate a list of package names that need to be deleted.
                    if(!packageNames.Contains(packageName))
                    {
                        packageNames.Add(packageName);
                    }
                }

                // Delete packages.
                foreach (string package in packageNames)
                {
                    // Can only delete it if it exists.
                    if (Directory.Exists(package))
                    {
                        Directory.Delete(package, true);
                    }
                }
            }

            // Export each of the generated classes.
            foreach (ClassDefinition definition in this.GeneratedDefinitions)
            {
                // Generate the file.
                Logger.Info("Generating UnrealScript file for '" + definition.ClassFileName + "'");
                Exporter.ExportClass(definition);
            }
        }
    }
}

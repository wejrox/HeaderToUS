using HeaderToUS.UnrealScriptDefinitions;
using System.IO;

namespace HeaderToUS.ClassExporter
{
    public static class Exporter
    {
        /// <summary>
        /// Exports a class to a file in a folder relative to where the executable was located.
        /// Creates a directory structure based on the package name of the class being created.
        /// </summary>
        /// <param name="classToExport">Class that need to be exported.</param>
        public static void ExportClass(ClassDefinition classToExport) 
        {
            // Get the executable location.
            string currentDir = Directory.GetCurrentDirectory();

            // Create the package name.
            string packageName = classToExport.PackageName;

            // If the class is invalid, update the package name to be invalid.
            if (classToExport.ClassType == ClassDefinition.ClassTypes.Invalid)
            {
                packageName += "_INVALID";
            }

            // Create the directories if they don't exist.
            Directory.CreateDirectory(packageName);
            Directory.CreateDirectory(packageName + "/Classes");
            string scriptDir = currentDir + "/" + packageName + "/Classes/";
            string scriptName = classToExport.ClassFileName + ".uc";

            // Create the file and its contents
            File.WriteAllText(scriptDir + scriptName, classToExport.ToString());
        }
    }
}

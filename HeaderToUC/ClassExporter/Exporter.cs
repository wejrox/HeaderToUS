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

            // Create the directories if they don't exist.
            Directory.CreateDirectory(classToExport.PackageName);
            Directory.CreateDirectory(classToExport.PackageName + "/Classes");
            string scriptDir = currentDir + "/" + classToExport.PackageName + "/Classes/";
            string scriptName = classToExport.ClassName + ".uc";

            // Create the file and its contents
            File.WriteAllText(scriptDir + scriptName, classToExport.ToString());
        }
    }
}

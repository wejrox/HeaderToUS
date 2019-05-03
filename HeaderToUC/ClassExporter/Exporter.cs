using HeaderToUS.UnrealScriptDefinitions;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.ClassExporter
{
    public static class Exporter
    {
        public static void ExportClass(ClassDefinition classToExport) 
        {
                // Get the executable location.
                string currentDir = Directory.GetCurrentDirectory();

                // Create the directories if they don't exist.
                Directory.CreateDirectory(classToExport.PackageName);
                Directory.CreateDirectory(classToExport.PackageName + "/Classes");
                string scriptDir = currentDir + "/" + classToExport.PackageName + "/Classes/";
                string scriptName = classToExport.ClassName + ".uc";

                File.WriteAllText(scriptDir + scriptName, classToExport.ToString());
        }
    }
}

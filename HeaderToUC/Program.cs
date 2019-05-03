using HeaderToUS.ClassExporter;
using HeaderToUS.UnrealScript;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS
{
    class Program
    {
        static string headerFilePath = "";

        static void Main(string[] args)
        {
            // Get the file location to parse.
            try
            {
                headerFilePath = args[0].Length > 0 ? args[0] : throw new IndexOutOfRangeException();
            }
            catch (IndexOutOfRangeException) {
                Console.WriteLine("No header file was given, aborting...");
                Environment.Exit(1);
            }

            // Get the contents of the file to parse.
            string fileLineContents = File.ReadAllText(@"" + headerFilePath);

            // Create the definitions
            Handler ClassHandler = new Handler(fileLineContents);

            // Export the classes.
            ClassHandler.ExportClasses();
        }
    }
}

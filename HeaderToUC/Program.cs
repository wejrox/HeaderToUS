using HeaderToUS.UnrealScript;
using System;
using System.Collections.Generic;
using System.IO;

namespace HeaderToUS
{
    class Program
    {
        /// <summary>Paths to the files to be parsed.</summary>
        static List<string> filePaths = new List<string>();

        /// <summary>Whether to only export variables that are tagged as editable inside the UDK editor.</summary>
        public static bool OnlyExportEditable = false;

        static void Main(string[] args)
        {
            // Handle lack of parameters.
            if (args.Length < 1 || args[0] == "-rl" || args[0] == "--rocket-league")
            {
                Console.WriteLine("[FAILURE] No header file was given, aborting...");
                Environment.Exit(1);
            }

            // Get the classes header file location to parse.
            foreach (string argument in args)
            {
                if(argument == "-rl" || argument == "--rocket-league")
                {
                    OnlyExportEditable = true;
                } 
                else
                {
                    filePaths.Add(argument);
                }
            }

            // Get the contents of the files to parse.
            string fileContents = "";

            // Combine all of the files into one for more efficient parsing.
            foreach (string path in filePaths)
            {
                try
                {
                    fileContents += File.ReadAllText(@"" + path);
                }
                catch
                {
                    Console.WriteLine("[FAILURE] Could not find the file at '{0}', aborting...", path);
                    Environment.Exit(1);
                }
            }
            

            // Create the UnrealScript definitions.
            ClassGenerator ClassHandler = new ClassGenerator(fileContents);

            // Export the classes.
            ClassHandler.ExportClasses();

            // Pretty text for the user to know what's going on.
            Console.WriteLine("================================================================================");
            Console.WriteLine("[SUCESS] Classes have been generated.");
            Console.WriteLine("[INFO] Header files don't contain structs defined in classes.");
            Console.WriteLine("[INFO] You will receive errors about missing types if custom structs were used.");
            Console.WriteLine("[INFO] Manually define the structs, or comment out code using them.");
            Console.WriteLine("================================================================================");
        }
    }
}

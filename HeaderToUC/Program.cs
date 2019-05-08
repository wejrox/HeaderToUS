using HeaderToUS.Audit;
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

        /// <summary>Whether to remove the output from previous transpiling.</summary>
        public static bool FreshExport = false;

        static void Main(string[] args)
        {
            // The amount of argument modifiers provided.
            int modifiersProvided = 0;

            // Get the classes header file location to parse and other options to apply.
            foreach (string argument in args)
            {
                if(argument == "-e" || argument == "--only-editable")
                {
                    modifiersProvided++;
                    OnlyExportEditable = true;
                } 
                else if (argument == "-s" || argument == "--silent")
                {
                    modifiersProvided++;
                    Logger.LogToConsole = false;
                }
                else if (argument == "-c" || argument == "--clean")
                {
                    modifiersProvided++;
                    FreshExport = true;
                }
                else
                {
                    filePaths.Add(argument);
                }
            }

            // If the amount of arguments are the same as the modifiers, no file names have been provided.
            // This also covers what happens if no parameters are provided.
            if(args.Length == modifiersProvided)
            {
                Logger.Fatal("No header file names were provided, aborting...");
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
                    Logger.Fatal("Could not find the file at '" + path + "', aborting...");
                }
            }
            

            // Create the UnrealScript definitions.
            ClassGenerator ClassHandler = new ClassGenerator(fileContents);

            // Export the classes.
            ClassHandler.ExportClasses();

            Logger.DumpToFile();

            // Pretty text for the user to know what's going on.
            Console.WriteLine("================================================================================");
            Console.WriteLine("[SUCESS] Classes have been generated.");
            Console.WriteLine("================================================================================");
        }
    }
}

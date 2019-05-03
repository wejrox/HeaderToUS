using HeaderToUS.UnrealScript;
using System;
using System.IO;

namespace HeaderToUS
{
    class Program
    {
        /// <summary>The path to the file to parse.</summary>
        static string headerFilePath = "";
        /// <summary>Whether to only export variables that are tagged as editable inside the UDK editor.</summary>
        public static bool OnlyExportEditable = false;

        static void Main(string[] args)
        {
            // Get the file location to parse.
            try
            {
                headerFilePath = args[0].Length > 0 ? args[0] : throw new IndexOutOfRangeException();

            }
            catch (IndexOutOfRangeException) {
                Console.WriteLine("[FAILURE] No header file was given, aborting...");
                Environment.Exit(1);
            }

            // Decide whether to export un-editable variables.
            try
            {
                if (args[1] == "-rl" || args[1] == "--rocket-league")
                {
                    Console.WriteLine("[INFO] Rocket league modding specified, only exporting editable variables.");
                    OnlyExportEditable = true;
                }

            }
            catch (IndexOutOfRangeException)
            {
                // Do nothing, argument was not required.
            }

            // Get the contents of the file to parse.
            string fileLineContents = File.ReadAllText(@"" + headerFilePath);

            // Create the UnrealScript definitions.
            ClassGenerator ClassHandler = new ClassGenerator(fileLineContents);

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

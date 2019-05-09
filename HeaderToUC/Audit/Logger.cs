using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static HeaderToUS.Audit.LogEntry;

namespace HeaderToUS.Audit
{
    /// <summary>
    /// Utility class used to inform the user of things which handles cleanup and output upon application exit.
    /// </summary>
    public static class Logger
    {
        /// <summary>Whether to output the current status to the console when running the application.</summary>
        public static bool LogToConsole = true;

        /// <summary>Where to output the log file.</summary>
        private static string logFileName = "output-log.txt";

        private static List<LogEntry> logOutputs = new List<LogEntry>();
        private static List<LogEntry> warnOuputs = new List<LogEntry>();
        private static List<LogEntry> errorOutputs = new List<LogEntry>();

        /// <summary>If a fatal error occurs, it is stored here.</summary>
        private static LogEntry fatalOutput;

        /// <summary>
        /// A log entry which informs the user of something.
        /// </summary>
        /// <param name="message">Description of what happened.</param>
        /// <param name="exception">Any exception that was thrown.</param>
        public static void Info(string message, Exception exception = null)
        {
            LogEntry newEntry;
            if (exception != null)
            {
                newEntry = new LogEntry(message, LogSeverity.Info, exception);
            }
            else
            {
                newEntry = new LogEntry(message, LogSeverity.Info);
            }

            logOutputs.Add(newEntry);

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }
        }

        /// <summary>
        /// A log entry warning the user of something.
        /// </summary>
        /// <param name="message">Description of what went wrong.</param>
        /// <param name="exception">Any exception that was thrown.</param>
        public static void Warn(string message, Exception exception = null)
        {
            LogEntry newEntry;
            if (exception != null)
            {
                newEntry = new LogEntry(message, LogSeverity.Warn, exception);
            }
            else
            {
                newEntry = new LogEntry(message, LogSeverity.Warn);
            }

            warnOuputs.Add(newEntry);

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }
        }

        /// <summary>
        /// A log entry informing the user of an error that occured.
        /// </summary>
        /// <param name="message">Description of what went wrong.</param>
        /// <param name="exception">Any exception that was thrown.</param>
        public static void Error(string message, Exception exception = null)
        {
            LogEntry newEntry;
            if (exception != null)
            {
                newEntry = new LogEntry(message, LogSeverity.Error, exception);
            }
            else
            {
                newEntry = new LogEntry(message, LogSeverity.Error);
            }

            errorOutputs.Add(newEntry);

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }
        }

        /// <summary>
        /// Informs the user of a fatal error, prints the log file and exits the application.
        /// </summary>
        /// <param name="message">Description of what went wrong.</param>
        /// <param name="attachedException">Exception that triggered this fatal error.</param>
        public static void Fatal(string message, Exception attachedException)
        {
            LogEntry newEntry = new LogEntry(message, LogSeverity.Fatal);

            // Set the exception if one was thrown.
            if(attachedException != null)
            {
                newEntry.ThrownException = attachedException;
            }

            fatalOutput = newEntry;

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }

            // Dump logs and quit.
            DumpLogsToFile();
            Environment.Exit(1);
        }

        /// <summary>
        /// Dumps what has been logged so far into a file in the same directory as the exe.
        /// </summary>
        public static void DumpLogsToFile()
        {
            // Create or recreate the log file.
            try
            {
                File.Create(logFileName).Close();
            }
            catch (Exception e)
            {
                Console.Out.WriteLine("Could not create the log file: \n" + e.Message);
            }

            // Create the log contents.
            string logOutput = "";
            foreach(LogEntry e in logOutputs)
            {
                logOutput += e.ToString() + '\n';
            }
            
            foreach (LogEntry e in warnOuputs)
            {
                logOutput += e.ToString() + '\n';
            }
            
            foreach (LogEntry e in errorOutputs)
            {
                logOutput += e.ToString() + '\n';
            }
            
            if (fatalOutput != null)
            {
                logOutput += fatalOutput.ToString() + '\n';
            }

            // Write the log file.
            try
            {
                File.AppendAllText(logFileName, logOutput);
            }
            catch (Exception e)
            {
                Console.Out.WriteLine("Could not add output to the log file: \n", e.Message);
            }
        }
    }
}

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static HeaderToUS.Audit.LogEntry;

namespace HeaderToUS.Audit
{
    public static class Logger
    {
        public static bool LogToConsole = true;

        private static string logFileName = "output-log.txt";

        private static List<LogEntry> logOutputs = new List<LogEntry>();
        private static List<LogEntry> warnOuputs = new List<LogEntry>();
        private static List<LogEntry> errorOutputs = new List<LogEntry>();
        private static LogEntry fatalOutput;

        public static void Log(string message, Exception exception = null)
        {
            LogEntry newEntry;
            if (exception != null)
            {
                newEntry = new LogEntry(message, LogSeverity.Log, exception);
            }
            else
            {
                newEntry = new LogEntry(message, LogSeverity.Log);
            }

            logOutputs.Add(newEntry);

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }
        }

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

        public static void Fatal(string message)
        {
            LogEntry newEntry = new LogEntry(message, LogSeverity.Fatal);

            fatalOutput = newEntry;

            if (LogToConsole)
            {
                Console.Out.WriteLine(newEntry);
            }

            DumpToFile();
            Environment.Exit(1);
        }

        public static void DumpToFile()
        {
            File.Create(logFileName);
            foreach(LogEntry e in logOutputs)
            {
                File.AppendAllText(logFileName, e.ToString());
            }
            
            foreach (LogEntry e in warnOuputs)
            {
                File.AppendAllText(logFileName, e.ToString());
            }
            
            foreach (LogEntry e in errorOutputs)
            {
                File.AppendAllText(logFileName, e.ToString());
            }
            
            if (fatalOutput != null)
            {
                File.AppendAllText(logFileName, fatalOutput.ToString());
            }
        }
    }
}

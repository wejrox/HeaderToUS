using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.Audit
{
    class LogEntry
    {
        /// <summary>
        /// How important this log message is. 
        /// </summary>
        public enum LogSeverity
        {
            Info,
            Warn,
            Error,
            Fatal
        }

        /// <summary>Text that is displayed to the user.</summary>
        public string Message { get; private set; }
        /// <summary>Importance level to assign to this entry.</summary>
        public LogSeverity Severity { get; private set; }
        /// <summary>Exception (if any) that caused this log entry to be instantiated.</summary>
        public Exception ThrownException { get; set; }

        /// <summary>
        /// Creates a new log entry with only an message.
        /// Severity is defaulted to info.
        /// </summary>
        /// <param name="message">Text to be displayed to the user.</param>
        public LogEntry(string message)
        {
            this.Message = message;
            this.Severity = LogSeverity.Info;
        }

        /// <summary>
        /// Creates a new log entry withe message given and sets the severity to the level provided.
        /// </summary>
        /// <param name="message">Text to be displayed to the user.</param>
        /// <param name="logSeverity">How important the log is.</param>
        public LogEntry(string message, LogSeverity logSeverity)
            : this(message)
        {
            this.Severity = logSeverity;
        }

        /// <summary>
        /// Creates a new log entry with the parameters given.
        /// </summary>
        /// <param name="message">Text to be displayed to the user.</param>
        /// <param name="logSeverity">How important the log is.</param>
        /// <param name="thrownException">An exception that was thrown with this log.</param>
        public LogEntry(string message, LogSeverity logSeverity, Exception thrownException)
            : this(message, logSeverity)
        {
            this.ThrownException = thrownException;
        }

        /// <summary>
        /// Generates the error message.
        /// </summary>
        /// <returns>A formatted error message that can be displayed to the user.</returns>
        public override string ToString()
        {
            string formattedMessage = "";
            switch (this.Severity)
            {
                case LogSeverity.Info:
                    formattedMessage += "[INFO] ";
                    break;
                case LogSeverity.Warn:
                    formattedMessage += "[WARN] ";
                    break;
                case LogSeverity.Error:
                    formattedMessage += "[ERROR] ";
                    break;
                case LogSeverity.Fatal:
                    formattedMessage += "[FATAL] ";
                    break;
            }

            formattedMessage += this.Message;
            if (this.ThrownException != null)
            {
                formattedMessage += this.ThrownException.Message;
            }

            return formattedMessage;
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HeaderToUS.Audit
{
    class LogEntry
    {
        public enum LogSeverity
        {
            Log,
            Warn,
            Error,
            Fatal
        }

        public string Message { get; private set; }
        public LogSeverity Severity { get; private set; }
        public Exception ThrownException { get; private set; }

        public LogEntry(string message)
        {
            this.Message = message;
            this.Severity = LogSeverity.Log;
        }

        public LogEntry(string message, LogSeverity logSeverity)
            : this(message)
        {
            this.Severity = logSeverity;
        }

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
                case LogSeverity.Log:
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

            formattedMessage += this.Message + '\n';
            if (this.ThrownException != null)
            {
                formattedMessage += this.ThrownException.Message + '\n';
            }

            return formattedMessage;
        }
    }
}

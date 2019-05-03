using System;

public class InvalidVariableException : Exception
{
    public InvalidVariableException()
    {
    }

    public InvalidVariableException(string message)
        : base(message)
    {
    }

    public InvalidVariableException(string message, Exception inner)
        : base(message, inner)
    {
    }
}

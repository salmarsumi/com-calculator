using Serilog;

namespace COMCalculator.Logging;

/// <summary>
/// Factory class for creating logger instances.
/// </summary>
public static class LoggerFactory
{
    /// <summary>
    /// Initialize a Serilog logger instance.
    /// </summary>
    public static ILogger CreateLogger()
    {
        return new LoggerConfiguration()
            .MinimumLevel.Debug()
            .WriteTo.Console()
            .CreateLogger();
    }
}

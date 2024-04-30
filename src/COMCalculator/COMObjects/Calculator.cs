using COMCalculator.Logging;
using Serilog;
using System.Runtime.InteropServices;

namespace COMCalculator.COMObjects;

/// <summary>
/// COM calculator interface.
/// </summary>
[Guid("34bc4842-8c2b-49c0-816c-859f7a6ded5b")]
[ComVisible(true)]
[InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
public interface ICalculator
{
    /// <summary>
    /// Calculate the sum of two integer numbers.
    /// </summary>
    /// <param name="x">First number.</param>
    /// <param name="y">Second number.</param>
    /// <returns>The integer result of x + y.</returns>
    int Add(int x, int y);

    /// <summary>
    /// Calculate the difference of two integer numbers.
    /// </summary>
    /// <param name="x">First number.</param>
    /// <param name="y">Second number.</param>
    /// <returns>The integer result of x - y.</returns>
    int Subtract(int x, int y);
}

/// <summary>
/// COM calculator implementation.
/// </summary>
[Guid("20372aac-e4bb-42fa-82b0-fea0732375be")]
[ComVisible (true)]
[ClassInterface(ClassInterfaceType.None)]
public class Calculator : ICalculator
{
    private ILogger _logger;

    /// <summary>
    /// Create a new instance of the Calculator object.
    /// </summary>
    public Calculator()
    {
        _logger = LoggerFactory.CreateLogger();
    }

    /// <summary>
    /// Create a new instance of the Calculator object.
    /// </summary>
    /// <param name="logger">Serilog ILogger instance.</param>
    public Calculator(ILogger logger)
    {
        _logger = logger;
    }

    /// <inheritdoc cref="ICalculator.Add(int, int)"/>
    public int Add(int x, int y)
    {
        _logger.Debug("Add method invoked");
        int result = x + y;
        return result;
    }

    /// <inheritdoc cref="ICalculator.Subtract(int, int)"/>
    public int Subtract(int x, int y)
    {
        _logger.Debug("Subtract method invoked");
        int result = x - y;
        return result;
    }
}

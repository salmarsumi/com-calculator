using COMCalculator.Logging;
using Serilog;
using System.Runtime.InteropServices;

namespace COMCalculator.COMObjects;

/// <summary>
/// COM calculator events interface.
/// </summary>
[Guid("1aeaba48-3826-4c79-bede-53204338c5cb")]
[ComVisible(true)]
[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
public interface ICalculatorEvents
{
    /// <summary>
    /// Raised on multiply completion.
    /// </summary>
    /// <param name="result">The result of the multiplication operation.</param>
    [DispId(1)]
    void OnMultiplyCompleted(int result);
}

/// <summary>
/// COM calculator interface.
/// </summary>
[Guid("34bc4842-8c2b-49c0-816c-859f7a6ded5b")]
[ComVisible(true)]
[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
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

    /// <summary>
    /// Calculate the product of two integer numers.
    /// </summary>
    /// <param name="x">First number.</param>
    /// <param name="y">Second number.</param>
    [DispId(1)]
    void Multiply(int x, int y);
}

/// <summary>
/// COM calculator implementation.
/// </summary>
[Guid("20372aac-e4bb-42fa-82b0-fea0732375be")]
[ComVisible (true)]
[ClassInterface(ClassInterfaceType.None)]
[ComSourceInterfaces(typeof(ICalculatorEvents))]
[ProgId("COMCalculator.Calculator")]
public class Calculator :  ICalculator
{
    private ILogger _logger;

    /// <summary>
    /// A delegate that will handle the multiply complete event.
    /// </summary>
    /// <param name="result">The integer result of the multiplication operation.</param>
    public delegate void MultiplyCompletedHandler(int result);

    /// <summary>
    /// The event that will be raised when multiplication is complete.
    /// </summary>
    public event MultiplyCompletedHandler? OnMultiplyCompleted;

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
        return x + y;
    }

    /// <inheritdoc cref="ICalculator.Subtract(int, int)"/>
    public int Subtract(int x, int y)
    {
        _logger.Debug("Subtract method invoked");
        return x - y;
    }

    /// <inheritdoc cref="ICalculator.Multiply(int, int)"/>
    public void Multiply(int x, int y)
    {
        _logger.Debug("Multiply method invoked");
        // Simulate a long running operation.
        Task.Run(async () =>
        {
            await Task.Delay(1000);
            _logger.Debug("Delay complete");
            // Raise the OnMultiplyCompleted event.
            OnMultiplyCompleted?.Invoke(x * y);
        });
    }
}

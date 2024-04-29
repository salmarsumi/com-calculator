using System.Runtime.InteropServices;
using System.Runtime.InteropServices.Marshalling;

namespace COMCalculator.COMObjects;

/// <summary>
/// COM calculator interface.
/// </summary>
[GeneratedComInterface]
[Guid("34bc4842-8c2b-49c0-816c-859f7a6ded5b")]
public partial interface ICalculator
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
[GeneratedComClass]
internal partial class Caclulator : ICalculator
{
    public int Add(int x, int y)
    {
        return x + y;
    }

    public int Subtract(int x, int y)
    {
        return x - y;
    }
}

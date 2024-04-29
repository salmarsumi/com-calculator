using COMCalculator.COMObjects;
using Moq;
using Serilog;

namespace COMCalculator.UnitTests;

public class CalculatorTests
{
    private readonly ICalculator _subject;

    public CalculatorTests()
    {
        var logger = new Mock<ILogger>();
        _subject = new Calculator(logger.Object);
    }

    [Fact]
    public void Add_Returns_CorrectResult()
    {
        // Arrange
        int x = 20, y = 10, expected = 30;

        // Act
        int result = _subject.Add(x, y);

        // Assert
        Assert.Equal(expected, result);
    }

    [Fact]
    public void Subtract_Returns_CorrectResult()
    {
        // Arrange
        int x = 20, y = 10, expected = 10;

        // Act
        int result = _subject.Subtract(x, y);

        // Assert
        Assert.Equal(expected, result);
    }
}

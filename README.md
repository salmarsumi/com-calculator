# COM Calculator
A COM Object exposing basic calculator functionality implemented using .NET 8 and Visual Studio 2022.

## Prerequisites
* .NET 8.0 SDK.
* MSVC build tools.

## Running the client app
In order to consume the Calculator COM object the COMCalculator project host file `COMCalculator.comhost.dll` needs to be registered on the consumer's system as follows:
1. Build the COMCalculator C# project using the following command:
    ```shell
    dotnet build
    ```
2. Register the produced com host as follows:
    ```shell
    regsvr32 COMCalculator.comhost.dll
    ```
3. Run any clients consuming the Calcultor COM object.
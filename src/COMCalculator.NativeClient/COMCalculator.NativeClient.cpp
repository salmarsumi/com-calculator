// COMCalculator.NativeClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <atlbase.h>
#include "EventSink.h"
#include "COMCalculator.h"
#include <string>

using namespace ATL;

int ExitWithError(HRESULT hr, std::string message)
{
    std::cerr << message << std::system_category().message(hr) << std::endl;
    CoUninitialize();
    return -1;
}

int main()
{
    std::cout << "Visual C++ Client\n";

    HRESULT hr;
    long x = 10, y = 5;
    long result;

    CComPtr<ICalculator> pCalc;

    // Initialize the COM library.
    hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);

    // Create an instance of the Calculator object.
    hr = pCalc.CoCreateInstance(__uuidof(Calculator));

    if (FAILED(hr))
    {
        return ExitWithError(hr, "Failed to create COM object: ");
    }

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    hr = pCalc->Add(x, y, &result);
    std::cout << "x + y = " << result << std::endl;

    hr = pCalc->Subtract(x, y, &result);
    std::cout << "x - y = " << result << std::endl;

    // Create the event sink.
    CComPtr<IDispatch> pEventSink = new EventSink();

    // Connect the event sink to the COM object.
    CComQIPtr<IConnectionPointContainer> pCPC(pCalc);
    CComPtr<IConnectionPoint> pCP;
    hr = pCPC->FindConnectionPoint(__uuidof(ICalculatorEvents), &pCP);
    if (FAILED(hr))
    {
        return ExitWithError(hr, "Failed to connect event sink: ");
    }

    DWORD cookie;
    // Connect the event sink.
    pCP->Advise(pEventSink, &cookie);
    // Trigger the multiply operation.
    pCalc->Multiply(x, y);

    std::string s;
    getline(std::cin, s);

    // Disconnect the event sink
    pCP->Unadvise(cookie);

    CoUninitialize();
    return 0;
}
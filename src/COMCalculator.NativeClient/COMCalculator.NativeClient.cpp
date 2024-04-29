// COMCalculator.NativeClient.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "COMCalculator.h"

int main()
{
    std::cout << "Visual C++ Native Client\n";

    HRESULT hr;
    long x = 10, y = 5;
    ICalculator* calculator = NULL;
    long result;

    // Initialize the COM library.
    hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);

    // Create an instance of the Calculator object.
    hr = CoCreateInstance(__uuidof(Calculator), NULL, CLSCTX_INPROC_SERVER, __uuidof(ICalculator), (void**)&calculator);

    if (SUCCEEDED(hr)) 
    {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;

        hr = calculator->Add(x, y, &result);
        std::cout << "x + y = " << result << std::endl;
        
        hr = calculator->Subtract(x, y, &result);
        std::cout << "x - y = " << result << std::endl;
    }
    else
    {
        std::cout << "Failed to create COM object: " << std::system_category().message(hr) << "\n";
    }

    CoUninitialize();
}

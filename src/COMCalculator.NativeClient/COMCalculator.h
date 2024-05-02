#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* library COMCalculator */

/* dispinterface ICalculatorEvents */

MIDL_INTERFACE("1AEABA48-3826-4C79-BEDE-53204338C5CB")
ICalculatorEvents : public IDispatch
{
public:
	virtual HRESULT __stdcall OnMultiplyCompleted(
		/* [in] */ long result
	) = 0;
};

/* dispinterface ICalculator */

MIDL_INTERFACE("34BC4842-8C2B-49C0-816C-859F7A6DED5B")
ICalculator : public IDispatch
{
public:
	virtual HRESULT __stdcall Add(
		/* [in] */ long x,
		/* [in] */ long y,
		/* [retval][out] */ long* pRetVal) = 0;

	virtual HRESULT __stdcall Subtract(
		/* [in] */ long x,
		/* [in] */ long y,
		/* [retval][out] */ long* pRetVal) = 0;

	virtual HRESULT __stdcall Multiply(
		/* [in] */ long x,
		/* [in] */ long y
	) = 0;
};


EXTERN_C const CLSID CLSID_Calculator;
class DECLSPEC_UUID("20372AAC-E4BB-42FA-82B0-FEA0732375BE") Calculator;

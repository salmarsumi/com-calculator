#include "EventSink.h"

// IUnkonw methods
HRESULT __stdcall EventSink::QueryInterface(REFIID riid, void** ppvObject)
{
	if (riid ==  IID_IUnknown || riid == IID_IDispatch || riid == __uuidof(ICalculatorEvents))
	{
		*ppvObject = static_cast<IDispatch *>(this);
		AddRef();
		return S_OK;
	}
	*ppvObject = nullptr;
	return E_NOINTERFACE;
}

ULONG __stdcall EventSink::AddRef(void)
{
	return ++m_refCount;
}

ULONG __stdcall EventSink::Release(void)
{
	if (--m_refCount == 0)
	{
		delete this;
		return 0;
	}
	return m_refCount;
}

// IDispatch methods
HRESULT __stdcall EventSink::GetTypeInfoCount(UINT* pctinfo)
{
	*pctinfo = 0;
	return S_OK;
}

HRESULT __stdcall EventSink::GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo)
{
	*ppTInfo = nullptr;
	return E_NOTIMPL;
}

HRESULT __stdcall EventSink::GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId)
{
	if (cNames == 1 && wcscmp(rgszNames[0], L"OnMultiplyCompleted") == 0)
	{
		*rgDispId = 1;
		return S_OK;
	}
	return DISP_E_UNKNOWNNAME;
}

HRESULT __stdcall EventSink::Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr)
{
	// OnMultiplyCompleted
	if (dispIdMember == 1)
	{
		std::wcout << L"OnMultiplyCompleted triggered: " << pDispParams->rgvarg[0].lVal << std::endl;
	}
	return DISP_E_MEMBERNOTFOUND;
}
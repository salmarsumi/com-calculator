#include <iostream>
#include <atlbase.h>
#include <atlcom.h>
#include <comutil.h>
#include "COMCalculator.h"

class EventSink : public IDispatch {
public:
	// Constructors and destructors
	EventSink() : m_refCount(0) { }

	// IUnkonw methods
	HRESULT __stdcall QueryInterface(REFIID riid, void** ppvObject) override;

	ULONG __stdcall AddRef(void) override;

	ULONG __stdcall Release(void) override;

	// IDispatch methods
	HRESULT __stdcall GetTypeInfoCount(UINT* pctinfo) override;

	HRESULT __stdcall GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo** ppTInfo) override;

	HRESULT __stdcall GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID lcid, DISPID* rgDispId) override;

	HRESULT __stdcall Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr) override;

private:
	ULONG m_refCount;
};
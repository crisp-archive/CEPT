// CEPT.h : main header file for the CEPT application
//

#if !defined(AFX_CEPT_H__40B14D2C_7B26_42A2_8478_F4220044A97C__INCLUDED_)
#define AFX_CEPT_H__40B14D2C_7B26_42A2_8478_F4220044A97C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCEPTApp:
// See CEPT.cpp for the implementation of this class
//

class CCEPTApp : public CWinApp
{
public:
	CCEPTApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCEPTApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCEPTApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CEPT_H__40B14D2C_7B26_42A2_8478_F4220044A97C__INCLUDED_)

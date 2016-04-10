// ACEFtp.h : main header file for the ACEFTP application
//

#if !defined(AFX_ACEFTP_H__524C50E9_182D_45CA_8968_1C4EE098D553__INCLUDED_)
#define AFX_ACEFTP_H__524C50E9_182D_45CA_8968_1C4EE098D553__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CACEFtpApp:
// See ACEFtp.cpp for the implementation of this class
//

class CACEFtpApp : public CWinApp
{
public:
	CACEFtpApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CACEFtpApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CACEFtpApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ACEFTP_H__524C50E9_182D_45CA_8968_1C4EE098D553__INCLUDED_)

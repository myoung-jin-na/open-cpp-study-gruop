// ACEFtpView.h : interface of the CACEFtpView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ACEFTPVIEW_H__7544DD91_E890_454E_92D4_2273A27788CE__INCLUDED_)
#define AFX_ACEFTPVIEW_H__7544DD91_E890_454E_92D4_2273A27788CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "AceInit.h"
#include "Acceptor.h"
#include "ace/Select_Reactor.h"
#include "ace/TP_Reactor.h"
#include "ace/Thread_Manager.h"

class CACEFtpView : public CFormView
{
protected: // create from serialization only
	CACEFtpView();
	DECLARE_DYNCREATE(CACEFtpView)

public:
	//{{AFX_DATA(CACEFtpView)
	enum{ IDD = IDD_ACEFTP_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

protected:
	AceInit mInit;
	Acceptor* m_Acceptor;
	ACE_TP_Reactor mTpReator;          // thread-pool 관련 Reactor 클래스
    ACE_Reactor reactor;


// Attributes
public:
	CACEFtpDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CACEFtpView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CACEFtpView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CACEFtpView)
	afx_msg void OnListenBtn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ACEFtpView.cpp
inline CACEFtpDoc* CACEFtpView::GetDocument()
   { return (CACEFtpDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ACEFTPVIEW_H__7544DD91_E890_454E_92D4_2273A27788CE__INCLUDED_)

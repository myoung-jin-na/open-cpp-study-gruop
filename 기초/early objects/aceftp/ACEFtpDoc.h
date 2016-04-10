// ACEFtpDoc.h : interface of the CACEFtpDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ACEFTPDOC_H__ACCF6022_184F_452A_A6EA_7A6FBE7737E5__INCLUDED_)
#define AFX_ACEFTPDOC_H__ACCF6022_184F_452A_A6EA_7A6FBE7737E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CACEFtpDoc : public CDocument
{
protected: // create from serialization only
	CACEFtpDoc();
	DECLARE_DYNCREATE(CACEFtpDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CACEFtpDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CACEFtpDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CACEFtpDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ACEFTPDOC_H__ACCF6022_184F_452A_A6EA_7A6FBE7737E5__INCLUDED_)

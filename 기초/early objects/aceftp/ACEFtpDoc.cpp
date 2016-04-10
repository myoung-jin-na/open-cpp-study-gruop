// ACEFtpDoc.cpp : implementation of the CACEFtpDoc class
//

#include "stdafx.h"
#include "ACEFtp.h"

#include "ACEFtpDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CACEFtpDoc

IMPLEMENT_DYNCREATE(CACEFtpDoc, CDocument)

BEGIN_MESSAGE_MAP(CACEFtpDoc, CDocument)
	//{{AFX_MSG_MAP(CACEFtpDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CACEFtpDoc construction/destruction

CACEFtpDoc::CACEFtpDoc()
{
	// TODO: add one-time construction code here

}

CACEFtpDoc::~CACEFtpDoc()
{
}

BOOL CACEFtpDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CACEFtpDoc serialization

void CACEFtpDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CACEFtpDoc diagnostics

#ifdef _DEBUG
void CACEFtpDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CACEFtpDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CACEFtpDoc commands

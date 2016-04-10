// ACEFtpView.cpp : implementation of the CACEFtpView class
//

#include "stdafx.h"
#include "ACEFtp.h"

#include "ACEFtpDoc.h"
#include "ACEFtpView.h"




#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CACEFtpView

IMPLEMENT_DYNCREATE(CACEFtpView, CFormView)

BEGIN_MESSAGE_MAP(CACEFtpView, CFormView)
	//{{AFX_MSG_MAP(CACEFtpView)
	ON_BN_CLICKED(IDC_LISTEN_BTN, OnListenBtn)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CACEFtpView construction/destruction

CACEFtpView::CACEFtpView()
	: CFormView(CACEFtpView::IDD),reactor(&mTpReator)
{

	//{{AFX_DATA_INIT(CACEFtpView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CACEFtpView::~CACEFtpView()
{
	reactor.end_reactor_event_loop();
}

void CACEFtpView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CACEFtpView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CACEFtpView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CACEFtpView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CACEFtpView printing

BOOL CACEFtpView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CACEFtpView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CACEFtpView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CACEFtpView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CACEFtpView diagnostics

#ifdef _DEBUG
void CACEFtpView::AssertValid() const
{
	CFormView::AssertValid();
}

void CACEFtpView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CACEFtpDoc* CACEFtpView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CACEFtpDoc)));
	return (CACEFtpDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CACEFtpView message handlers

ACE_THR_FUNC_RETURN  event_acceptor_loop (void *arg) 
{
  ACE_Reactor *reactor = ACE_static_cast (ACE_Reactor *, arg);

  //reactor->owner (ACE_OS::thr_self ());
  
  reactor->run_reactor_event_loop ();
  
  return 0;
}

void CACEFtpView::OnListenBtn() 
{

	m_Acceptor = new Acceptor();	
	m_Acceptor->open("127.0.0.1:99");   // 수동적 소켓에 대한 ACE에서 내부적으로 Listen, Bind 까지 수행
	m_Acceptor->setReactor(&reactor);

	ACE_Thread_Manager::instance()->spawn(event_acceptor_loop, &reactor);
}

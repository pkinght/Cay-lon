
// Caylon.cpp : implementation of the CaylonView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "bai16-17103072.h"
#endif

#include "bai16-17103072Doc.h"
#include "Caylon.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CaylonView

IMPLEMENT_DYNCREATE(CaylonView, CView)

BEGIN_MESSAGE_MAP(CaylonView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CaylonView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CaylonView construction/destruction

CaylonView::CaylonView()
{
	// TODO: add construction code here
	h=0;
	a=0;
}

CaylonView::~CaylonView()
{
}

BOOL CaylonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CaylonView drawing

void CaylonView::OnDraw(CDC* /*pDC*/)
{
	Cbai1617103072Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC =new CClientDC(this);
	nutbam1.thietlap(500,300,560,330);
	nutbam1.ve(pDC);
	pDC->TextOutW(510,305,CString("Grow"));
	nutbam2.thietlap(500,350,560,380);
	nutbam2.ve(pDC);
	pDC->TextOutW(510,355,CString("Reset"));
	cay1.thietlap(pDC);
	cay1.vecaymoi(pDC,h);
	// TODO: add draw code for native data here
}


// CaylonView printing


void CaylonView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CaylonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CaylonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CaylonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CaylonView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CaylonView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CaylonView diagnostics

#ifdef _DEBUG
void CaylonView::AssertValid() const
{
	CView::AssertValid();
}

void CaylonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cbai1617103072Doc* CaylonView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cbai1617103072Doc)));
	return (Cbai1617103072Doc*)m_pDocument;
}
#endif //_DEBUG


// CaylonView message handlers


void CaylonView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if(nutbam1.tronghinh(point)==1&&a<9)
	{
		while(a<10)
		{
		cay1.caylon(pDC,h);
		h++;
		Sleep(800);
		a++;
		}
	}
	if(nutbam2.tronghinh(point)==1)
	{
		cay1.xoacaycu(pDC);
		cay1.thietlap(pDC);
		h=0;a=0;
		cay1.vecaymoi(pDC,h);
	}
	CView::OnLButtonDown(nFlags, point);
}

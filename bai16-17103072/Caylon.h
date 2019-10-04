
// Caylon.h : interface of the CaylonView class
//

#pragma once
#include "hcn.h"
#include "hinhtron.h"
#include "cay.h"
class CaylonView : public CView
{
protected: // create from serialization only
	CaylonView();
	DECLARE_DYNCREATE(CaylonView)

// Attributes
public:
	Cbai1617103072Doc* GetDocument() const;

// Operations
public:
	cay cay1;
	hcn nutbam1,nutbam2;
	CClientDC *pDC;
	int k,t,h,a;
// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CaylonView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in Caylon.cpp
inline Cbai1617103072Doc* CaylonView::GetDocument() const
   { return reinterpret_cast<Cbai1617103072Doc*>(m_pDocument); }
#endif


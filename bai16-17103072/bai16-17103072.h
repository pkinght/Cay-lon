
// bai16-17103072.h : main header file for the bai16-17103072 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// Cbai1617103072App:
// See bai16-17103072.cpp for the implementation of this class
//

class Cbai1617103072App : public CWinAppEx
{
public:
	Cbai1617103072App();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cbai1617103072App theApp;

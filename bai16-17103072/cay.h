#pragma once
#include "hcn.h"
#include "hinhtron.h"
class cay
{
	hinhtron la1,la2,qua1,qua2,qua3,qua4;
	hcn than1,than2;
public:
	cay(void);
	void thietlap(CClientDC *pDC);
	void butvebandau(CClientDC *pDC,int s);
	void caylon(CClientDC *pDC,int h);
	void vecaymoi(CClientDC *pDC,int h);
	void xoacaycu(CClientDC *pDC);
	~cay(void);
};


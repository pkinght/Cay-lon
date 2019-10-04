#include "StdAfx.h"
#include "cay.h"
cay::cay(void)
{
}
void cay::thietlap(CClientDC *pDC)
{
	la1.thietlap(300,300,350,350);
	than1.thietlap(315,340,335,380);
	qua1.thietlap(250,100,290,140);
	qua2.thietlap(370,120,410,160);
	qua3.thietlap(280,160,320,200);
	qua4.thietlap(300,80,330,110);
}
void cay::butvebandau(CClientDC *pDC,int s)
{
	int r=0,g=0,b=0;
	int r1=50,g1=20,b1=22;
	int r2=10,g2=90,b2=10;
	int r3=100,g3=150,b3=35;
	int r4=180,g4=15,b4=15;
	CPen *but1 = new CPen(PS_SOLID,1,RGB(r,g,b));
	pDC->SelectObject(but1);
	if(s==1)
	{
		CBrush *mauthan =new CBrush(RGB(r1,g1,b1));
		pDC->SelectObject(mauthan);
	}
	else
	{
		if(s==2)
		{
			CBrush *maula =new CBrush(RGB(r2,g2,b2));
			pDC->SelectObject(maula);
		}
		else
		{
			if(s==3)
			{
				CBrush *mauquaxanh =new CBrush(RGB(r3,g3,b3));
				pDC->SelectObject(mauquaxanh);
			}
			else
			{
				CBrush *maquachin =new CBrush(RGB(r4,g4,b4));
				pDC->SelectObject(maquachin);
			}
		}
	}
}
void cay::vecaymoi(CClientDC *pDC,int h)
{
	butvebandau(pDC,1);
	than1.ve(pDC);
	butvebandau(pDC,2);
	la1.ve(pDC);
	if(h==9)
	{
		butvebandau(pDC,3);
		qua1.ve(pDC);
		qua2.ve(pDC);
		qua3.ve(pDC);
		qua4.ve(pDC);
		Sleep(1000);
		butvebandau(pDC,4);
		qua1.ve(pDC);
		qua2.ve(pDC);
		qua3.ve(pDC);
		qua4.ve(pDC);
		Sleep(1000);
	}
}
void cay::caylon(CClientDC *pDC,int k,int t,int h )
{
	if(k==0)
		{
			if(t==0)
				xoacaycu(pDC);
			la1.lon(pDC,-9,-25,9,-10);
			than1.lon(pDC,-3,-15,3,0);
			vecaymoi(pDC,h);
			k=1;t=1;
		}
		else
		{
			if(t==1)
				xoacaycu(pDC);
			la1.lon(pDC,-9,-25,9,-10);
			than1.lon(pDC,-3,-15,3,0);
			vecaymoi(pDC,h);
			k=0;t=0;
		}
}
void cay::xoacaycu(CClientDC *pDC)
{
	int r=255,g=255,b=255;
	CPen *vientrang = new CPen(PS_SOLID,1,RGB(r,g,b));
	pDC->SelectObject(vientrang);
	CBrush *mautrang =new CBrush(RGB(r,g,b));
	pDC->SelectObject(mautrang);
	than1.ve(pDC);
	la1.ve(pDC);
}
cay::~cay(void)
{
}

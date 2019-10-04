#include "StdAfx.h"
#include "hcn.h"


hcn::hcn(void)
{
}

void hcn::thietlap(int mx1,int my1,int mx2,int my2)
{
	x1=mx1;y1=my1;
	x2=mx2;y2=my2;
}
void hcn::ve(CClientDC *pDC)
{
	pDC->Rectangle(x1,y1,x2,y2);
}
void hcn::lon(CClientDC *pDC,int m,int n,int u,int v)
{
	x1+=m;y1+=n;
	x2+=u;y2+=v;
}

int hcn::tronghinh(CPoint p)
{
	int kq = 0;
	if (p.x >= x1 && p.x <= x2 && p.y >= y1 && p.y <= y2)
		kq = 1;
	return kq;
}
hcn::~hcn(void)
{
}

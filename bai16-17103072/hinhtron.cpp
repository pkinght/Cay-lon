#include "StdAfx.h"
#include "hinhtron.h"


hinhtron::hinhtron(void)
{
}
void hinhtron::thietlap(int mx1,int my1,int mx2,int my2)
{
	x1=mx1;y1=my1;
	x2=mx2;y2=my2;
}
void hinhtron::ve(CClientDC *pDC)
{
	pDC->Ellipse(x1,y1,x2,y2);
}
void hinhtron::lon(CClientDC *pDC,int m,int n,int u,int v)
{
	x1+=m;y1+=n;
	x2+=u;y2+=v;
}
hinhtron::~hinhtron(void)
{
}

#include "StdAfx.h"
#include "nutbam.h"


nutbam::nutbam(void)
{
}
void nutbam::venutbam(CClientDC *pDC)
{
	nutbam1.thietlap(500,300,560,330);
	nutbam1.ve(pDC);
	pDC->TextOutW(505,305,CString("Cay lon"));
	nutbam2.thietlap(500,350,560,380);
	nutbam2.ve(pDC);
	pDC->TextOutW(510,355,CString("Reset"));
}

nutbam::~nutbam(void)
{
}

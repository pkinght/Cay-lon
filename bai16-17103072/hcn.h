#pragma once
class hcn
{
private:int x1,y1,x2,y2;
public:
	hcn(void);
	void thietlap(int x1,int y1,int x2,int y2);
	void ve(CClientDC *pDC);
	void lon(CClientDC *pDC,int m,int n,int u,int v );
	int tronghinh(CPoint p);
	~hcn(void);
};


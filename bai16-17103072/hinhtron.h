#pragma once
class hinhtron
{
private:int x1,y1,x2,y2;
public:
	hinhtron(void);
	void thietlap(int x1,int y1,int x2,int y2);
	void ve(CClientDC *pDC);
	void lon(CClientDC *pDC,int m,int n,int u,int v );
	~hinhtron(void);
};


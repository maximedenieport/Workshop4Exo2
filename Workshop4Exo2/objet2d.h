#pragma once
#include <iostream>

using namespace std;

class objet2d
{
protected:
	int dim1;
	int dim2;
public:
	objet2d();
	objet2d(int tdim1, int tdim2);
	virtual int getPerimetre() = 0;
	virtual int getAire() = 0;
	virtual string afficheInfo();
	void set_next(objet2d* ob);
	objet2d* get_next();
private:
	objet2d* next = nullptr;
};

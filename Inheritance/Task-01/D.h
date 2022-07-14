#include"E.h"
class D:public E
{
public:
	D();
	D(int, int);
	void setDy(int);
	int getDy();
	void display();
	~D();
protected:
	int Dy;
};
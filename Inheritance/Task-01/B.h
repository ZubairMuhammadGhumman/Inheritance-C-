#include"A.h"
class B:public A
{
public:
	B();
	B(int, int);
	void setBy(int);
	int getBy();
	void display();
	~B();
protected:
	int By;
};
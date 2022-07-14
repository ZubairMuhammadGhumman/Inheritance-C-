#include"B.h"
class C:public B
{
public:
	C();
	C(int,int, int);
	void setCz(int);
	int getCz();
	void display();
	~C();
protected:
	int Cz;
};
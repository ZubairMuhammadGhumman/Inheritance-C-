#include"Student.h"
int main()
{
	Student S("Osama", "F2018266");
	Student S1 = S;
	Student S2;
	S2 = S1;
	S2.display();
	S1.display();
	S.display();
	Person P("Adil");
	P.display();
	Person P1 = P;
	Person P2;
	P2 = P1;
	P.display();
	P2.display();
	P1.display();
	return 0;
}
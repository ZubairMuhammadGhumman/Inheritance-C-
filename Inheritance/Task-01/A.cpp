#include"A.h"
A::A() :Ax(0){}
A::A(int Ax){ setAx(Ax); }
void A::setAx(int Ax){ if (Ax != 0) this->Ax = Ax; else throw invalid_argument("Invalid Input"); }
int A::getAx(){ return this->Ax;}
void A::display(){ cout << (*this).Ax << endl; }
A::~A(){ cout << "Distructor" << endl; }
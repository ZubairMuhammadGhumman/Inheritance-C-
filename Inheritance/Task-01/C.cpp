#include"C.h"
C::C(){ Cz = 0; }
C::C(int A,int B, int Cz) :B(A,B){ setCz(Cz); }
void C::setCz(int Cz){ if (Cz != 0) this->Cz = Cz; else throw invalid_argument("invalid Input"); }
int C::getCz(){ return this->Cz; }
void C::display(){ cout << (*this).Cz << endl; B::display(); A::display(); }
C::~C(){ cout << "Distructor" << endl; }
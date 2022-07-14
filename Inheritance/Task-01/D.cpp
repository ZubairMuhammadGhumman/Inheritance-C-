#include"D.h"
D::D() :Dy(0){}
D::D(int E, int Dy) : E(E){ setDy(Dy); }
void D::setDy(int Dy){ if (Dy != 0) this->Dy = Dy; else throw invalid_argument("Invalid"); }
int D::getDy(){ return this->Dy; }
void D::display(){ E::display(); cout << (*this).Dy << endl; }
D::~D(){ cout << "Disstructor" << endl; }
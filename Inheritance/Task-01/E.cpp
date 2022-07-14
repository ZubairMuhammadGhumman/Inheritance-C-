#include"E.h"
E::E() :Ex(0){}
E::E(int Ex){ setEx(Ex); }
void E::setEx(int Ex){ if (Ex != 0) this->Ex = Ex; else throw invalid_argument("Invalid"); }
int E::getEx(){ return this->Ex; }
void E::display(){ cout << (*this).Ex << endl; }
E::~E(){ cout << "Distructor" << endl; }
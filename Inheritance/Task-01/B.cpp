#include"B.h"
B::B() :By(0){}
B::B(int A, int By) : A(A){ setBy(By); }
void B::setBy(int By){ if (By != 0) this->By = By; else throw invalid_argument("invalid Input"); }
int B::getBy(){ return this->By; }
void B::display(){ cout << (*this).By << endl; }
B::~B(){ cout << "Distructor" << endl; }
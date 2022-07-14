#include"Person.h"
Person::Person() :name(""){}
Person::Person(string name){ setName(name); }
Person::Person(const Person &P){ this->name = P.name; }
void Person::operator=(const Person &P){ this->name = P.name; }
void Person::setName(string name){ if (name != "") this->name = name; else throw invalid_argument("Invalid"); }
string Person::getNAme() const { return this->name; }
void Person::display() const { cout << "Name : "<<name << endl; }
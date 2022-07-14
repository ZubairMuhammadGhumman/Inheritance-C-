#include"Student.h"
Student::Student() :RollNumber(""){}
Student::Student(string name, string RollNumber) : Person(name){ setRollNumber(RollNumber); }
Student::Student(const Student &S){ this->RollNumber = S.RollNumber; this->name = S.name; }
void Student::operator=(const Student &S){ this->RollNumber = S.RollNumber; this->name = S.name; }
void Student::setRollNumber(string RollNumber){ if (RollNumber != "") this->RollNumber = RollNumber; }
string Student::getRollNumber() const { return this->RollNumber; }
void Student::display() const { Person::display(); cout << "Roll Number : " << (*this).RollNumber << endl; }
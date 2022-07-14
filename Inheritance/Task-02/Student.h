#include"Person.h"
class Student :public Person
{
public:
	Student();
	explicit Student(string, string);
	Student(const Student &);
	void operator=(const Student &);
	void setRollNumber(string);
	string getRollNumber() const;
	void display() const;
protected:
	string RollNumber;
};
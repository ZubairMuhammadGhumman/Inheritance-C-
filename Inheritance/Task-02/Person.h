#include"Headers.h"
class Person
{
public:
	Person();
	explicit Person(string);
	Person(const Person &);
	void operator=(const Person &);
	void setName(string);
	string getNAme() const;
	void display() const;
protected:
	string name;
};
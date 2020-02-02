#include "Person.h"
#include <iostream>




bool Person::operator<(const Person& p) const
{
	return name < p.name;
}

Person::Person()
{
	name = "";
}
Person::Person(string x)
{
	name =  x;
}

void Person::printName()
{
	cout << "Name : " << name;
}

bool operator==(const Person& p1, const Person& p2)
{
	return false;
}

ostream& operator<<(ostream& os, const Person& p1)
{
	os << p1.name;
	return os;
}


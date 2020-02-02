#pragma once
#include <iostream>

#include <string>
using namespace std;
class Person {
public:
	
	bool operator<(const Person& p) const;

	friend ostream& operator<<(ostream& os, const Person& p1);
	Person();
	Person(string); // initialise the name;
	virtual void printName(); // if virtual is removed, cannot access derived class. This means Salary in Employee is not displayed.
protected:
	string name;
};
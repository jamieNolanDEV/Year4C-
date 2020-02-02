#pragma once
#include "Person.h"

class Employee : public Person {
protected:
	double salary;
public:
	Employee(string name);
	Employee(string name, double sal);
	void printName();

};
#include "Employee.h"
#include "Person.h"
#include <iostream>


Employee::Employee(string name) :Person(name) {
	salary = 0;
}

Employee::Employee(string name, double sal) : Person(name)
{
	name = name;
	salary = sal;
}




void Employee::printName()
{
	cout << "Employee Name is : " << name;
	cout << "Salary is " << salary;
	
}

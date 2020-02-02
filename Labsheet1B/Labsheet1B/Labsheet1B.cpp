// Labsheet1B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Customer.h"
#include "Employee.h"
#include "Person.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()

{
	const int NUM_PERSONS = 3;
	//pointer to class Person
	string names[NUM_PERSONS];

	Person* personPtr;
	Person* p1;
	Person* p2;

	//Create Person then call printName method
	Person jamie = Person("jamie");
	cout << "\n";
	personPtr = &jamie;
	personPtr->printName();

	//Create Employee then call printName method
	Employee cleo = Employee("cleo", 5000);
	cout << "\n";
	p1 = &cleo;

	personPtr->printName();
	p1->printName();
	//Grand final
	vector<Person*> personVector;
	personVector.push_back(personPtr);
	personVector.push_back(p1);
	cout << "\n";

	//Initially tried using normal vector sort, but due to it using pointers this is not readable. to do this access the readers as followed:
//https://stackoverflow.com/questions/34757448/sorting-a-vector-of-objects-alphabetically-in-c
	struct SortPersonsNames
	{
		// overload the function call operator
		bool operator()(const Person* lhs, const Person* rhs) const
		{
			// dereference the pointers to persons their targets
			// using the persons class's operator<(...) function
			return *lhs < *rhs;
		}
	};

	std::sort(personVector.begin(), personVector.end(), SortPersonsNames());

	for (const auto* p : personVector)
		std::cout << *p;



}
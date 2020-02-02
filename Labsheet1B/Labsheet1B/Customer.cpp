#include "Customer.h"
#include "Person.h"
#include <iostream>


Customer::Customer(string name) :Person(name) {

}


void Customer::printName()
{
	cout << "Customer Name is : " << name;
	cout << "\n";
	cout << "Complaint : Too drab";
}

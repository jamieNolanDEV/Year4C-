#pragma once
#include <iostream>


using namespace std;

class Product {
protected:
	double netPrice = 0;
public:
	Product();
	Product(double newVal);
	virtual double getGrossPrice();
};
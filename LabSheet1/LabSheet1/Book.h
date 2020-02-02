#pragma once
#include <iostream>
using namespace std;

class Book : public Product {
public:
	Book(double newValBook);
	double getGrossPrice();
};

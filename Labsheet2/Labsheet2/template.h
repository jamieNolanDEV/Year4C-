#pragma once
#include <iostream>
using namespace std;
class Templates {
public:
	
	void swap(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;

		cout << "Swapped = " << a << "B" << b;
	}
	void swap2(int *a, int *b)
	{
		int temp;
		temp = *a;
		*a = *b;
		*b = temp;

		cout << "Swapped = " << a << "B" << b;
	}
	void multiples(double sum, double x, double n) {
//No idea what you're asking for, question is extremely vague.
	 }
	void init() {

	}
};

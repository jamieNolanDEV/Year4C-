#include <iostream>
#include "Product.h"



Product::Product()
{
}

Product::Product(double newVal)
{
	netPrice = newVal;
}

double Product::getGrossPrice()
{
	double total = 0;
	double VAT = 0.21;
	total = netPrice + (netPrice * VAT);
	return total;
}

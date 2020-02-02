#include <iostream>
#include "Product.h"
#include "Book.h"

Book::Book(double newValBook) :Product(newValBook) {
}

double Book::getGrossPrice()
{
	double total = 0;
	total = netPrice;

	return total;
}
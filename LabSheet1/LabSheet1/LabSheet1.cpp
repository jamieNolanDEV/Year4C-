// X00128813 - VAT using vectors

#include "iostream"
#include "Product.h"
#include "Software.h"
#include "Book.h"
#include <vector> 
#include <algorithm>
int main()
{


	vector<Product*> products(8);
	double bookPrice;
	double softwarePrice;

	cout << "Test : Enter Software Price - VAT 21%";
	cout << "\n";
	cin >> softwarePrice;
	cout << "Test : Enter Book Price -NO VAT";
	cout << "\n";
	cin >> bookPrice;

	Book* book = new Book(bookPrice);
	Software* software = new Software(softwarePrice);

	cout << "Book Price without VAT" << " " << book->getGrossPrice();
	cout << "\n";
	cout << "Software Price without VAT" << " " << software->getGrossPrice();
	cout << "\n";
	double price = 0;
	cout << "Enter 6 More objects";
	for (int i = 0; i < 6; i++) {
		products.push_back(book);
		products.push_back(software);
		cin >> price;
		products[i] = new Software(price);
		products[i] = new Book(price);
	}

	for (int i = 0; i < 6; i++) {
		cout << products[i]->getGrossPrice();
	}


	//Sort vector using std sort
	std::sort(products.begin(), products.end());

	cout << "Vector Sorted" << "\n";
	//auto, used in Cpp refrence page for source
	for (auto x : products) {
		cout << x->getGrossPrice() << "\n";
	}
}


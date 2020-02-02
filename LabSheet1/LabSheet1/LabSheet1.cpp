// X00128813 - VAT using vectors

#include "iostream"
#include "Product.h"
#include "Software.h"
#include "Book.h"
#include <vector> 
#include <algorithm>
int main()
{


	vector<Product*> products;
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
		char selection;
		products.push_back(book);
		products.push_back(software);

		cout << "Choose Book or Software";
		cin >> selection;
		if (selection == 'B') {
			double bPrice;
			cout << "Book Price";
			cin >> bPrice;
			Book* book = new Book(bPrice);
			products[i] = book;
		}
		else if (selection == 'S') {
			double sPrice;
			cout << "Software Price";
			cin >> sPrice;
			Software* software = new Software(sPrice);
			products[i] = software;
		}
		else {
			if (selection != 'A' || 'B') {
				cout << "Please Eneter the correct one";
			}
		}
		
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


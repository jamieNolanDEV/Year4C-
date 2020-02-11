#include <iostream>

#include "BinaryTree.h"
#include "TreeNode.h"
using namespace std;
int main() {
	char a = 'a';
	char b = 'b';
	char c = 'c';
	char d = 'd';
	char e = 'e';
	char f = 'f';
	BinaryTree bigTree;
	BinaryTree* BST = new BinaryTree();
	BST->add(a);
	BST->add(a);
	BST->add(a);
	bigTree.add(a);
	bigTree.add(b);
	bigTree.add(c);
	bigTree.add(d);
	bigTree.add(e);


	cout << "Tree height should be: 3" << "\n";
	cout << "Actual Height";

	cout << BST->height();
	cout << "\n";

	cout << bigTree.height();
	cout << "\n";
	cout << "Traversing the BST" << "\n";
	//BST->preOrderTraversal();
	bigTree.preOrderTraversal();
	cout << "\n";
	cout << "Searching for char b - Should be found" << "\n";
	cout << "\n";
	bigTree.searchChar('b');
	cout << "\n";
	cout << "Searching for char z - Should not be found" << "\n";
	cout << "\n";
	bigTree.searchChar('z');

}

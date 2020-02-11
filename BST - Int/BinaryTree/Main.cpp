#include <iostream>

#include "BinaryTree.h"
#include "TreeNodeh.h"
using namespace std;
int main() {
	BinaryTree bigTree;
	BinaryTree *BST = new BinaryTree();
	BST->add(5);
	BST->add(5);
	BST->add(5);
	bigTree.add(5);
	bigTree.add(5);
	bigTree.add(5);
	bigTree.add(5);
	bigTree.add(5);


	cout << "Tree height should be: 3" << "\n";
	cout << "Actual Height";

	cout << BST->height();
	cout << "\n";

	cout << bigTree.height();
	cout << "\n";
	cout << "Traversing the BST" << "\n";
	BST->preOrderTraversal();
	bigTree.preOrderTraversal();
}

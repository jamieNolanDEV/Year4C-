#include "BinaryTree.h"



BinaryTree::BinaryTree() : root(NULL)
{
}

void BinaryTree::preOrderTraversal()
{
	preOrderTraversal(root);
}

void BinaryTree::add(char toAdd)
{
	TreeNode* node = new TreeNode(toAdd);
	add(node, root);
}

int BinaryTree::height()
{
	return height(root);
}





void BinaryTree::preOrderTraversal(TreeNode* subTreeRoot)
{
	if (subTreeRoot == NULL) {
		return;

	}
	cout << subTreeRoot->data << " ";
	preOrderTraversal(subTreeRoot->leftPtr);
	preOrderTraversal(subTreeRoot->rightPtr);
}



void BinaryTree::add(TreeNode* toAdd, TreeNode*& addHere)
{
	if (addHere == NULL) {
		addHere = toAdd;
	}
	else if (toAdd->data < addHere->data) {
		add(toAdd, addHere->leftPtr);
	}
	else
		add(toAdd, addHere->rightPtr);
}

int BinaryTree::height(TreeNode*& root)
{
	if (root == NULL) {
		return -1;
	}
	else {
		return 1 + max(height(root->leftPtr), height(root->rightPtr));
	}
}

void BinaryTree::searchChar(char val)
{
	searchChar(root, val);
}


bool BinaryTree::searchChar(TreeNode* toSearch, char key)
{
	if (toSearch == NULL) {
		return NULL;
	}
	while (toSearch != NULL) {
		if (toSearch->data == key) {
			cout << "Found element " << key;
			return true;
		}
		else if (toSearch->data > key)
			toSearch = toSearch->leftPtr;
		else
			toSearch = toSearch->rightPtr;

	}
	cout << "Item " << key << " not found";
	return false;


}


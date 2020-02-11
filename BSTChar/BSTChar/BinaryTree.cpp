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


// https://stackoverflow.com/questions/55078442/c-binary-tree-path-finding
// Code used to use the reference, to get the variable. Working upon adding reference
void BinaryTree::add(TreeNode* toAdd, TreeNode*& addHere)
{
	
	if (addHere == NULL) {
		addHere = toAdd;
	}
	//Does not add if duplicate.
	else if (toAdd->data == addHere->data) {
		return;
	}//Adding to left pointer if it's less than
	else if (toAdd->data < addHere->data) {
		add(toAdd, addHere->leftPtr);
	}
	else//Adding to left pointer if it's less than
		add(toAdd, addHere->rightPtr);
}
//https://stackoverflow.com/questions/2597637/finding-height-in-binary-search-tree?fbclid=IwAR2v3ZwgM2D-eYZPtpix2BeKXwk6ZVOqcVWqMgX0zvJtsDEYPeeuWxXUR_s//
//Answer 3.
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

void BinaryTree::sortAscending()
{
	sortAscending(root);
}
//http://www.cplusplus.com/forum/beginner/179430/ to get layout 
void BinaryTree::sortAscending(TreeNode* root){
	if (root) {
		sortAscending(root->leftPtr);
		(root->leftPtr && root->rightPtr);
		cout << root->data << " ";
		sortAscending(root->rightPtr);

	}
}




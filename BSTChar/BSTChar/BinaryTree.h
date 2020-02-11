#pragma once
#pragma once
#include "TreeNode.h"
#include <algorithm>
#include <iostream>

using namespace std;
class BinaryTree {
public:
	BinaryTree();
	void preOrderTraversal();
	void add(char toadd);
	int height();
	void searchChar(char val);
protected:
	void preOrderTraversal(TreeNode* subTreeRote);
	TreeNode* root;
private:
	void add(TreeNode* toAdd, TreeNode*& addHere);
	int height(TreeNode*& root);
	bool searchChar(TreeNode* toSearch, char key);
};
#pragma once
#include "TreeNodeh.h"
#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;
class BinaryTree {
public:
	BinaryTree();
	void preOrderTraversal();
	void add(int toadd);
	int height();
protected:
	void preOrderTraversal(TreeNode* subTreeRote);
	TreeNode* root;

private:
	void add(TreeNode* toAdd, TreeNode*& addHere);
	int height(TreeNode*& root);

};
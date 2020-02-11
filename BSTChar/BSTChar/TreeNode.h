#pragma once
#pragma once
#include <string>
class TreeNode {
public:
	friend class BinaryTree;

	TreeNode(char thedata);
	//bool isLeaf();
private:
	TreeNode* leftPtr;
	char data;
	TreeNode* rightPtr;
};
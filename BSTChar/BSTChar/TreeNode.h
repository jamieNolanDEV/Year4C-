#pragma once
#pragma once
#include <string>
//template<class EntryDataType>
class TreeNode {
public:
	friend class BinaryTree;
	TreeNode();

	TreeNode(char thedata);
	//bool isLeaf();
private:
	TreeNode* leftPtr;
	char data;
	TreeNode* rightPtr;
};
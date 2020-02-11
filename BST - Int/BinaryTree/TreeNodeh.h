#pragma once
#include <string>
//template<class EntryDataType>
class TreeNode {
public: 
	friend class BinaryTree;
	TreeNode();

	TreeNode(int thedata);
	//bool isLeaf();
	private:
		TreeNode* leftPtr;
		int data;
		TreeNode* rightPtr;
};
#include "BinaryTreeSort.h"

void inorder_tree_walk(TreeLetter * curr, int * arr, int*index) {
	if (curr != nullptr) {
		inorder_tree_walk(curr->leftChild, arr, index);
		arr[*index] = curr->data;
		*index += 1;
		inorder_tree_walk(curr->rightChild, arr, index);
	}
}


void binary_sort(int * arr, int length, int * comparison_ñount) {
	//creating a binary-search-tree
	BinaryTree tree;
	for (int i = 0; i < length; i++) {
		tree.addLetter(arr[i], comparison_ñount);
	}
	int index = 0;
	inorder_tree_walk(tree.getRoot(), arr, &index);
}
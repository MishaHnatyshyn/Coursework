#include <iostream>
#include "BinaryTree.h"
using namespace std;

TreeLetter * BinaryTree::getRoot() {
	return this->root;
}

void BinaryTree::addLetter(int data, int* comparison_ñount) {
	TreeLetter* letter = new TreeLetter();
	letter->data = data;
	TreeLetter* temp = nullptr;
	TreeLetter* current = this->root;

	while (current != nullptr) {
		temp = current;
		*comparison_ñount += 1;
		if (letter->data <= current->data) current = current->leftChild;
		else current = current->rightChild;
	}

	letter->parent = temp;
	if (temp == nullptr) {
		this->root = letter;
	}
	else if (letter->data <= temp->data) {
		temp->leftChild = letter;
		*comparison_ñount += 1;
	}
	else temp->rightChild = letter;
}

void BinaryTree::deleteLetter(TreeLetter * element) {
	TreeLetter * temp1;
	TreeLetter * temp2;

	if (element->leftChild == nullptr || element->rightChild == nullptr) temp1 = element;
	else temp1 = this->next(element);

	if (temp1->leftChild != nullptr) temp2 = temp1->leftChild;
	else temp2 = temp1->rightChild;

	if (temp2 != nullptr) temp2->parent = temp1->parent;

	if (temp1->parent == nullptr) this->root = temp2;
	else if (temp1 == temp1->parent->leftChild) temp1->parent->leftChild = temp2;
	else temp1->parent->rightChild = temp2;

	if (temp1 != element) {
		element->data = temp1->data;
	}
}


TreeLetter * BinaryTree::minimum(TreeLetter * current) {
	if (current == nullptr) current = this->root;
	while (current->leftChild != nullptr) {
		current = current->leftChild;
	}
	return current;
}

TreeLetter * BinaryTree::maximum(TreeLetter * current) {
	if (current == nullptr) current = this->root;
	while (current->rightChild != nullptr) {
		current = current->rightChild;
	}
	return current;
}

TreeLetter * BinaryTree::next(TreeLetter * current = nullptr) {
	if (current == nullptr) current = this->root;
	if (current->rightChild != nullptr) return minimum(current->rightChild);
	TreeLetter * temp = current->parent;
	while (temp != nullptr && current == temp->rightChild) {
		current = temp;
		temp = temp->parent;
	}
	return temp;
}

// BinarySearchTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:

	BST();
	BST(int);
	BST* insert(BST*, int);
	void inOrder(BST*);
};

BST::BST() : data(0), left(NULL), right(NULL)
{

}
BST::BST(int value)
{
	data = value;
	left = right = NULL;
}

BST* BST :: insert(BST* root, int value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data)
	{

		root->right = insert(root->right, value);
	}
	else
	{

		root->left = insert(root->left, value);
	}

	return root;
}
// Inorder traversal function.
void BST::inOrder(BST* root)
{
	if (!root) {
		return;
	}
	inOrder(root->left);
	cout << root->data << endl;
	inOrder(root->right);
}


int main()
{
	BST b, *root = NULL;
	root = b.insert(root, 50);
	b.insert(root, 30);
	b.insert(root, 20);
	b.insert(root, 40);
	b.insert(root, 70);
	b.insert(root, 60);
	b.insert(root, 80);

	b.inOrder(root);
	return 0;
}
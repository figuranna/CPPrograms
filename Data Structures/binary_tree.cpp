#include <iostream>

using namespace std;

struct Node
{
	int data; // this is what the nodes are storing
	Node* left; // left child
	Node* right; // right child
};

Node* create(int data) //creates a new node
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = nullptr; // creates the children nodes that are created null
	return newNode;
}

// Searching the tree - DFS

void printPreorder(Node* root)
{
	if(root == nullptr) // this stops the function
	{
		return;
	}
	
	cout << root->data << endl; // manipulate(print) the data
	printPreorder(root->left); // goes to left node
	printPreorder(root->right); // goes to right node
}

void printInorder(Node* root)
{
	if(root == nullptr) // this stops the function
	{
		return;
	}
	
	printPreorder(root->left); // goes to left node
	cout << root->data << endl; // manipulate(print) the data
	printPreorder(root->right); // goes to right node
}

void printPostorder(Node* root)
{
	if(root == nullptr) // this stops the function
	{
		return;
	}
	
	printPreorder(root->left); // goes to left node
	printPreorder(root->right); // goes to right node
	cout << root->data << endl; // manipulate(print) the data
}

int main()
{
	// lvl 1
	Node* root = create(1);
	
	// lvl 2
	root->left = create(2);
	root->right = create(3);
	
	// lvl 3
	root->left->left = create(4);
	
	// lvl 4
	root->left->left->left = create(5);
	
	// printing the nodes
	printPreorder(root);
	printInorder(root);
	printPostorder(root);
	
	return 0;
}

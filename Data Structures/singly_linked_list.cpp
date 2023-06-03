#include <iostream>

using namespace std;

struct Node // creating the structure for our node
{
	int value;
	Node* next;
};

void printList(Node* head)
{
	while(head!=nullptr)
	{
		cout << head->value << endl;
		head = head->next;
	}
}

void insertFront(Node* *head, int newValue)
{
	// create a new node
	Node* newNode = new Node();
	
	newNode->value = newValue;
	newNode->next = *head; // puts it in front of the first node
	
	// movesthe head of the list to the newNode
	*head = newNode;
}

void insertEnd(Node* *head, int newValue)
{
	// create a new node
	Node* newNode = new Node();
	
	newNode->value = newValue;
	newNode->next = nullptr; // the last node doesn't point to anywhere
	
	// if the linked list is empty the inserted node will become the head/first
	if(*head == NULL)
	{
		*head = newNode;
		return;
	}
	
	// loops through the linked list to find the last node
	Node* last = *head;
	
	while(last->next != nullptr)
	{
		last = last->next;
	}
	
	// inserts newNode after the current last node
	last->next = newNode;
}

void insertAfter(Node* previous, int newValue)
{
	// checks if the previous node is null
	if(previous == nullptr)
	{
		cout << "Previous cannot be NULL!" << endl;
		return;
	}
	
	// create a new node
	Node* newNode = new Node();
	newNode->value = newValue;
	
	// inserting a node after the previous
	newNode->next = previous->next;
	previous->next = newNode;
}

void deleteList(Node* head)
{
	// deleting the node, freeing the memory
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int main()
{
	// Creating the nodes for the Linked List
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	// Assigning a value to a node and point its pointer to the next node
	head->value = 1;
	head->next = second;
	second->value = 2;
	second->next = third;
	third->value = 3;
	third->next = nullptr; // the last element points to null
	
	insertFront(&head, 0);
	insertEnd(&head, 5);
	insertAfter(third, 4);
	printList(head);
	
	deleteList(head);
	
	return 0;
}

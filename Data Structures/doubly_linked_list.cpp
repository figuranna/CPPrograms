#include <iostream>

using namespace std;

struct Node // creating the structure for our node
{
	int value;
	Node* next;
	Node* prev;
};

void printForward(Node* head)
{
	Node* traverser = head;
	
	while(traverser!=nullptr)
	{
		cout << traverser.value << endl; // prints out the value
		traverser = traverser->next; // then moves to the next node
	}
}

void printBackwards(Node* tail)
{
	Node* traverser = tail;
	
	while(traverser!=nullptr)
	{
		cout << traverser.value << endl; // prints out the value
		traverser = traverser->prev; // then moves to the previous node
	}
}

void deleteList(Node* head) // from front to back
{
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

int main()
{
	Node* head;
	Node* tail;
	
	// creating the first node
	Node* node = new Node();
	node->value = 1;
	node->next = nullptr;
	node->prev = nullptr;
	head = node;
	tail = node;
	
	//creating a second node
	node = new Node();
	node->value = 2;
	node->next = nullptr;
	node->prev = tail;
	tail->node = node;
	tail = node;
	
	// creating a third node
	node = new Node();
	node->value = 3;
	node->next = nullptr;
	node->prev = tail;
	tail->node = node;
	tail = node;
	
	// functions
	printForward(head);
	printBackwards(tail);
	
	// freeing the memory
	deleteList(head);
	
	return 0;
}

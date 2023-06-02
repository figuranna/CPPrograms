#include <iostream>
#include <queue>

using namespace std;

int main()
{
	// create queue
	queue<int> q;
	
	// inserting elements at the end
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	
	// functions
	q.size(); 
	q.front(); // gives you the first element
	q.back(); // gives you the last element
	
	// print out queue's elements, iterates through the elements
	while(!q.empty())
	{
		cout << q.front() << ", ";
		q.pop(); // removes the element from the front of the queue
	}
	
	return 0;
}

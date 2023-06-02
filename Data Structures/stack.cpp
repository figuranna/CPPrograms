#include <iostream>
#include <stack>

using namespace std;

int main()
{
	// create stack
	stack<int> s;
	
	s.push(1); // adds element to the top of stack
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	
	s.pop(); // removes the element from the top
	
	// print elements from stack
	while(!s.empty())
	{
		cout << s.top(); // prints out the top element
		s.pop(); // removes the top element
	}
	
	// functions 
	s.emtpy(); // checks if the stck is empty
	s.size(); // checks the size of the stack

	return 0;
}

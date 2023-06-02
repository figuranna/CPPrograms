#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Dynamic array
	vector<int> v;
	
	// Inserting elements
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	
	// Simple loop that prints out the elements in the vector
	for(int i=0; i < v.size(); i++)
	{
		cout << v[i] << "; " << endl;
	}
	
	// An iterator based loop
	for(auto it = v.begin(); it < v.end(); it++)
	{
		cout << *it << ". " << endl; // prints out the element
		//cout <<  &it << ". " << endl; prints out the address of the iterator
		//cout <<  &(*it) << ". " << endl; prints out the address of the elements
	}
	
	return 0;
}

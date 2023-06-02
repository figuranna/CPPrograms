#include <iostream>
#include <map>

using namespace std;

int main()
{
	
	map<char,int> mp;
	
	mp['a'] = 1;
	mp['b'] = 2;
	mp['c'] = 3;
	
	/*
	Another way to insert values into the map
	
		mp.insert(pair<char,int>('a',1));
		mp.insert(pair<char,int>('b',2));
		mp.insert(pair<char,int>('c',3));
	*/
	
	
	// Range based loop
	for(auto pair:mp)
	{
		cout << "Key: " << pair.first << ", Value: " << pair.second << endl; // pair represents the key-value
	}
	
	
	// Iterator based loop
	map<char,int>::iterator it = mp.begin();
	
	while(it != mp.end())
	{
		cout << "key: " << it->first << ", value: " << it->second << endl; // The iterator points at the element
		it++;
	}
	
	return 0;
}

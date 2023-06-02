#include <iostream>

using namespace std;

int main()
{
	// Declaring the array + initializing the elements of the array
	int arr[5] = {1,2,3,4,5}; // the size of the array cannot be changed later on
	
	/*
	
	Another way to initalize the elements
	
		int arr[5];
		
		arr[0] = 1;
		arr[1] = 2;
		arr[2] = 3;
		arr[3] = 4;
		arr[4] = 5;
	
	*/
	
	// printing out the elements from the array
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i];
	}

	return 0;
}

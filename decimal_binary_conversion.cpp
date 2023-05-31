#include <iostream>
#include <vector>

using namespace std;

void decimal_to_binary(int num)
{
	
	/*
		2|15 - 0	^
		2|7 - 1		^
		2|3 - 1		^
		2|1 - 1		^
		 |0 - 1		^
	*/
	
	vector<int> bit_vector; // the size of vectors can grow dynamically unlike an arrays
	
	cout << num << " number's binary is ";
	
	while (num > 0)
	{
		bit_vector.push_back(num % 2); 
		num /= 2; 
	}
	
	for (int i=bit_vector.size()-1; i >= 0; i--) 
	{
		cout << bit_vector.at(i);
	}
	cout << endl;
};

void binary_to_decimal(string bin_num)
{
	
	/*
		2**3 2**2 2**1 2**0
		1	 1	 0	  1
		
		2**3 * 1 + 2**2 * 1 + 2**1 * 0 + 2**0 * 1 = 13
											^ always 1 * 1 
	*/
	
	int binary, decimal = 0, base = 1, rem;
	bool if_bin = false;
	
	for(int i=0; i <= bin_num.length()-1; i++)
	{
		if(bin_num[i] == '0' || bin_num[i] == '1')
		{
			binary = stoi(bin_num);
			if_bin = true;
		}
		else
		{
			cout << "This is not a binary number!" << endl;
		}
	}
	
	if(if_bin)
	{
		cout << binary << " binary's number is ";
	
	while (binary > 0)
	{
		rem = binary % 10;
        decimal += + rem * base;
        binary /= 10;
        base = base * 2;
	}
	
	cout << decimal << endl;
	}
	
};

int main()
{
	int num, nav;
	string bin_num;
	
	cout << "********** CONVERTOR **********"<< endl;
	cout << "	1. Decimal to binary"<< endl;
	cout << "	2. Binary to decimal"<< endl;
	cout << "*******************************"<< endl;
	cout << "OPTION: ";
	cin >> nav;
	
	switch (nav)
	{
		case 1:
			cout << "Enter the Base 10 number: ";
			cin >> num;
			decimal_to_binary(num);
			break;
		case 2:
			cout << "Enter the binary number: ";
			cin >> bin_num;
			binary_to_decimal(bin_num);
			break;
		default:
			cout << "The program cannot interpret your request." << endl;
			break;
	}
	
    return 0;
}

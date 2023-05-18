#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

using namespace std;

int GetArray(int*);
float AvgArray(int*, int);

int main()
{
	int height[SIZE];
	int * ptrHeight = height;
	
	int count = GetArray(ptrHeight);
	float avg = AvgArray(ptrHeight, count);
	
	cout << "The Average of the Grades: " << avg << "\n"; //printf("Az osztalyzatok atlaga: %.2f \n", avg);

	system("pause");
}

int GetArray(int * ptrHeight)
{
	int i = 0;
	
	cout << "Enter the grades (max 50!)\n"; //printf("Kerem adja meg az osztalyzatokat (max 50 osztalyzat)!\n");
	cout << "Enter 0 when you're finished inputting grades.\n";
	do
	{
		printf("%d.: ", i+1);
		scanf("%d", &ptrHeight[i]);
		if(ptrHeight[i]>5)
		{
			cout << "Enter a grade between 1-5!\n";
		}
		else
		{
			i++;
		}
	}
	while(ptrHeight[i-1] != 0);
	
	return i-1;
}

float AvgArray(int * ptrHeight, int count)
{
	int i;
	float sum = 0;
	float avg;
	
	for(i=0; i<count; i++)
	{	
		sum += ptrHeight[i];
	}
	
	avg = sum / count;
	
	return avg;
}

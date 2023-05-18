#include <iostream>
#include <iomanip> 

#define SIZE 50

using namespace std;

class storage{
	protected:
		int height[SIZE];
		int * ptrHeight = height;
		int i = 0;
		float sum=0;
		float avg;
		
	public:
		void input();
		void output();
};

void storage::input(){
	
	cout << "Enter the grades (max 50!)" <<endl;
	cout << "Press 0 to stop." <<endl;
		
	do
	{
		cout << i+1 << ".: ";
		cin >> ptrHeight[i];
		if(ptrHeight[i]>5)
		{
			cout << "Enter a grade between 1-5!" <<endl;
		}
		else
		{
			i++;
		}
	}
	while(ptrHeight[i-1] != 0);

}
void storage::output(){
	for(int j=0;j<i;j++){
		sum += ptrHeight[j];
	}
	avg = sum / i;
	
	cout << fixed << setprecision(2)<< "The Average of the Grades: " << avg <<endl;
}
int main(){
	setlocale(LC_ALL,"en");
	storage b1;
	b1.input();
	b1.output();
}
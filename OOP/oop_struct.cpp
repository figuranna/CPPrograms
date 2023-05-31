// Class with no methods
#include <iostream>

using namespace std;

// ***** Code for struct here ***** 

struct Student
{
	int age;
	string first_name;
	string last_name;
	int gpa;
};

int main()
{
	Student s;
	
	cin >> s.age >> s.first_name >> s.last_name >> s.gpa;
	cout << "Age: " << s.age << " First Name: " << s.first_name << " Last Name: " << s.last_name << " GPA: " << s.gpa << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

class Student
{
		int Age;
		string First_name;
		string Last_name;
		float Gpa;	
	
	public:
	// ***** Constructor *****
		Student(int age, string first_name, string last_name, float gpa)
		{
			this->Age = age;
			this->First_name = first_name;
			this->Last_name = last_name;
			this->Gpa = gpa;
		}
		
	// ***** Getters *****
		int get_Age()
		{
			return Age;
		}
		
		string get_First_name()
		{
			return First_name;
		}
		
		string get_Last_name()
		{
			return Last_name;
		}
		
		float get_Gpa()
		{
			return Gpa;
		}
		
	// ***** Setters *****
		void set_Age(int age)
		{
			this->Age = age;
		}
		
		void set_First_name(string first_name)
		{
			this->First_name = first_name;
		}
		
		void set_Last_name(string last_name)
		{
			this->Last_name = last_name;
		}
		
		void set_Gpa(float gpa)
		{
			this->Gpa = gpa;
		}
		
		void print_Student()
		{
			cout << "Age: " << Age << " First Name: " << First_name << " Last Name: " << Last_name << " GPA: " << Gpa << endl;
		}
};

/*
	***** Another way to create functions *****

void Student::print_Student()
		{
			cout << "Age: " << Age << " First Name: " << First_name << " Last Name: " << Last_name << " GPA: " << Gpa << endl;
		}
*/

int main()
{
	// setlocale(LC_ALL,"hun"); 		-> Letters from the hungarian alphabet are accepted.
	Student student1(17,"Elek","Teszt",3.9);
	
	student1.print_Student();
	
	student1.set_Gpa(4.0);
	student1.print_Student();
	
	return 0;
}

#include <iostream>

using namespace std;

class Person
{
	private:
		int Age;
		string First_name;
		string Last_name;
	
	public: 
	// ***** Constructor *****
		Person(int age, string first_name, string last_name)
		{
			this->Age = age;
			this->First_name = first_name;
			this->Last_name = last_name;
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
		
	// ***** Methods *****
		int age_Up()
		{
			Age++; // ?? 
			set_Age(Age);
			return Age;
		}
};

class Student: public Person
{
	private:
		float Gpa;
	
	public:
	// ***** Constructor *****
		Student(int age, string first_name, string last_name, float gpa) : Person(age, first_name, last_name)
		{
			this->Gpa = gpa;
		}
	// ***** Getter *****
		float get_Gpa()
		{
			if(Gpa < 1.8)
			{
				cout << "Failed!" << endl;
			}
			return Gpa;
		}
	
	// ***** Setter *****
		void set_Gpa(float gpa)
		{
			this->Gpa = gpa;
		}
		
	// ***** Methods *****
		void increase_Gpa()
		{
			Gpa++;
			set_Gpa(Gpa);
		}
		
		void decrease_Gpa()
		{
			Gpa--;
			set_Gpa(Gpa);
		}
		
		void print_Student()
		{
			cout << "Age: " << get_Age() << " First name: " << get_First_name() << " Last name: " << get_Last_name() << " Gpa: " << get_Gpa() << endl;
		}
		
};

class Worker: public Person
{
	private:
		int Salary;
	
	public:
	// ***** Constructor *****
		Worker(int age, string first_name, string last_name, int salary) : Person(age, first_name, last_name)
		{
			this->Salary = salary;
		}
		
	// ***** Getter *****
		int get_Salary()
		{
			return Salary;
		}
	
	// ***** Setter *****
		void set_Salary(int salary)
		{
			this->Salary = salary;
		}
		
	// ***** Methods *****
		void increase_Salary(int increase)
		{
			Salary += increase;
			set_Salary(Salary);
		}
		
};

class Teacher: public Worker
{
	private:
		string Subject;
	
	public:
	// ***** Constructor *****
		Teacher(int age, string first_name, string last_name, int salary, string subject) : Worker(age, first_name, last_name, salary)
		{
			this->Subject = subject;
		}
	// ***** Getter *****
		string get_Subject()
		{
			return Subject;
		}
	
	// ***** Setter *****
		void set_Subject(string subject)
		{
			this->Subject = subject;
		}
		
	// ***** Methods *****
		void print_Teacher()
		{
			cout << "Age: " << get_Age() << " First name: " << get_First_name() << " Last name: " << get_Last_name() << " Salary: " << get_Salary() << "Ft" << " Subject: " << get_Subject() << endl;
		}
		void teacher_Noises()
		{
			cout << "Be quite!" << endl;
		}
};

int main()
{
	// ***** Student testing *****
	Student stu1 = Student(17, "Elek", "Teszt", 2.4);
	stu1.print_Student();
	stu1.decrease_Gpa();
	stu1.age_Up();
	stu1.print_Student();
	stu1.increase_Gpa();
	stu1.print_Student();
	
	
	// ***** Teacher testing *****
	Teacher teach1 = Teacher(32, "Ica", "Cicam", 220000, "Biology");
	teach1.print_Teacher();
	teach1.	increase_Salary(10000);
	teach1.set_Subject("Literature");
	teach1.print_Teacher();
	teach1.teacher_Noises();
	
	
	return 0;
}

#include <iostream>

using namespace std;

class AbstractPerson
{
	public: 
		virtual void levelUp() = 0;	// Every derived class has to implement this function
};

class Person : public AbstractPerson
{
	private:
		int Age;
		string First_name;
		string Last_name;
		
	protected: // This way the we can't create a Person object in the main()
	// ***** Constructor *****
		Person(int age, string first_name, string last_name)
		{
			this->Age = age;
			this->First_name = first_name;
			this->Last_name = last_name;
		}
		
	// ***** Abstract class method implemented *****
		void levelUp(){}
	
	public: 
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
		int Grade;
	
	public:
	// ***** Constructor *****
		Student(int age, string first_name, string last_name, float gpa, int grade) : Person(age, first_name, last_name)
		{
			this->Gpa = gpa;
			this->Grade = grade;
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
		
		int get_Grade()
		{
			return Grade;
		}
	
	// ***** Setter *****
		void set_Gpa(float gpa)
		{
			this->Gpa = gpa;
		}
		
		void set_Grade(int grade)
		{
			this->Grade = grade;
		}
		
	// ***** Methods *****
		void levelUp()	// ***** Abstract class method implemented *****
		{
			Grade++;
			set_Grade(Grade);
		}
		
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
			cout << "Age: " << get_Age() << " First name: " << get_First_name() << " Last name: " << get_Last_name() << " Gpa: " << get_Gpa() << " Grade: " << get_Grade() << endl;
		}
		
};

class Worker: public Person
{
	private:
		int Salary;
		int Rank;
		
	protected:
	// ***** Constructor *****
		Worker(int age, string first_name, string last_name, int salary, int rank) : Person(age, first_name, last_name)
		{
			this->Salary = salary;
			this->Rank = rank;
		}
		
	// ***** Abstract class method implemented *****
		void levelUp(){}
	
	public:
	// ***** Getters *****
		int get_Salary()
		{
			return Salary;
		}
		
		int get_Rank()
		{
			return Rank;
		}
	
	// ***** Setters *****
		void set_Salary(int salary)
		{
			this->Salary = salary;
		}
		
		void set_Rank(int rank)
		{
			this->Rank = rank;
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
		Teacher(int age, string first_name, string last_name, int salary, int rank, string subject) : Worker(age, first_name, last_name, salary, rank)
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
		void levelUp()	// ***** Abstract class method implemented *****
		{
			int rank = get_Rank();
			rank++;
			set_Rank(rank);
		}
		
		void print_Teacher()
		{
			cout << "Age: " << get_Age() << " First name: " << get_First_name() << " Last name: " << get_Last_name() << " Salary: " << get_Salary() << "Ft" << " Rank: " << get_Rank() << " Subject: " << get_Subject() << endl;
		}
};

int main()
{
	// ***** Student testing *****
	Student stu1(17, "Elek", "Teszt", 2.4, 3);
	stu1.print_Student();
	stu1.decrease_Gpa();
	stu1.age_Up();
	stu1.print_Student();
	stu1.increase_Gpa();
	stu1.print_Student();
	stu1.levelUp();
	stu1.print_Student();
	
	// Person pr1 = Person(20, "Barbie", "Roberts");	-> the constructor is protected so we can't access it
	
	// ***** Teacher testing *****
	Teacher teach1(32, "Ica", "Cicam", 220000, 2 ,"Biology");
	teach1.print_Teacher();
	teach1.	increase_Salary(10000);
	teach1.set_Subject("Literature");
	teach1.print_Teacher();
	teach1.levelUp();
	teach1.print_Teacher();
	
	return 0;
}

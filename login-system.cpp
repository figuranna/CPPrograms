#include <iostream> 
#include <fstream> // reading and writing files 
#include <string>
#include <conio.h>

using namespace std;

class login
{
	private:
		string username, password;
	public:
		void mainMenu(); 
		bool isLoggedIn(); 
		void registerIn();
		void loginIn();
		
};
void login::mainMenu()
{
	int choice;
	
	//Display Main Menu
	cout << endl;
    cout << "Main Menu-------------------------------" << endl;
    cout << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
    cout << "Your choice: ";
    cin >> choice; 
    cout << endl;
	
	switch(choice) 
	{
	  case 1:
	    registerIn();
	    break;
	  case 2:
	    loginIn();
	    break;
	  case 3:
	    system("exit");
	    break;
	  default:
	    cout << "The program cannot interpret your request." << endl;
	    mainMenu();
	}
}
bool login::isLoggedIn()
{
	
	/*int count=0;
	char key;
	bool tmp = false;
	char psswrd[8];*/
	
	string un, pw; 

    cout << "Enter a username: ";
    cin >> username; 
    cout << "Enter a password: ";
   	cin >> password; 
   	
   	//Hides the password
   	
    /*do{
    	key = getch();
    	
    	if(key!=13){
    		psswrd[count] = key;
    		cout << "*";
    		count++;
		}
	}while(key!=13);*/
	cout << endl;

    ifstream read(username + ".txt"); // ifstream reads a file 
    getline(read, un); // reads the username 
    getline(read, pw); // reads the password
    
	/*const int length = pw.length();
	char* char_array = new char[length + 1];
    
    for(int i=0;i<=length;i++){
    	if(char_array[i] == psswrd[i]){
    		tmp = true;
		}
	}*/

    if(un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void login::registerIn()
{
	cout << "Registration: " << endl;
    cout << endl;
    cout << "Select a username: "; 
    cin >> username;
    cout << "Select a password: ";
    cin >> password;
    cout << endl;

    ofstream file; //creates file
    file.open(username + ".txt"); 
    file << username << endl << password;
    file.close();
    cout << "Welcome " << username << "!" << endl;
    cout << endl;
    mainMenu();
}

void login::loginIn()
{
	bool status = isLoggedIn();

    if(!status) 
    {
        cout << endl;
        cout << "Invalid login!" << endl;
        mainMenu();
    }
    else
    {
        cout << "Successfully logged in!" << endl;
        cout << endl;

        int choice;

        // Display dashboard:
        cout << "Dashboard-------------------------------" << endl;
        cout << endl;
        cout << "1. Sign Out" <<endl;
        cout << "2. Back to main menu" <<endl;
        cout << endl;
        cout << "Your choice: ";
        cin >> choice;
        cout << endl;
        
        switch(choice) 
		{
		  case 1:
		    system("exit");
		    break;
		  case 2:
		    mainMenu();
		    break;
		  default:
		    cout << "The program cannot interpret your request." << endl;
		    loginIn();
		}
    }
}

int main()
{
	setlocale(LC_ALL,"en");
	login lgn;
	lgn.mainMenu();
}
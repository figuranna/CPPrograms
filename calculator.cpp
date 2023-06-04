/*
ASCII design: BladeRunner
*/
#include <iostream>
using namespace std;

void mainMenu()
{
	static float result;
	float a,b;
	char choice;
	
	cout << " ______CALCULATOR_____" << endl;
	cout << "| ,-----------------. |" << endl;
	cout << "| |    1.05459 e -34| |" << endl;
	cout << "| `-----------------' |" << endl;
	cout << "| [@ ] On/Off  ###### |" << endl;
	cout << "|              ###### |" << endl;
	cout << "| [7] [8] [9] [C] [AC]|" << endl;
	cout << "|                     |" << endl;
	cout << "| [4] [5] [6] [X] [%] |" << endl;
	cout << "|                     |" << endl;
	cout << "| [1] [2] [3] [+] [-] |" << endl;
	cout << "|                     |" << endl;
	cout << "| [0] [.]  [EXP]  [=] |" << endl;
	cout << "|_____________________|" << endl;
	
	cout << "  +     Addition" << endl;
	cout << "  -     Substraction" << endl;
	cout << "  x     Multiplication" << endl;
	cout << "  /     Division" << endl;
	cout << "  r     Restart" << endl;
	cout << "  q     Quit" << endl;
	
	cout << "Enter the chosen char: ";
	cin >> choice;
	cout << endl;
	
	if(choice == '+' || choice == '-' || choice == 'x' || choice == '/')
	{
		if(result != 0)
		{
			a = result;
			cout << "Enter number: ";
			cin >> b;
		}
		else
		{
			cout << "Enter number: ";
			cin >> a;
			cout << "Enter number: ";
			cin >> b;
		}
	}
	
	switch(choice)
	{
		case '+':
            result = a + b;
            cout << a << " + " << b << " = " << result << endl;
            cout << endl;
            break;
        case '-':
            result = a - b;
            cout << a << " - " << b << " = " << result << endl;
            cout << endl;
            break;
        case 'x':
            result = a * b;
            cout << a << " * " << b << " = " << result << endl;
            cout << endl;
            break;
        case '/':
            if (b != 0)
            {
                result = a / b;
                cout << a << " / " << b << " = " << result << endl;
                cout << endl;
            }
            else
            {
                cout << "Error: Division by zero" << endl;
                cout << endl;
            }
            break;
        case 'r':
        	result = 0;
        	cout << "Cleaned the memory, you can start a new calculation." << endl;
        	cout << endl;
        	break;
        case 'q':
            cout << "Exiting the calculator..." << endl;
            return;
        default:
            cout << "Not a recognized character." << endl;
            cout << endl;
            break;
	}
	
	mainMenu();
}

int main()
{
	mainMenu();
	return 0;
}

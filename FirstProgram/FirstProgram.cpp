#include <iostream>

using namespace std; // use the entire namespace

using std::cout; // use only what you need 
using std::cin; // use only what you need
using std::endl; // use only what you need

int main() 
{
	int favorite_number; // One line comment 
	int num1;
	double num3;
	int num2;
	cout << "Enter your favorite number between 1 - 100..: \n" << endl;
	cin >> favorite_number;
	cout << "\nFantastic! That is my favorite number too!\n" << endl;
	cout << "No really, " << favorite_number << " is really my favorite number." << endl;
	cout << "Enter 2 integers seperated with a space..:\n" << endl;
	cin >> num1 >> num2;
	cout << "Enter a double number..:" << endl;
	cin >> num3;
	cout << "You entered..: " << num1 << ", " << num2 << " " << num3 << "." << endl;

	return 0;
}
/*
Multi-line
block
comment
*/
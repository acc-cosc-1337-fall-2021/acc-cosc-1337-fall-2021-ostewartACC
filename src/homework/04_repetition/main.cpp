//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout; using std::cin;

int main() 
{
	int choice;
	int num;
	int num1;
	int num2;
	int result;
	
	do 
	{
		cout << "\n\nMAIN MENU\n\n1-Factorial\n2-Greatest Common Divisor\n3-Exit\n\nEnter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter num: ";
			cin >> num;
			result = factorial(num);
			cout << "The factorial is: " << result;
		}
		if (choice == 2)
		{
			cout << "Enter num1: ";
			cin >> num1;
			cout << "Enter num2: ";
			cin >> num2;
			result = gcd(num1, num2);
			cout << "The GCD is: " << result;
		}
		if (choice == 3)
		{
			cout << "Are you sure you want to exit (Yes = 0)?\n";
			cin >> choice;
		}
	}		
	while (choice != 0);
	cout << "Program Exiting";
	return 0;
}
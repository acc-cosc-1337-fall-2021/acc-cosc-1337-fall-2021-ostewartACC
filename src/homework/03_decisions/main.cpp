//write include statements
#include <iostream>
#include "decisions.h"

using std::cout; using std::cin;

int main() 
{
	int choice;
	int grade;
	std::string letter;
	
	cout << "MAIN MENU\n\n";
	cout << "1-Letter grade using if\n";
	cout << "2-Letter grade using switch\n";
	cout << "Exit\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Enter numeric grade from 0 - 100: ";
		cin >> grade;
		letter = get_letter_grade_using_if(grade);
		cout << "Your letter grade is: " << letter;
	}
	else if (choice == 2)
	{
		cout << "Enter numeric grade from 0 - 100: ";
		cin >> grade;
		letter = get_letter_grade_using_switch(grade);
		cout << "Your letter grade is: " << letter;
	}
	else if (choice == 3)
	{
		cout << "Program Exiting";
	}
	else
	{
		cout << "Invalid Choice - Goodbye";
	}
	

	return 0;
}
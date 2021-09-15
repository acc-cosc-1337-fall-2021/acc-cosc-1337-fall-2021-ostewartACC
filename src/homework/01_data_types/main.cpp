//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cin; using std::cout;

/*
a) Create an int variable named num.
b) Use the cin object to capture a number from the keyboard, assign the number to num.
c) Create an int variable name result, call the multiply_numbers with num as its parameter, 
     assign the return value of the function multiply_numbers to the result variable, and display 
     the result variable to the screen.    
d) Create an int variable named num1, assign it the value 4.
e) Call the function multiply_numbers with num1 as its parameter, assign its return value to the 
     result variable, and display the result variable to screen.  
*/
int main()
{
	int num;
	cout << "Enter an integer value: ";
	cin >> num;

	int result;
	result = multiply_numbers(num);
	cout << "The result for input " << num << " is: " << result << "\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout << "The result for input " << num1 << " is: " << result << "\n";

	return 0;
}

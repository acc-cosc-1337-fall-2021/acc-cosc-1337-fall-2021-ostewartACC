//add include statements
#include "dna.h"
 
//add function(s) code here
int factorial(int num)
{
    int factorial = 1;
    while (num > 0)
    {
        factorial = factorial * num;
        num--;
    }   
    return factorial;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        int s = 0;
        if (num1 < num2)
        {
            s = num1;
            num1 = num2;
            num2 = s;
        }    
        else
        {
            num1 = num1 - num2;
        }       
    }   
    return num1;
}
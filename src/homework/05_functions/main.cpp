//write include statements
#include <iostream>
#include "func.h"

//write using statements
using std::cout; using std::cin;

int main() 
{
	int choice;
	string dna;
	double dna_cont;
	string dna_comp;
	
	do 
	{
		cout << "\n\nMENU\n\n1-Get GC Content\n2-Get DNA Complement\n3-Exit\n\nEnter your choice: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "Enter DNA string: ";
			cin >> dna;
			dna_cont = get_gc_content(dna);
			cout << "The GC content is: " << dna_cont;
		}
		if (choice == 2)
		{
			cout << "Enter DNA string: ";
			cin >> dna;
			dna_comp = get_dna_complement(dna);
			cout << "The DNA Complement is: " << dna_comp;
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
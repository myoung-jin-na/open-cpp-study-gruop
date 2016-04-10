// p259.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num, lastNum;

	cout << "This program will display a table of integer\n"
	    << "numbers and their squares, starting with 1.\n"
		<< "What should the last number be?\n"
		<< "Enter an integer between 2 and 10: ";
	cin >> lastNum;

	while ((lastNum < 2) || (lastNum>10))
	{
		cout << "Please enter an integer between 2 and 10: ";
		cin >> lastNum;
	}
	cout << "\nNumber Square\n";
	cout << "-----------------\n";

	num = 1;
	while (num <= lastNum)
	{
		cout << setw(4) << num << setw(7) << (num*num) << endl;
		num++;
	}

    return 0;
}


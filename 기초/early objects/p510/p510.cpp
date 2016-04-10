// p510.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count = 0;

	ifstream datafile;

	if (!datafile)
	{
		cout << "Error opening data file\n";
	}
	else
	{
		while (count < NUM_EMPLOYEES && datafile >> hours[count])
		{
			count++;
		}
		datafile.close();

		cout << "The hours worked by each employee are\n";
		for (int employee = 0; employee < count; employee++)
		{
			cout << "Employee " << employee + 1 << ": ";
			cout << hours[employee] << endl;
		}

	}

    return 0;
}


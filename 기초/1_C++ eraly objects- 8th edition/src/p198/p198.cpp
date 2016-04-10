// p198.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	cout << "What is your annual incom?";

	double income;
	cin >> income;

	if (income >= MIN_INCOME)
	{
		cout << "How many years have you worked at your current job? ";
		int years;
		cin >> years;

		if (years > MIN_YEARS)
			cout << "\nYou qualify.\n";
		else
			cout << "\nYou must have been employed for more than "
			<< MIN_YEARS << " years to qualify.\n";
	}
	else
	{
		cout << " \nYou must earn at least $" << MIN_INCOME
			<< " to qualify.\n";
	}
    return 0;
}


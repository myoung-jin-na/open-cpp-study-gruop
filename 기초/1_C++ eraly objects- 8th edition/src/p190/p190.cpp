// p190.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;

	cout << "What is your annual income? ";
	cin >> income;
	cout << "How many years have you worked at your current job? ";
	cin >> years;

	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify for a loan.\n";
	else
	{
		cout << "\nYou must earn at least $" << MIN_INCOME
			<< " or have een employed\n"
			<< "for more than " << MIN_YEARS << " years "
			<< "to qualify for a loan. \n";
	}


	/*

	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;

	cout << "What is your annual income? ";
	cin >> income;
	cout << "How many years have you worked at your current job? ";
	cin >> years;

	if (!(income >= MIN_INCOME || years > MIN_YEARS))
	{
	cout << "\nYou must earn at least $" << MIN_INCOME
	<< " or have een employed \n"
	<< "for more than " << MIN_YEARS << " years "
	<< "to qualify for a loan.\n";
	}
	else
	cout << "You qualify for a loan.\n";
	*/
    return 0;
}


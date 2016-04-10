// p188.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char employed;
	char recentGrad;

	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or N for No.\n";

	cout << "Are you employed? ";
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	cin >> recentGrad;

	if (employed == 'Y' && recentGrad == 'Y')
		cout << "\nYou quality for the special interest rate.\n";
	else
	{
		cout << "\nYou must be employed and have graduated from college\n"
			<< "in the past two years to qualify "
			<< "for the special interest rate. \n";
	}
	return 0;
}


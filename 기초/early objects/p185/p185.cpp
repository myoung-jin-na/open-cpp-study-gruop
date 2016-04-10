// p185.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Answer the following questions\n";
	cout << "with either Y for Yes or N for No.\n";
	cout << "Are you employed? ";
	
	char employed;
	cin >> employed;
	cout << "Have you graduated from college in the past two years? ";
	char recentGrad;
	cin >> recentGrad;

	if (employed == 'Y')
	{
		if (recentGrad == 'Y')
		{
			cout << "You qualify for the special interest rate.\n";
		}
		else
		{
			cout << "You must have graduated from colleage in the past\n";
			cout << "two years to qualify for the special interest rate.\n";
		}
	}
	else
	{
		cout << "You must be employed to qualify for the "
			<< "special interest rate.\n";
	}
    return 0;
}


// p9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	cout << "How many hours did you work?";
	cin >> hours;

	cout << "How much do you get paid per hour?";
	cin >> rate;

	pay = hours * rate;

	cout << "You have earned " << pay << "¿ø" << endl;

    return 0;
}


// p79.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int intNumber;
	double floatNumber;

	cout << "Input a number. ";
	cin >> intNumber;
	cout << "Input a second number.\n";
	cin >> floatNumber;
	cout << "You entered: " << intNumber
		<< " and " << floatNumber << endl;

	return 0;
}


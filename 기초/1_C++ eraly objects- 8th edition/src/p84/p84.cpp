// p84.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double numerator, denominator;

	cout << "This program shows the decimal value of a fraction.\n";

	cout << "Enter the numerator: ";
	cin >> numerator;
	cout << "Enter the denominator: ";
	cin >> denominator;

	cout << "the decimal value is " << (numerator / denominator) << endl;
    return 0;
}


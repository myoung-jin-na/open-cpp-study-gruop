// p136.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, avg;

	cout << "Enter the first number:";
	cin >> num1;
	cout << "Enter the second number:";
	cin >> num2;
	cout << "Enter the third number:";
	cin >> num3;
	avg = num1 + num2 + num3 / 3;
	cout << "The average is " << avg << endl;

    return 0;
}


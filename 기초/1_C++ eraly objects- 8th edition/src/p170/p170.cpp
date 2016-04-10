// p170.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer and I will tell you if it\n";
	cout << "is odd or even.";
	
	int number;
	cin >> number;

	if (number % 2 == 0)
		cout << number << " is even.\n";
	else
		cout << number << " is odd.\n";
    return 0;
}


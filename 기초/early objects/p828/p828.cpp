// p828.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string dollarFormat(string);

int main()
{
	string input;

	cout << "Enter a dollar amount in the form nnnnn.nn : ";
	cin >> input;

	cout << "Formatted amount: " << dollarFormat(input) << endl;
	
    return 0;
}

string dollarFormat(string original)
{
	string formatted = original;
	int dp = formatted.find('.');
	int pos = dp;
	while (pos > 3)
	{
		pos = pos - 3;
		formatted.insert(pos, ",");
	}
	formatted.insert(0, "$");
	return formatted;
}
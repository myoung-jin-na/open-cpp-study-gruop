// p203.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class A {};

bool operator == (std::string& m, A& a)
{
	return true;
}

int main()
{
	const double PRICE_A = 249.0, PRICE_B = 299.0;
	string partNum;
	cout << "The stereo part numbers are:\n";
	cout << "Boom Box  : part number S-29A \n";
	cout << "Shelf Model : part number S-29B \n";
	cout << "Enter the part number of the stereo you\n";
	cin >> partNum;

	cout << fixed << showpoint << setprecision(2);

	A a;
	partNum == a; // ADL 추가하기.

	if (partNum == "S-29A")
		cout << "The price is $" << PRICE_A << endl;
	else if (partNum == "S-29B")
		cout << "The price is $" << PRICE_B << endl;
	else
		cout << partNum << " is not a valid part number.\n";

    return 0;
}


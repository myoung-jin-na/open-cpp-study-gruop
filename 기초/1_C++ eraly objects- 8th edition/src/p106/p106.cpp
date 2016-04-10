// p106.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int ga;

int main()
{
	int la;

	std::cout << "ga: " << ga << " la: " << la << std::endl;

	return 0;

	// default initialize
	int begInv,
		sold,
		store1,
		store2;

	cout << "One week ago, 2 new widget stores opened\n";
	cout << "at the same time with the same beginning\n";
	cout << "inventory. What was the beginning inbentory? ";
	cin >> begInv;

	store1 = store2 = begInv;

	cout << "how many widgets has store 1 sold? ";
	cin >> sold;
	store1 -= sold;

	cout << "How many widgets has store 2 sold ? ";
	cin >> sold;
	store2 -= sold;

	cout << "\nThe current inventory of each store:\n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;

    return 0;
}


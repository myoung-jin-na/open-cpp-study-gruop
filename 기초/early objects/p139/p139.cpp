// p139.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
	double squareFeet;
	int depth;
	double cubicFeet,
		cubicYards,
		totalPrice;

	cout << "Number of square feet to be coverd with mulch: ";
	cin >> squareFeet;
	cout << "Number of inches deep: ";
	cin >> depth;

	cubicFeet = squareFeet * (depth / 12.0);
	cubicYards = cubicFeet / 27;
	totalPrice = cubicYards * PRICE_PER_CUBIC_YD;

	cout << "\n Number of cubic yards needed: " << cubicYards << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Price per cubic yard: $" << setw(7)
		<< PRICE_PER_CUBIC_YD << endl;
	cout << "Total price:        $" << setw(7)
		<< totalPrice << endl << endl;

    return 0;
}


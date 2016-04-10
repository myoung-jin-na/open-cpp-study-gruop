// p360.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

double getBasePay(double);
double getOvertimePay(double);

int main()
{
	double hours,
		basePay,
		overtimePay = 0.0,
		totoalPay;

	cout << "How many hours did you work? ";
	cin >> hours;

	basePay = getBasePay(hours);

	if (hours > BASE_HOURS)
		overtimePay = getOvertimePay(hours);

	totoalPay = basePay + overtimePay;

	cout << setprecision(2) << fixed << showpoint;

	cout << "Base pay     $" << setw(7) << basePay << endl;
	cout << "Overtime pay $" << setw(7) << overtimePay << endl;
	//cout << "Total"

    return 0;
}


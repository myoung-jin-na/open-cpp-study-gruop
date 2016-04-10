// p63.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double basePayRate = 18.25,
		overtimePayRate = 27.38,
		regularHours = 40.0,
		overtimeHours = 10,
		regularWages,
		overtimeWages,
		totalWages;

	regularWages = basePayRate * regularHours;

	overtimeWages = overtimePayRate * overtimeHours;

	totalWages = regularWages + overtimeWages;

	cout << "Wages for thie week are $" << totalWages << endl;
}


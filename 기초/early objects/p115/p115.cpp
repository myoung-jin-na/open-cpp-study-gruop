// p115.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x = 6.0;

	cout << x << endl;
	cout << showpoint << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << x << endl;

    return 0;
}


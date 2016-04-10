// p173.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
	double result = .666667 * 6.0;

	cout << "result = " << result << endl;

	cout << std::numeric_limits<double>::epsilon() << endl;

	if (abs(result - 4.0 < 
		2*std::numeric_limits<double>::epsilon())
		)
//	if (abs(result - 4.0 < .0001))
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;
    return 0;
}


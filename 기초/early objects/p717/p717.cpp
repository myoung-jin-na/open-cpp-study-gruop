// p717.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "NumberArray.h"
using namespace std;

int main()
{
	NumberArray first(3, 10.5);

	NumberArray second = first;

	cout << setprecision(2) << fixed << showpoint;
	cout << "Value stored in first object is ";
	first.print();
	cout << endl << "Value stored in second object is ";
	second.print();
	cout << endl << "only the value in second object "
		<< "will be changed." << endl;

	second.setValue(20.5);

	cout << "Value stored in first object is ";
	first.print();
	cout << endl << "Value stored in second object is ";
	second.print();
    return 0;
}


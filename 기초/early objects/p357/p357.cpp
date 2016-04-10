// p357.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void anotherFunction();
int num = 2;

int main()
{
	cout << "In main, num is " << num << endl;
	anotherFunction();
	cout << "Back in main, num is " << num << endl;

    return 0;
}

/**************************************************************
*                        anotherFunction                      *
* This function changes the value of the global variable num. *
****************************************************************/
void anotherFunction()
{
	cout << "In anotherFunction, num is " << num << endl;
	if (num > 50) {
		return;
	}
	num++;
	anotherFunction();
	cout << "But, it is now changed to " << num << endl;
}
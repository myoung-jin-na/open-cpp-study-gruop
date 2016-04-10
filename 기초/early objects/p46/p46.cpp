// p46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int checking;
	unsigned int miles;
	long days;

	auto pp = 45; // 45u; 45l; 45ll; 
	auto ppb = 0b1001110;

	checking = -20;
	miles = 4276;
	days = 190000;

	cout << "We have made a long journey of " << miles << " miles.";
	cout << "\nOur checking account balance is " << checking;
	cout << "\nAbout " << "days ago Columbsu ";
	cout << "stood on this spot.\n";
	
	return 0;
}


// p134.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned seed;

	cout << "Enter a seed value: ";
	cin >> seed;

	srand(seed);

	cout << rand() << "      ";
	cout << rand() << "      ";
	cout << rand() << endl;
    return 0;
}


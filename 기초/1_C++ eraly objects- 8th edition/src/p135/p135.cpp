// p135.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	unsigned seed;

	seed = time(0);
	srand(seed);

	cout << rand() << "        ";
	cout << rand() << "        ";
	cout << rand() << endl;

    return 0;
}


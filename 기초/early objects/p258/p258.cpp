// p258.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num = 1;

	cout << "Number Square\n";
	cout << "---------------\n";
	while (num <= 5)
	{
		cout << setw(4) << num << setw(7) << (num*num) << endl;
		num++;
	}

    return 0;
}


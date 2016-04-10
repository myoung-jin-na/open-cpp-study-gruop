// p254.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int countUp = 1;
	while (countUp < 6)
	{
		cout << countUp << "   ";
		countUp++;
	}
	cout << endl << endl;

	int countDown = 5;
	while (countDown > 0)
	{
		cout << countDown << "   ";
		countDown--;
	}
    return 0;
}


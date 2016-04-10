// p363.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void showLocal();

int main()
{
	showLocal();
	showLocal();

    return 0;
}

void showLocal()
{
	int localNum = 5;

	cout << "localNum is " << localNum << endl;
	localNum = 99;
}

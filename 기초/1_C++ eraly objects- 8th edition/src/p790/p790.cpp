// p790.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const char *p, *q;

	p = "Hellow";
	q = "Bailey";

	cout << p << q << endl;

	cout << p << " is sotred at 0x" << std::hex << std::uppercase << (int)(p) << endl;
	cout << q << " is sotred at 0x" << std::hex << std::uppercase << (int)(q) << endl;

    return 0;
}


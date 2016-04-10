// p255.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 4;

	cout << num << "  ";
	cout << num++ << "  ";
	cout << num << "  ";
	cout << ++num << "\n\n";

	cout << num << "  ";
	cout << num-- << "  ";
	cout << num << "  ";
	cout << --num << "\n\n";

    return 0;
}


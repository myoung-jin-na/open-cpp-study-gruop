// p126.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 12;
	char name[SIZE];

	cout << "Please enter your first name: ";
	cin >> name;
	cout << "Hellow, " << name << endl;

    return 0;
}


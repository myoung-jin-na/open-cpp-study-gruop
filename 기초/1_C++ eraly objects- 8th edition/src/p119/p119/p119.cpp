// p119.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string city;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Enter the city you live in: ";
	cin >> city;

	cout << "Hellow, " << name << endl;
	cout << "You live in " << city << endl;

    return 0;
}


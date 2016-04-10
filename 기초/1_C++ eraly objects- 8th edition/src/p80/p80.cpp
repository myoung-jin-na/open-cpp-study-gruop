// p80.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int length, width, area;

	cout << "This program calculates the area of a rectangle. \n";

	cout << "Enger the length and width of the rectangle ";
	cout << "separaed by a space.\n";
	cin >> length >> width;

	area = length * width;

	cout << "The area of the rectangle is " << area << endl;

	return 0;
}


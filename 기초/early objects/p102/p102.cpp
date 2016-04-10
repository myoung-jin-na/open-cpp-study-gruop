// p102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#define PI 3.14159

enum {
	INT_=0,
};

int main()
{
	double area, radius;

	std::cout << &INT_0; //<<-- prvalue임. 주소가 없음.

	cout << "This program calculates the area of a circle.\n";

	cout << "What is the radius of the circle?";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;

    return 0;
}


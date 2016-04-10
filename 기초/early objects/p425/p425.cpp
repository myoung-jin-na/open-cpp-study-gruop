// p425.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

/*
class Circle
{
private:
	double radius;

public:
	Circle();
	void setRadius(double);
	double getArea();
};

Circle::Circle()
{
	radius = 1.0;
}

void Circle::setRadius(double r)
{
	if (r >= 0.0)
	{
		radius = r;
	}
}

double Circle::getArea()
{
	return 3.14 * pow(radius, 2);
}
*/

int main()
{
	Circle circle1;
	Circle circle2;
	circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.getArea() << endl;
	cout << "The area of circle2 is " << circle2.getArea() << endl;

	int a;	// default-initialization
	int az{};// zero-initialization
	int ad{ 0 };// direct-initialization

	return 0;
}


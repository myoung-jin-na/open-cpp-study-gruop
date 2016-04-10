#include "Circle.h"
#include <cmath>

Circle::Circle()

{
	//radius = 1.0;
}


Circle::~Circle()
{
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

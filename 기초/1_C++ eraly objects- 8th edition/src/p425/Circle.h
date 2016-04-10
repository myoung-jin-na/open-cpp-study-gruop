#pragma once

#include <string>

class Circle
{
private:
	std::string data{ "hellow" };
	double radius{5.0};

public:
	Circle();
	~Circle();
	void setRadius(double);
	double getArea();

};


// p101.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// ������ Ÿ�ӿ��� ���� �Ǵ� �Լ��� ���� �� �ִ�.
constexpr float PI() {
	return 3.145f;
}

int main()
{
	const double PI = 3.14159;
	double area, radius;

	cout << &PI << endl;  // <<-- �ּҸ� ���´�.

	constexpr int PIK = 4;  // <<-- ���Ӱ� �߰� �� ���. ������ Ÿ�ӿ� ����.
	cout << &PIK << endl;

	cout << "This program calculates the area of a circle.\n";

	cout << "What is the radius of the circle? ";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;

    return 0;
}


// p101.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// 컴파일 타임에만 실행 되는 함수를 만들 수 있다.
constexpr float PI() {
	return 3.145f;
}

int main()
{
	const double PI = 3.14159;
	double area, radius;

	cout << &PI << endl;  // <<-- 주소를 갖는다.

	constexpr int PIK = 4;  // <<-- 새롭게 추가 된 사양. 컴파일 타임에 결정.
	cout << &PIK << endl;

	cout << "This program calculates the area of a circle.\n";

	cout << "What is the radius of the circle? ";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;

    return 0;
}


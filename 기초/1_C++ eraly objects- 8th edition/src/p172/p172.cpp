// p172.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double result = .666667 * 6.0;

	cout << std::setprecision(54) << " " << std::showbase << "result = " << result << endl;

	if (result == 4.0)
		cout << "result DOES equal 4!" << endl;
	else
		cout << "result DOES NOT equal 4!" << endl;

	// 위와 같은 이유 때문에 템플릿의 인자로 실수를 받을 수 없음.

    return 0;
}


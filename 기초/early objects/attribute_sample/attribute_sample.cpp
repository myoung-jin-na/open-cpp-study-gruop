// attribute_sample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

class A
{
public:
	explicit operator bool()
	{
		return true;
	}
};

int main()
{
	int c{5};

	if ([[]] int i = 5)
	{
		(void)(i);
	}

	A a;
	bool ba = a;

	if (a) // bool convert to boolean
	{

	}

	// 객체의 bool 강제 형변환의 대표적인 예.
	std::ifstream ip("test.txt");
	if (!ip) { // 파일을 읽어 들일 수 있는 상태이면.
	
	}


    return 0;
}


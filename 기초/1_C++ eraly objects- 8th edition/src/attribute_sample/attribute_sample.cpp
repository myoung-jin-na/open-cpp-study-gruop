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

	// ��ü�� bool ���� ����ȯ�� ��ǥ���� ��.
	std::ifstream ip("test.txt");
	if (!ip) { // ������ �о� ���� �� �ִ� �����̸�.
	
	}


    return 0;
}


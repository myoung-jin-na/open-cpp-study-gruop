// p429.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Demo
{
public:
	Demo()
	{
		std::cout << "Now the constructor is running.\n";
	}

	~Demo()
	{
		std::cout << "Now the destructor is running.\n";
	}
};

int main()
{
	Demo demoObj;

	Demo m1;
	Demo m2{ m1 }; // ���� ������. ����
	Demo m3{ std::move(m1) };// �̵� ������ ����.

	m1 = m2; // ���� ������. ����.
	m1 = std::move(m2);

	std::cout << "The object now exists, but is about to be destroyed\n";

	return 0;
}


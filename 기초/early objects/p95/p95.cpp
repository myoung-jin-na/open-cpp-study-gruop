// p95.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
};

class B : public A
{
public:
	B(const A& src)
	{
	}
};

// p95
int main()
{
	A a;
	B& b = static_cast<B&>(a);
	B b = static_cast<B>(a);    // <<-- �̷��� ���ٷ��� AŸ�� ������ ������ ���� �����ڸ� ����� ��� �Ѵ�.

	int number = 65;

	cout << number << endl;

	cout << static_cast<char>(number) << endl;

	char aaa = 'g';
	char aaab = 'h';
	auto m = aaa + aaab; // m�� int type�� �ȴ�.

    return 0;
}

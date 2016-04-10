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
	B b = static_cast<B>(a);    // <<-- 이렇게 해줄려면 A타입 대입이 가능한 복사 생성자를 만들어 줘야 한다.

	int number = 65;

	cout << number << endl;

	cout << static_cast<char>(number) << endl;

	char aaa = 'g';
	char aaab = 'h';
	auto m = aaa + aaab; // m은 int type이 된다.

    return 0;
}

// p158.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// bool trueValue, falseValue;
	int x = 5, y = 10;

	bool trueValue = (x < y);   // 초기화 시점 = 선언시점, RAII 이라고 함.
	bool falseValue = (y == x);

	cout << std::boolalpha << "True is " << trueValue << endl;
	cout << "False is " << falseValue << endl;

	auto p = ("test", 45);  // p는 int 타입이다. 콤마연산자 실행은 한다. 앞에꺼는 버리고 최종적으로 뒤를 취한다. 기역해야 함.

	std::cout << ("test",45);

	// 프로모션
	auto p1 = 1 + 2L;
	auto p2 = 'a' + 'c'; // p2는 int 이다.  프로모션이 진행 되어 p2는 int가 된다.
	auto p3 = U'a' + 'c'; // p2는 unsigned int 이다.
	auto p4 = true + false; 

	int zk[3];
	auto pk = 1 + &zk[0];
	auto pkk = &zk[0] + 1;
	//auto pkkk = &zk[0] + &zk[1];

	float z[3];
	//auto kkk = &z[0] + &z[0];

	// A-B(A,B->정수, 열거자, 포인터)
	int i{};
	auto e1 = 2 - 3;
	i = 1;
	//auto e2 = 1 - &zk[i];
	auto e3 = &zk[0] - 1;

	i = 0;
	auto e4 = &zk[i] - &zk[i + 1];

	float fzk[3];
	//auto e5 = &zk[i] - &fzk[i + 1];   // 서로 타입이 다른 것을 연산하면 error이다.
	//auto e6 = (void*)&zk[i] - (void*)&fzk[i + 1]; // error이다.
	auto e7 = (char*)&zk[i] - (char*)&fzk[i + 1]; // error이다.


    return 0;
}


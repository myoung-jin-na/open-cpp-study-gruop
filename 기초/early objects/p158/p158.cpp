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

	bool trueValue = (x < y);   // �ʱ�ȭ ���� = �������, RAII �̶�� ��.
	bool falseValue = (y == x);

	cout << std::boolalpha << "True is " << trueValue << endl;
	cout << "False is " << falseValue << endl;

	auto p = ("test", 45);  // p�� int Ÿ���̴�. �޸������� ������ �Ѵ�. �տ����� ������ ���������� �ڸ� ���Ѵ�. �⿪�ؾ� ��.

	std::cout << ("test",45);

	// ���θ��
	auto p1 = 1 + 2L;
	auto p2 = 'a' + 'c'; // p2�� int �̴�.  ���θ���� ���� �Ǿ� p2�� int�� �ȴ�.
	auto p3 = U'a' + 'c'; // p2�� unsigned int �̴�.
	auto p4 = true + false; 

	int zk[3];
	auto pk = 1 + &zk[0];
	auto pkk = &zk[0] + 1;
	//auto pkkk = &zk[0] + &zk[1];

	float z[3];
	//auto kkk = &z[0] + &z[0];

	// A-B(A,B->����, ������, ������)
	int i{};
	auto e1 = 2 - 3;
	i = 1;
	//auto e2 = 1 - &zk[i];
	auto e3 = &zk[0] - 1;

	i = 0;
	auto e4 = &zk[i] - &zk[i + 1];

	float fzk[3];
	//auto e5 = &zk[i] - &fzk[i + 1];   // ���� Ÿ���� �ٸ� ���� �����ϸ� error�̴�.
	//auto e6 = (void*)&zk[i] - (void*)&fzk[i + 1]; // error�̴�.
	auto e7 = (char*)&zk[i] - (char*)&fzk[i + 1]; // error�̴�.


    return 0;
}


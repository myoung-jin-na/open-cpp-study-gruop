// p96.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// c++11 �������� �Ʒ��� ���� �ʱ�ȭ ����� �߰� ��. ����° ����� �Լ��� ȥ�� �ǹǷ� ������� ���ϰ� �ϰ� �ִ�.
class A {
private:
	int a{ 10 };
	int b = { 10 };
	int c(10); // <<-- error
};

int main()
{
	A a{};

	int books, months;
	double booksPerMonth;

	cout << "how many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	booksPerMonth = double(books) / months;
	cout << "That is " << booksPerMonth << " books per month.\n";

    return 0;
}


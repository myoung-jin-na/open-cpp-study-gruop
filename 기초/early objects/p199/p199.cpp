// p199.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct test {
	void print()
	{
		cout << "Hellow" << endl;
	}
};

int main()
{
	int test{ 6 };
	struct test a; // 앞에 struct를 붙여서 해결. "elaborated type specifiers"

	int number;

	cout << "Enter a number greater than 0: ";
	cin >> number;

	if (number > 0)
	{
		int number; // name hiding

		cout << "Now enter another number: ";
		cin >> number;
		cout << "The second number you entered was ";
		cout << number << endl;
	}
	cout << "Your first number was " << number << endl;

    return 0;
}


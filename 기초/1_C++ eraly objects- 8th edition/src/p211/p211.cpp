// p211.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A
{
public:
	operator int() {
		return 0;
	};
};

int main()
{
	A a;
	switch (a)  // switch 문에 객체도 넣을 수 있어요..
	{
	case 0:
		break;
	}

	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;

	switch (choice)
	{
	case 'A': cout << "You entered A.\n";
		break;
	case 'B': cout << "You entered B.\n";
		break;
	case 'C': cout << "You entered C.\n";
		break;
	default: cout << "You did not enter A, B, or C!\n";
	}

    return 0;
}


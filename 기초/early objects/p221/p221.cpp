// p221.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum Roster {
	Tom = 1, // enumeraator
	Sharon, // enumeraator
	Bill, // enumeraator
	Teresa, // enumeraator
	John// enumeraator
}; 
// enumeration

// scoped enumeration
enum class CRoster {
	CTom = 1, // enumeraator
	CSharon, // enumeraator
	CBill, // enumeraator
	CTeresa, // enumeraator
	CJohn// enumeraator
};


int main()
{
	int who;

	cout << "This program will give you a student's birthday.\n";
	cout << "Whose birthday do yu want to know?\n";
	cout << "1 = Tom\n";
	cout << "2 = Sharon\n";
	cout << "3 = Bill\n";
	cout << "4 = Teresa\n";
	cout << "5 = John\n";
	cin >> who;

	switch (who)
	{
	case Tom: cout << "\nTom's birthday is January 3.\n";
		break;
	case Sharon: cout << "\nSharon's birthday is April 22.\n";
		break;
	case Bill: cout << "\nBill's birthday is December 19.\n";
		break;
	case Teresa: cout << "\nTeresa's birthday is February 2.\n";
		break;
	case John: cout << "\nJohn's birthday is June 17.\n";
		break;
	default: cout << "\nInvalid selection\n";

	}

    return 0;
}


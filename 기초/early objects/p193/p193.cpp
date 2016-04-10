// p193.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	/*
	std::ifstream fp("sss.txt");
	if (!fp) return 0;
	// fp.operator!(); <<-- 이걸 호출한는거야..
	fp.operator bool();
	*/

	cout << "Is '?' an alphabetic character? " << isalpha('?') << "\n";
	cout << "Is 'X' an alphabetic character? " << isalpha('X') << "\n";
	cout << "Is 'x' an alphabetic character? " << isalpha('x') << "\n\n";

	cout << "Ask if(isalpha('x') == true) \n";
	if (isalpha('x') == true)
		cout << "The letter x IS an alphabetic character. \n\n";
	else
		cout << "The letter x is NOT an alphabetic character. \n\n";

	cout << "Ask if(isalpha('x')) \n";
	if (isalpha('x'))
		cout << "The letter x IS an alphabetic character.\n";
	else
		cout << "The letter x is NOT an alphabetic character. \n";

    return 0;
}


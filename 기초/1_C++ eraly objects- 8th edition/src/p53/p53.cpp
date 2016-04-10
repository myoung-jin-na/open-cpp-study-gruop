// p53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char letter;

	letter = 'A';
	cout << letter << endl;

	letter = 'B';
	cout << letter << endl;

	std::cout << std::is_integral<char>::value << std::endl;

	return 0;
}

/*
int main()
{
	char letter;

	letter = 65;
	cout << letter << endl;

	letter = 66;
	cout << letter << endl;
	
	return 0;
}
*/
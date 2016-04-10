// p530.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	int vowelCount = 0;
	string sentence;

	cout << "Enter";
	getline(cin, sentence);
	for (int pos = 0; pos < sentence.length(); pos++)
	{
		ch = toupper(sentence[pos]);
		switch (ch)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': vowelCount++;
		}
	}
	cout << "There are " << vowelCount << endl;

    return 0;
}


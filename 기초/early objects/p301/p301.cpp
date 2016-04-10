// p301.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	ifstream inputFile;
	string filename;
	int number;

	cout << "Enter the filename: ";
	cin >> filename;

	inputFile.open(filename.c_str());

	std::stringstream ss;
	ss << inputFile.rdbuf();
	cout << ss.str();

	inputFile.eof();

	string name;
	std::getline(inputFile, name);

	// inputFile.operator bool();
	if (inputFile)
	{
		while (inputFile >> number)
		{
			cout << number << endl;
		}

		inputFile.close();
	}
	else
	{
		cout << "Error opening the file.\n";
	}

    return 0;
}


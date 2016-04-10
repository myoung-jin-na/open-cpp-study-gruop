// p290.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ofstream outputFile;

	outputFile.open("demofile.txt", ofstream::app);

	cout << "Now writing data to the file.\n";

	outputFile << "Bach\n";
	outputFile << "Beethoven\n";
	outputFile << "Mozart\n";
	outputFile << "Schubert\n";
	outputFile << endl;

	outputFile.close();

	cout << "Done.\n";

    return 0;
}


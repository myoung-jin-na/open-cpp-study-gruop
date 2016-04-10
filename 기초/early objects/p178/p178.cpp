// p178.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";

	int testScore;
	cin >> testScore;

	const int MIN_A_SCORE = 90,
		      MIN_B_SCORE = 80,
		      MIN_C_SCORE = 70,
		      MIN_D_SCORE = 60;
	char grade;
	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	if (testScore >= MIN_B_SCORE)
		grade = 'B';
	if (testScore >= MIN_C_SCORE)
		grade = 'C';
	if (testScore >= MIN_D_SCORE)
		grade = 'D';
	if (testScore >= 0)
		grade = 'F';

	cout << "Yor grade is " << grade << ".\n";

    return 0;
}


// p175.cpp : Defines the entry point for the console application.
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

	char grade;
	const int MIN_A_SCORE = 90,
		      MIN_B_SCORE = 80,
		      MIN_C_SCORE = 70,
		      MIN_D_SCORE = 60;

	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	else if (testScore >= MIN_B_SCORE)
		grade = 'B';
	else if (testScore >= MIN_C_SCORE)
		grade = 'C';
	else if (testScore >= MIN_D_SCORE)
		grade = 'D';
	else if (testScore >= 0 )
		grade = 'F';

	cout << "Your grade is " << grade << ".\n";

	return 0;
}


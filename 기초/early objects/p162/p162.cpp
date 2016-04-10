// p162.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1, score2, score3;
	double average;

	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is " << average << endl;

	if (average = 100)
	{
		cout << "Congratulations! ";
		cout << "That's a perfect score!\n";
	}

    return 0;
}


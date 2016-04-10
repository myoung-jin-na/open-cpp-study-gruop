// p367.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void displayStars(int starsPerRow = 10, int numRows = 1);
int num = 2;

int main()
{
	displayStars();
	cout << endl;
	displayStars(5);
	cout << endl;
	displayStars(7, 3);

    return 0;
}

void displayStars(int starsPerRow, int numRows)
{
	for (int row = 1; row <= numRows; row++)
	{
		for (int star = 1; star <= starsPerRow; star++)
		{
			cout << '*';
		}
		cout << endl;
	}
}


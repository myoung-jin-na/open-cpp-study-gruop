// p540.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

typedef int arrayType[];

const int ARRAY_SIZE = 7;

//void doubleArray(int(&nums)[ARRAY_SIZE], int size);
void doubleArray(int (&nums)[ARRAY_SIZE]);
void showValues(int nums[], int);

int main()
{
	int set[] = { 1,2,3,4,5,6,7 };

	for (auto&& item : set)
	{

	}

	cout << "The arrays values are:\n";
	showValues(set, ARRAY_SIZE);

	doubleArray(set);
	
	cout << "\nAfter calling doubleArray, the values are:\n";
	showValues(set, ARRAY_SIZE);
	cout << endl;
    return 0;
}

void doubleArray(int (&nums)[ARRAY_SIZE]) // decay
{
//	for (int index = 0; index < size; index++)
//		nums[index] *= 2;
	for (auto&& item : nums)
	{

	}
}

void showValues(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}

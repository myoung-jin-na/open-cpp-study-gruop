// p362.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void california();

const int BIRDS = 500;

int main()
{
	cout << "In main there are " << BIRDS << " birds.\n";
	california();
    return 0;
}

void california()
{
	const int BIRDS = 10000;

	cout << "In california there are " << BIRDS << " birds.\n";
}


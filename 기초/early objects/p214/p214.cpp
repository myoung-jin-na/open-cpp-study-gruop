// p214.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int modelNum;

	cout << "Our TVs come in three models: The 100, 200, and 300. \n";
	cout << "Which do you want? ";
	cin >> modelNum;

	cout << "\nThat model has the following features:\n";

	switch (modelNum)
	{
	case 300: cout << " Built-in DVR \n";
	case 200: cout << " 1080p high definition picture \n";
	case 100: cout << " 42\" LCD flat screen \n";
		break;
	default: cout << "You can only choose the 100, 200, or 300.\n";
	}
    return 0;
}


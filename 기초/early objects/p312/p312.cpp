// p312.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	int color = 10;
	for (char letter = 'A'; letter <= 'Z'; letter++)
	{
		SetConsoleTextAttribute(screen, color);
		cout << letter << " " << endl;
		color += 2;
		if (color > 14)
			color = 10;
		Sleep(280);
	}
	SetConsoleTextAttribute(screen, 7);
    return 0;
}


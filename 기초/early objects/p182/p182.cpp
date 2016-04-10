// p182.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	do
	{
		std::cin.operator bool();
		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore();
		}
		std::system("cls");

		int choice;
		cout << "   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		cout << fixed << showpoint << setprecision(2);

		int months;
		double charges;
		if (choice == 1)
		{
			cout << "For how many months? ";
			cin >> months;
			if (!cin) continue;
			const double ADULT_RATE = 120.0;
			charges = months * ADULT_RATE;
			cout << "\nThe total charges are $" << charges << endl;
		}
		else if (choice == 2)
		{
			cout << "For how many months? ";
			cin >> months;
			if (!cin) continue;
			const double CHILD_RATE = 60.0;
			charges = months * CHILD_RATE;
			cout << "\nthe total charges are $" << charges << endl;
		}
		else if (choice == 3)
		{
			cout << "For how many months? ";
			cin >> months;
			if (!cin) continue;
			const double SENIOR_RATE = 100.0;
			charges = months * SENIOR_RATE;
			cout << "\nThe total charges are $" << charges << endl;
		}
		else if (choice == 4)
		{
			cout << "\nThe valid choices are 1 through 4.\n"
				<< "Run the program again and select one of theose.\\n";
			break;
		}
	} while (1);

    return 0;
}


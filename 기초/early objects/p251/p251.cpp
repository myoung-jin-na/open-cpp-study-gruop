// p251.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int MIN_PLAYERS = 9,
		MAX_PLAYERS = 15;

	int players,
		teamSize,
		numTeams,
		leftOver;

	cout << "How many players do you wish per team?\n";
	cout << "(Enter a value in the range "
		<< MIN_PLAYERS << " - " << MAX_PLAYERS << "): ";
	cin >> teamSize;

	while (teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS)
	{
		cout << "\nTeam size should be "
			<< MIN_PLAYERS << " to " << MAX_PLAYERS << " playsers.\n";
		cout << "How many players do you wish per team? ";
		cin >> teamSize;
	}

	cout << "\nHow many players are available? ";
	cin >> players;

	while (players <= 0)
	{
		cout << "Please enter a positive number: ";
		cin >> players;
	}
	numTeams = players / teamSize;
	leftOver = players % teamSize;

	cout << "\nThere will be " << numTeams << " teams with ";
	cout << leftOver << " players left over.\n";

    return 0;
}


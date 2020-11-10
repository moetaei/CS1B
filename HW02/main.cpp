/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

#include "header.h"

int main() {

	string playerX;	   // Player 1 Name
	string playerO;    // Player 2 Name
	srand(time(NULL)); // Random Time Generator
	char token;        // Token switch for X and O
	char boardAr[3][3];// Array for board
	char option;	   // Option Switch char;

	// Initialize Board and output instructions.
	InitBoard(boardAr);
	OutputInstruct();

	// Output Menu
	Menu();
	cin.get(option);
	cin.ignore(1000, '\n');

	//Menu loop
	while(option != 'a')
	{
		switch (tolower(option))
		{
		case 'b': // Player Name and Info
			GetPlayers(playerX, playerO, token);
			break;
		case 'c': // Two Player Mode

			if (playerO == "PC")   // checks for 1 player input to prompt
			{					   // 2 player information grab
			GetPlayers(playerX, playerO, token);
			}
			GetAndCheckInp(boardAr, token, playerX, playerO); // game function
			// Two Player function
			break;
		case 'd': // Single Player Mode
			playerO= "PC";
			if ((playerX.empty()))  // checks for empty string
			{
			GetPlayers(playerX, playerO, token); //name and info
			}
			GetAndCheckInp(boardAr, token, playerX, playerO);
			break;

		default:
			cout << "Error"<< endl;
			break;
		}
				Menu(); //menu re display with renewal of options.
					cin >> option;
	}
	return 0;
}

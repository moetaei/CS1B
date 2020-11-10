/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
 * GetPlayers
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/

#include "header.h"

void GetPlayers(string& playerX, string& playerO, char& token)
{
	char player; 	//Player option
	system("cls");	//Clear screen
    cin.sync();		//Clear input stream;

		cout << "Please enter player first name" << endl;
				getline(cin, playerX);
				// getline for string of name
				cout << "Would you like to play against a friend (Enter Y)"<< endl;
					cin.get(player);
				// char get for 1 or 2 player with cin.ignore for error avoidance.
					cin.ignore(1000,'\n');

	if (player == 'Y' || player == 'y')
		{
		// 2 player mode questions
		cout << "Please enter the second players name" << endl;
				getline(cin, playerO);
		}
	else
		{
		playerO = "PC";
		}

	do {
				cout << "Would " << playerX << " want to be X or O. " << endl;
				// Deciding for X or O variable.
					cin.get(token);
				// Getting Token.
					token = (toupper(token));
					cin.ignore(1000, '\n');
		if (token == 'X' || token == 'O') {
					break;
				}
			//error checking
		} while (token != 'X' || token != 'O');
	}



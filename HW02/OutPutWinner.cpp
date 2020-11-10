/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
* OutputWinner
* This function receives as input a character indicating which player won
* or if the game was a tie and outputs an appropriate message. This function
* does not return anything as it simply outputs the appropriate message to
* the screen.
*
* RETURNS: nothing
* Displays the winner’s name
*****************************************************************************/

#include "header.h"
void OutputWinner(char whoWon, // IN - represents the winner or a value
		// indicating a tied game.
		string playerX, // OUT - player X’s name
		char token, char boardAr[][3]) // OUT - player O’x name
{
	system("cls"); // clear screen
	DisplayBoard(boardAr); // redisplay winning screen

	cout << "Congratulations " << playerX << " for winning as " << token << "."<< endl;

	InitBoard(boardAr); 	//reinitialize board for new game
	cin.ignore(1000, '\n'); // clear input buffer
}


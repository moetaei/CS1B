/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/******************************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the instructions to the user
 *****************************************************************************/
void OutputInstruct();

/******************************************************************************
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *****************************************************************************/
void InitBoard(char boardAr[][3]); // OUT - tic tac toe board

/******************************************************************************
* DisplayBoard
* This function outputs the tic tac toe board including the tokens
* played in the proper format (as described below).*
* RETURNS: nothing
* outputs the current state of the board*/
/*****************************************************************************/

void DisplayBoard(const char boardAr[][3]); // IN - tic tac toe board

/******************************************************************************
 * GetPlayers
 * This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 * RETURNS: the players names through the variables playerX and playerO.
*****************************************************************************/

void GetPlayers(string& playerX, 		// OUT - player X’s name
		string& playerO, char& token);	// OUT - player O’x name

/******************************************************************************
 * Get and Check Input
 * Gets user input for players 1 or 2 and also for PC play. String is passed in
 * to evaluate as PC.
 * Takes coordinates inputed and allots them to the correct spot on the
 * array tic tac toe board
 */

void GetAndCheckInp(char boardAr[][3], char token, string playerX,
		string playerO);

/******************************************************************************
 * SwitchToken
 * This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an O. If it
 * receives and O it returns and X.
 *
 * RETURNS: the token opposite of the one in which it receives.
 *****************************************************************************/

char SwitchToken(char token); // IN - current player’s token ('X' or 'O')

/******************************************************************************
* CheckWin
* This function checks to see if either player has won. Once it is
* possible for a win condition to exist, this runs after each
* play a player plays.
*
* RETURNS the character value of the player game variable that won
* or a character that indicates a tie.
*****************************************************************************/

char CheckWin(const char boardAr[][3]); // IN - tic tac toe board
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

void OutputWinner(char whoWon, // IN - represents the winner or a value
		// indicating a tied game.
		string playerX, // OUT - player X’s name
		char token,
		char boardAr[][3]); // OUT - player O’x name

// Menu Function
// small menu for easy to access call. does not return anything just outputs
// the menu to the screen when called.
void Menu();

#endif /* HEADER_H_ */

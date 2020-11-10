/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
 * OutputInstruct
 * This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 *
 * RETURNS: nothing
 * Displays the instructions to the user
 *****************************************************************************/


#include "header.h"

void OutputInstruct()
{

		cout << left;
		cout << "**************************************************\n";
		cout << "*  PROGRAMMED BY : "  << "Mohammed Taei " << endl;
		cout << "*  "      << setw(14) << "STUDENT ID"
			 << ": 1019392\n";
		cout << "*  " << setw(14) << "CLASS"  << ": CS1B         M/W 6:50pm - 9:50\n";
		cout << "*  " << setw(14) << "ASSIGNMENT"  << ": Tic Tac Toe      Due 2/21/2018\n";

		cout << "**************************************************\n";
	cout << "Welcome to Tic Tac Toe" << endl;
cout << "Your goal is to get three in a row." << endl;
cout << "To play you will need to input your name and choose\n"
		"whether you would like to play against a friend or the \n"
		"machine." << endl;
}

// Menu Function
// small menu for easy to access call. does not return anything just outputs
// the menu to the screen when called.

void Menu()
{
	cout << "a. Exit" << endl;
	cout << "b. Set Player Names"<< endl;
	cout << "c. Play in Two Player Mode"<< endl;
	cout << "d. Play in one Player Mode" << endl;
}

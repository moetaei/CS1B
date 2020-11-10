/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

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

#include "header.h"

char SwitchToken(char token)
{
switch (token)
{
case 'X':
	if (token == 'X')
	{
		token = 'O';
	}
	break;

case 'O':
	if (token == 'O')
	{
		token = 'X';
	}
}
return token;
}

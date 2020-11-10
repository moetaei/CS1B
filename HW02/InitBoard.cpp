/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
 * InitBoard
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 *****************************************************************************/

#include "header.h"
// initializes a 3 x 3 board array with spaces
void InitBoard(char boardAr [][3])
{
for (int x=0; x < 3; x++)
{
	for (int y=0; y < 3; y++)
	{
		boardAr[x][y] = ' ';
	}
}
}

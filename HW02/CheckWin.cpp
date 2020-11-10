/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 2/21/18
 ****************************************************************************/

/******************************************************************************
* CheckWin
* This function checks to see if either player has won. Once it is
* possible for a win condition to exist, this runs after each
* play a player plays.
*
* RETURNS the character value of the player game variable that won
* or a character that indicates a tie.
*****************************************************************************/


#include "header.h"
/* This function takes the full board array and checks for win situations. **/

char CheckWin(const char boardAr[][3])

{

    char ret = 'T';

        // Checks for row win
        for (int i = 0; i < 3; ++i)
        {
            if (boardAr[i][0] == boardAr[i][1] && boardAr[i][1] == boardAr[i][2])
            {
                if ((ret = boardAr[i][0]) != 'T')
                {
                	return ret;
            }
                }
        }
            // Checks for column win
        for (int i = 0; i < 3; ++i)
        {	   if (boardAr[0][i] == boardAr[1][i] && boardAr[1][i] == boardAr[2][i])
                if ((ret = boardAr[0][i]) != 'T')
                    return ret;
                                }
        // Check for diagonal win (upper left to bottom right)
        if (boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2])
        {
            if ((ret = boardAr[0][0]) != 'T')
                {
            	return ret;
                }
        }
        // Check for diagonal win (upper right to bottom left)
        if (boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0])
        {   if ((ret = boardAr[0][2]) != 'T')
                {
        		return ret;
                }
        }
        int count = 0;
        for (int t=0; t< 3; t++)
        {
        	for (int q=0; q<3; q++)
        	{
        		if ((boardAr[t][q]) != ' ')
		{
			count++;
		}
        }
        }
        if (count == 9)
        {

        	return 'F';
        }
        return ret;



    // checking the result:
    switch (ret) {
        case 'T': /* total */ break;
        case 'X': /* X won */ break;
        case 'O': /* O won */ break;
        case 'F': /* FAIL */ break;
    }
}

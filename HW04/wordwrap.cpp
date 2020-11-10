/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Wordwrap takes strings and counts to the print margin which is set to 75
// characters and inserts a newline character into the string to allow it to
// correctly display on console and output file.
void Wordwrap(string &description, string &Title)
    {
    unsigned int runmax = 75; 		// max character length
    while (description.length() > runmax) // checks for smaller strigns
	{
	if(description[runmax] == '\n')
	    {
	    break;
	    }
	if (description[runmax] == ' ')  // if 75th space is blank the newline
	    // character will be inserted into the string.
	    {
	    description[runmax] = '\n';
	    }
	else
	    {
	    while (description[runmax] != ' ') // checks for empty space in
		// reverse to properly format the words.
		{
		runmax--;
		if(description[runmax] == '\n')
		    {
		    break;
		    }
		}
	    description[runmax] = '\n'; // after finding the empty space a
	    // newline character will be inserted at this location.
	    }
	runmax += 75; // increase the line length to handle larger strings
	}

    unsigned int max = 45; // check for title length

    while (Title.length() > max) // while title length is > than max
	{
	Title[max] = ' '; // it will be replaced with ' '
	if (max < 48 && max > 41)	// for a certain range it will input
	    {				// an ellipses
	    Title[max] = '.';
	    Title[max+1]= '.';
	    }
	max++;
	}
    }

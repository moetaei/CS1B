/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Output Function Takes the input taken from input function and outputs it
// Using the Ostream and cout. Output all into OutputFile.txt
// Goes through node through node and outputs the corresponding information
// into the output file. Inputs the head of the stack.
void OutputFunction(DVD *head, DVD *tail, ofstream& outFile)
    {
    DVD *perp;

    int movie = 1;

    perp = head;
    while (perp != NULL)
	{
	Wordwrap(perp->description, perp->Title);
	outFile << endl << endl;
	outFile << "****************************************"
		"***********************************" << endl;
	outFile << "Movie #: " << setw(4) <<right << movie << right << setw(14)
			<< "Title: " << perp->Title << endl;
	outFile << "----------------------------------------------------------"
		"-----------------" << endl;
	outFile << "Year:  " << setw(6) << right << perp->year << " " << right << setw(13)
		<< "Rating:" << setw(2) << perp->rating << endl;
	outFile << "-----------------------------------------------------------"
		"----------------" << endl;
	outFile << left << setw(18) << "Leading Actor: " << setw(30)
		<< perp->Lead << right << "Genre 1: " << perp->Genre << endl;
	outFile << "Supporting Actor: " << left << setw(30) << perp->Support
		<< right << "Genre 2: " << perp->Alternate << endl;
	outFile	<< "-----------------------------------------------------------"
		"----------------" << endl;
	outFile << "PLOT:" << endl;
	outFile << perp->description << endl;
	outFile	<< "***********************************************************"
		"****************"<< endl;
	perp = perp->next;
	movie++;
	}

    }

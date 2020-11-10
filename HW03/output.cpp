/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3
 * CLASS      : CS1B
 * SECTION    : M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Output Function Takes the input taken from input function and outputs it
// Using the Ostream and cout. Output all into OutputFile.txt
void OutputFunction(DVD *head, DVD *tail)
    {
    DVD *perp;
    ofstream outFile;
    outFile.open("OutputFile.txt");
    outFile << PrintHeader();
    int movie = 1;

    perp = head;
    while (perp != NULL)
	{
	Wordwrap(perp->description, perp->Title);
	cout << endl << endl;
	cout
		<< "***************************************************************************"
		<< endl;
	cout << "Movie #: " << right << setw(2) << movie << right << setw(14)
		<< "Title: " << perp->Title << endl;
	cout
		<< "---------------------------------------------------------------------------"
		<< endl;
	cout << "Year:  " << perp->year << " " << right << setw(13) << "Rating:"
		<< setw(2) << perp->rating << endl;
	cout
		<< "---------------------------------------------------------------------------"
		<< endl;
	cout << left << setw(18) << "Leading Actor: " << setw(30) << perp->Lead
		<< right << "Genre 1: " << perp->Genre << endl;
	cout << "Supporting Actor: " << left << setw(30) << perp->Support
		<< right << "Genre 2: " << perp->Alternate << endl;
	cout
		<< "---------------------------------------------------------------------------"
		<< endl;
	cout << "PLOT:" << endl;
	cout << perp->description << endl;
	cout
		<< "***************************************************************************"
		<< endl;

	outFile << endl << endl;
	outFile
		<< "***************************************************************************"
		<< endl;
	outFile << "Movie #: " << right << setw(2) << movie << right << setw(14)
		<< "Title: " << perp->Title << endl;
	outFile
		<< "---------------------------------------------------------------------------"
		<< endl;
	outFile << "Year:  " << perp->year << " " << right << setw(13)
		<< "Rating:" << setw(2) << perp->rating << endl;
	outFile
		<< "---------------------------------------------------------------------------"
		<< endl;
	outFile << left << setw(18) << "Leading Actor: " << setw(30)
		<< perp->Lead << right << "Genre 1: " << perp->Genre << endl;
	outFile << "Supporting Actor: " << left << setw(30) << perp->Support
		<< right << "Genre 2: " << perp->Alternate << endl;
	outFile
		<< "---------------------------------------------------------------------------"
		<< endl;
	outFile << "PLOT:" << endl;
	outFile << perp->description << endl;
	outFile
		<< "***************************************************************************"
		<< endl;

	perp = perp->next;
	movie++;
	}
    outFile.close();

    }

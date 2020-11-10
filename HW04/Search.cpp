/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"

int Search(DVD *head, DVD *tail, string name, ofstream& outFile, int choice)
    {
    // Search takes in the search term and searches through node through node
    // Outputs the value found and return of which function correspondingly
    // Inputs the head and tail of the function the search type string name
    // and also the numerical choice to differentiate the search type
    // along with that it outputs in OutputFile.txt while it searches through
    DVD *perp;
    perp = head;
    int total = 0; // total found
    int title = 0; // amount of title found
    int actor = 0; // amount of actors found
    int gen = 0; // amount of genre found
    int num = 0; // amount of rating or year count
    bool invalid = false; // initialize to check for invalid input

    if (choice < 5) // string search
	{
	if (choice != 2) // Differentiates between different types of searches
	    {
	    if (choice == 3)
		{
		outFile << "Search by genre for " << name << " found:" << endl;
		}
	    if (choice == 4)
		{
		outFile << "Search by actor for " << name << " found:" << endl;
		}
	    // Format for output file search
	    outFile << "MOVIE # " << "TITLE" << setw(49) << "YEAR " << "RATING "
		    << "GENRE" << setw(23) << "ALT GENRE" << setw(18)
		    << "LEAD ACTOR" << setw(26) << "SUPPORTING ACTOR" << endl;
	    outFile
		    << "------- ------------------------------------------------"
			    " ---- ------ ----------------- ----------------- ----------"
			    "--------- -------------------" << endl;
	    }
	while (perp != NULL)
	    { // searching through the nodes of the stack until the pointer
	    // return a NULL value
	    Wordwrap(perp->description, perp->Title);
	    // Wordwrap will take in the description as well as the title
	    // and will shrink them to the apporopriate sizes
	    if (name == perp->Title)  // checks for match in title and outputs
		{	// heading along with the total count
		outFile
			<< "*******************************************************"
				"********************" << endl;
		outFile << "Movie #: " << right << setw(2) << name << right
			<< setw(14) << "Title: " << perp->Title << endl;
		outFile
			<< "------------------------------------------------------"
				"---------------------" << endl;
		outFile << "Year:  " << perp->year << " " << right << setw(13)
			<< "Rating:" << setw(2) << perp->rating << endl;
		outFile
			<< "-------------------------------------------------------"
				"--------------------" << endl;
		outFile << left << setw(18) << "Leading Actor: " << setw(30)
			<< perp->Lead << right << "Genre 1: " << perp->Genre
			<< endl;
		outFile << "Supporting Actor: " << left << setw(30)
			<< perp->Support << right << "Genre 2: "
			<< perp->Alternate << endl;
		outFile
			<< "-------------------------------------------------------"
				"--------------------" << endl;
		outFile << "PLOT:" << endl;
		outFile << perp->description << endl;
		outFile
			<< "*******************************************************"
				"********************" << endl;
		outFile << endl << endl;
		title++;
		}
	    if (name == perp->Lead) // checks for match and outputs
		{	// the heading to the file
		actor++;  // counts the amount of times it was found
		outFile << setw(3) << actor << "     " << setw(49) << left
			<< perp->Title << setw(7) << perp->year << setw(5)
			<< perp->rating << setw(5) << left << setw(19)
			<< perp->Genre << setw(17) << perp->Alternate;
		if (perp->Lead.length() > 19) // loop for long Lead Actor names
		    {
		    for (int x = 0; x < 19; x++)
			{
			outFile << perp->Lead[x];
			}
		    outFile << " ";
		    }
		else
		    {
		    outFile << setw(20) << left;
		    outFile << perp->Lead;
		    }
		outFile << perp->Support << right << endl;
		}

	    if (name == perp->Support)
		{
		actor++;
		outFile << setw(3) << actor << "     ";
		if (perp->Title.length() > 45) 	// loop for long Title names
		    {
		    for (int x = 0; x < 48; x++)
			{
			outFile << left << perp->Title[x];
			}
		    outFile << " ";
		    }
		else
		    {
		    outFile << setw(49) << left;
		    outFile << perp->Title;
		    }
		outFile << setw(7) << perp->year << setw(5) << perp->rating
			<< setw(5) << left << setw(19) << perp->Genre
			<< setw(17) << perp->Alternate;
		if (perp->Lead.length() > 19) // loop for long Lead Actor names
		    {
		    for (int x = 0; x < 19; x++)
			{
			outFile << perp->Lead[x];
			}
		    outFile << " ";
		    }
		else
		    {
		    outFile << setw(20) << left;
		    outFile << perp->Lead;
		    }
		outFile << perp->Support << right << endl;
		}

	    if (name == perp->Lead && name == perp->Support) // checks
		{	 // for duplicate values in the same node.
		actor--;
		}
	    if (name == perp->Genre)
		{
		gen++; // count for times genre was found
		if (name == perp->Alternate)
		    {
		    gen++; // count for times alternate genre was found
		    }
		if (name == perp->Genre && name == perp->Alternate)
		    // count check for same name genre and alternate
		    {
		    gen--;
		    }
		outFile << setw(3) << gen << "     ";
		if (perp->Title.length() > 45) 	// limits length of long titles
		    {
		    for (int x = 0; x < 48; x++)
			{
			outFile << left << perp->Title[x];
			}
		    outFile << " ";
		    }
		else
		    {
		    outFile << setw(49) << left;
		    outFile << perp->Title;
		    }
		outFile << setw(7) << perp->year << setw(5) << perp->rating
			<< setw(5) << left << setw(19) << perp->Genre
			<< setw(17) << perp->Alternate;
		if (perp->Lead.length() > 19) // Shortens lead actor length
		    {
		    for (int x = 0; x < 19; x++)
			{
			outFile << perp->Lead[x];
			}
		    outFile << " ";
		    }
		else
		    {
		    outFile << setw(20) << left;
		    outFile << perp->Lead;
		    }
		outFile << perp->Support << right << endl;
		}

	    perp = perp->next;
	    }
	}

    int comp = 0;
    if (choice == 5)
	{
	cout << "Which year are you looking for?" << endl;
	cin >> comp; // input value for year to avoid string to int comparison.
	do
	    {

	    if ((!cin >> comp))
		{ // checks for valid input
		cout << "**** The number " << comp
			<< " is an invalid entry ****" << endl;
		cout << "**** Please input a number between 1878 and 3000 ****"
			<< endl;

		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Which year are you looking for?" << endl;
		cin >> comp;
		invalid = false;
		}
	    else
		{
		invalid = true;
		}
	    if (comp > 3000 && comp != 0)
		{
		cout << "****The number " << comp << " is  an invalid "
			"entry****" << endl;
		cout << "****Please input a number between 1878 and 3000****" << endl;
		cout << endl << endl << "Which year are you looking for? " << endl;
		cin >> comp; // invalid input recheck
		invalid = false;
		}
	    if (comp < 1879 && comp != 0)
		{
		cout << "****The number " << comp << " is  an invalid "
			"entry****" << endl;
		cout << "****Please input a number between 1878 and 3000****" << endl;
		cout << endl << endl << "Which year are you looking for? " << endl;
		cin >> comp;
		// invalid input recheck
		invalid = false;
		}
	    }
	while (invalid == false);

	cout << endl << endl << "Searching for the year " << comp << endl;
	}

    if (choice == 6)
	{

	cout << "Which rating are you looking for?" << endl; // rating search
	cin >> comp;
	do
	    {
	    if ((!cin >> comp))
		{
		cout << "**** The number " << comp
			<< " is an invalid entry ****" << endl;
		cout << "**** Please input a number between 1 and 9****"
			<< endl;
		// invalid input recheck
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Which rating are you looking for?" << endl;
		cin >> comp;
		invalid = false;
		}
	    else
		{
		invalid = true;
		}
	    if (comp > 9 && comp != 0) // numerical error checking
		{
		cout << "****The number " << comp << " is  an invalid "
			"entry****" << endl;
		cout << "****Please input a number between 1 and 9****" << endl;
		cout << endl << endl << "What rating are you looking for? ";
		cin >> comp;
		invalid = false;
		}
	    if (comp < 0 && comp != 0) // numerical error checking
		{
		cout << "****The number " << comp << " is  an invalid "
			"entry****" << endl;
		cout << "****Please input a number between 1878 and 3000****" << endl;
		cout << endl << endl << "What rating are you looking for? ";
		cin >> comp;
		invalid = false;
		}
	    }
	while (invalid == false);
	// output for rating to OutFile
	cout << endl << endl << "Searching for the rating " << comp << endl;
	}
    outFile << "Search by rating for " << comp << " found:" << endl;

    outFile << "MOVIE # " << "TITLE" << setw(49) << "YEAR " << "RATING "
	    << "GENRE" << setw(23) << "ALT GENRE" << setw(18) << "LEAD ACTOR"
	    << setw(26) << "SUPPORTING ACTOR" << endl;
    outFile << "------- ---------------------------------------"
	    "--------- ---- ------ ----------------- ----------"
	    "------- ------------------- -------------------" << endl;

    while (perp != NULL)
	{
	// search function for integer values of rating and year
	if (comp == perp->rating)		// output for rating
	    {
	    num++;
	    outFile << setw(3) << num << "     " << setw(49) << left
		    << perp->Title << setw(7) << perp->year << setw(5)
		    << perp->rating << setw(5) << left << setw(19)
		    << perp->Genre << setw(17) << perp->Alternate;
	    if (perp->Lead.length() > 19)
		{
		for (int x = 0; x < 19; x++)
		    {
		    outFile << perp->Lead[x];
		    }
		outFile << " ";
		}
	    else
		{
		outFile << setw(20) << left;
		outFile << perp->Lead;
		}
	    outFile << perp->Support << right << endl;
	    }
	if (comp == perp->year) // output for year
	    {
	    num++;
	    outFile << setw(3) << num << "     " << setw(49) << left
		    << perp->Title << setw(7) << perp->year << setw(5)
		    << perp->rating << setw(5) << left << setw(19)
		    << perp->Genre << setw(17) << perp->Alternate;

	    if (perp->Lead.length() > 19) // lead actor length decrease
		{
		for (int x = 0; x < 19; x++)
		    {
		    outFile << perp->Lead[x];
		    }
		outFile << " ";
		}
	    else
		{
		outFile << setw(20) << left;
		outFile << perp->Lead;
		}
	    outFile << perp->Support << right << endl;
	    }

	if (comp == perp->year && comp == perp->rating)
	    {
	    num--;
	    }

	perp = perp->next;
	}
    total = title + actor + gen + num;
    if (comp == 0 && choice == 6) // not found return for rating
	{
	cout << "Your rating was not found" << endl;
	}
    if (comp > 0 && choice == 6) // found return for rating
	{
	cout << "Found " << total << " movies"
		" for the rating " << comp << "!" << endl << endl << endl;
	}

    if (comp == 0 && choice == 5) // not found return for year
	{
	cout << "Your year was not found" << endl;
	}
    if (comp > 0 && choice == 5)	// found return for year
	{
	cout << "Found " << total << " movies"
		" for the year " << comp << "!" << endl << endl << endl;
	}

    outFile << endl << endl;

    return total;
    }

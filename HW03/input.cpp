/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3
 * CLASS      : CS1B
 * SECTION    : M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
//Input Function. Receive information from the struct defined
// and input into the struct. Input inFile & head and tail. Output filled struct
void InputFunction(DVD *&head, DVD *&tail)
    {
    DVD *perp;
    // File Stream declaration
    ifstream inFile;
    string fileName;

    cout << PrintHeader();

    do
	{
	cout << "Enter the file name : ";
	cin >> fileName;

	// Input File Name
	// error checking

	if (fileName != "InputFile.txt")
	    {
	    cout << "File could not be opened." << endl;
	    }
	}
    while (fileName != "InputFile.txt");

    inFile.open(fileName.c_str());

    while (!inFile.eof())
	{
	perp = new DVD;
	perp->next = NULL;
	if (head == NULL)
	    {
	    getline(inFile, perp->Title);
	    getline(inFile, perp->Lead);
	    getline(inFile, perp->Support);
	    getline(inFile, perp->Genre);
	    getline(inFile, perp->Alternate);
	    getline(inFile, perp->year);
	    getline(inFile, perp->rating);
	    getline(inFile, perp->description);
	    inFile.ignore(1000, '\n');
	    head = perp;
	    tail = head;
	    perp = NULL;

	    }
	else
	    {

	    getline(inFile, perp->Title);
	    getline(inFile, perp->Lead);
	    getline(inFile, perp->Support);
	    getline(inFile, perp->Genre);
	    getline(inFile, perp->Alternate);
	    getline(inFile, perp->year);
	    getline(inFile, perp->rating);
	    getline(inFile, perp->description);
	    inFile.ignore(1000, '\n');
	    tail->next = perp;
	    tail = perp;
	    perp = NULL;
	    }
	}
    inFile.close();
    }

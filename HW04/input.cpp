/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
//Input Function. Receive information from the struct defined
// and input into the struct. Input inFile & head and tail. Output filled struct
void InputFunction(DVD *&head, DVD *&tail, ofstream& outFile)
    {
    DVD *perp;
    // File Stream declaration
    ifstream inFile;
    string fileName;
    string fileOut;
    cout << PrintHeader();


	cout << "Which input file would you like to use(type d for default "
		"file)? ";
	cin >> fileName;
	// Input File Name
	// default values
	if (fileName == "D" || fileName == "d")
	    {
		fileName = "InputFile.txt";
	    }
	cout << "Which output file would you like to use(typed d for default "
			"file)? ";
		cin >> fileOut;
	if (fileOut == "D" || fileOut == "d")
		    {
			fileOut = "OutputFile.txt";
		    }

    inFile.open(fileName.c_str());	// inFile  stream open
    outFile.open(fileOut.c_str());	// outFile stream open

    while (!inFile.eof()) //searches until end of file
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
	    inFile >> perp->year;
	    inFile >> perp->rating;
	    inFile.ignore(1000,'\n');
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
	    inFile >> perp->year;
	    inFile >> perp->rating;
	    inFile.ignore(1000,'\n');
	    getline(inFile, perp->description);
	    inFile.ignore(1000, '\n');
	    tail->next = perp;
	    tail = perp;
	    perp = NULL;
	    }
	}
    inFile.close();

    }

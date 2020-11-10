/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Main initializes head and tail to null
// Deals with passing references through for input and output
int main()
    {
    string name;
    int choice;
    int total;
    ofstream fileOut;
    DVD *head = NULL;
    DVD *tail = NULL;
    bool invalid = false;
    PrintHeader();
    InputFunction(head, tail, fileOut); // Input function will retrieve all information
    // from the file using fstream
    fileOut << PrintHeader();

    do
	{
	cout << MENU; // checks for invalid inputs
	if (!(cin >> choice))
	    {
	    cout << "**** The number " << choice << " is an invalid entry ****"
		    << endl;
	    cout << "**** Please input a number between 0 and 6 ****" << endl;
	    cin.clear();
	    cin.ignore(1000, '\n');
	    cout << MENU;
	    cin >> choice;
	    invalid = true;
	    }
	else
	    {
	    invalid = true;
	    }
	if (choice > 7 || choice == 7 || choice < 0) // checks for in range input
	    {
	    cout << "****The number " << choice << " is  an invalid "
		    "entry****" << endl;
	    cout << "****Please input a number between 0 and 6****" << endl
		    << endl;
	    invalid = true;
	    }
	}
    while (choice != 0 && invalid == false);

    while (choice != 0)
	{
	switch (choice)
	    {
	case OUTPUT:
	    cout << endl << "Listing all movies!" << endl << endl << endl;
	    OutputFunction(head, tail, fileOut); // Output function will
	    // retrieve all information from the struct filled by the
	    // Input function and will populate the console along with
	    //a predetermined file name of OutputFile.txt
	    break;
	case TITLE:
	    cin.ignore(1000, '\n');
	    cout << endl << "Which title are you looking for? ";
	    getline(cin, name);
	    cout << endl << endl << "Searching for the title " << name << endl;
	    total = Search(head, tail, name, fileOut, choice);
	    if (total == 0)
		{
		cout << "Sorry, the movie \"" << name << "\" was not found"
			<< endl << endl << endl;
		}
	    if (total > 0)
		{
		cout << "Found the movie " << name << "!" << endl << endl
			<< endl;
		}
	    // function retireves information from struct and fills the output file
	    // searchs for Title matches within the node and output
	    break;
	case GENRE:
	    // function retireves information from struct and fills the output file
	    // searchs for Genre matches within the node and output
	    cin.ignore(1000, '\n');
	    cout << endl << "Which genre are you looking for? ";
	    getline(cin, name);
	    cout << endl << endl << "Searching for the genre " << name << endl;
	    total = Search(head, tail, name, fileOut, choice);
	    if (total == 0)
		{
		cout << "Sorry, no movies for the genre " << name
			<< " was not found" << endl << endl << endl;
		}
	    if (total > 0)
		{
		cout << "Found " << total << " movies"
			" for the genre " << name << "!" << endl << endl
			<< endl;
		}
	    break;
	case ACTOR:
	    // function retireves information from struct and fills the output file
	    // searchs for Actor matches within the node and output
	    cin.ignore(1000, '\n');
	    cout << endl << "Which actor are you looking for? ";
	    getline(cin, name);
	    cout << endl << endl << "Searching for the actor " << name << endl;
	    total = Search(head, tail, name, fileOut, choice);
	    if (total == 0)
		{
		cout << "Sorry, no movies for the actor, " << name
			<< " were found" << endl << endl << endl;
		}
	    if (total > 0)
		{
		cout << "Found " << total << " movies"
			" for the actor " << name << "!" << endl << endl
			<< endl;
		}
	    break;
	case YEAR:
	    // function retireves information from struct and fills the output file
	    // searchs for Year matches within the node and output
	    cin.ignore(1000, '\n');
	    name = "number";
	    total = Search(head, tail, name, fileOut, choice);
	    break;
	case RATING:
	    // function retireves information from struct and fills the output file
	    // searchs for Rating matches within the node and output
	    cin.ignore(1000, '\n');
	    name = "number";
	    total = Search(head, tail, name, fileOut, choice);

	    break;
	case EXIT:
	    break;
	    }
	do
	    {
	    cout << MENU;
	    if (!(cin >> choice))
		{
		cout << "****Please input a NUMBER between 0 and 5****" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cout << MENU;
		cin >> choice;
		invalid = true;
		}
	    else
		{
		invalid = true;
		}

	    if (choice > 7 || choice == 7 || choice < 0)
		{
		cout << "****The number " << choice << " is  an invalid "
			"entry****" << endl;
		cout << "****Please input a number between 0 and 5****" << endl
			<< endl;
		invalid = true;
		}
	    // loop cycle for the menu function to enable multiple usage
	    }
	while (choice != 0 && invalid == false);
	}

    fileOut.close();
    return 0;
    }

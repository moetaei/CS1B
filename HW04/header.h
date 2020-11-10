/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3 - Intro to Linked Lists
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

// Pre Processor Directives
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <ctype.h>
using namespace std;

//DVD Struct
enum LIST
    {
    EXIT,
    OUTPUT,
    TITLE,
    GENRE,
    ACTOR,
    YEAR,
    RATING,
    };
struct DVD
    {
    string Title;
    string Lead;
    string Support;
    string Genre;
    string Alternate;
    int year;
    int rating;
    string description;
    DVD *next;
    };

const string MENU = "DVD MENU OPTIONS\n\n"
	"1 - Output Entire List\n"
	"2 - Title Search\n"
	"3 - Genre Search\n"
	"4 - Actor Search\n"
	"5 - Year Search\n"
	"6 - Rating Search (0-9)\n"
	"0 - EXIT\n"
	"Enter a option (0 to exit): ";

void Menu();
string PrintHeader(); // Print header for OStream and Cout
void InputFunction(DVD *&, DVD *&, ofstream&); // Receive information from the struct defined
// and input into the struct.
void OutputFunction(DVD *, DVD *, ofstream&); // Receives information from the linked list
// Outputs the information sequentially from the struct.
void Wordwrap(string&, string&);   // Receives strings from the struct and when
// exceeding 75 characters it inserts a newline character along with shortening
// exceedingly long title names for DVDS.
int Search(DVD *, DVD *, string, ofstream&, int);// searches through function
// for the corresponding search value into the output file and returns the value
// to the console.

#endif /* HEADER_H_ */

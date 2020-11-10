/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3
 * CLASS      : CS1B
 * SECTION    : M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

// Pre Processor Directives
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

//DVD Struct

struct DVD
    {
    string Title;
    string Lead;
    string Support;
    string Genre;
    string Alternate;
    string year;
    string rating;
    string description;
    DVD *next;
    };

string PrintHeader(); // Print header for OStream and Cout
void InputFunction(DVD *&, DVD *&); // Receive information from the struct defined
// and input into the struct.
void OutputFunction(DVD *, DVD *); // Receives information from the linked list
// Outputs the information sequentially from the struct.
void Wordwrap(string&, string&);   // Receives strings from the struct and when
// exceeding 75 characters it inserts a newline character along with shortening
// exceedingly long title names for DVDS.

#endif /* HEADER_H_ */

/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3
 * CLASS      : CS1B
 * SECTION    : M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Print Header outputs the information of class in either cout or ostream due
// being written as an ostringstream.
string PrintHeader()
    {
    ostringstream str;

    str << left;
    str
	    << "***************************************************************************\n";
    str << "*  PROGRAMMED BY : " << "Mohammed Taei" << endl;
    str << "*  " << setw(14) << "STUDENT ID" << ": 1019392\n";
    str << "*  " << setw(14) << "CLASS" << ": CS1B - M/W 6:30-9:50PM\n";
    str << "* ";

    str << " ASSIGNMENT #3 : Movie List Intro to Linked Lists\n" << setw(9);
    str
	    << "***************************************************************************\n\n";
    str << right;

    return str.str();
    }

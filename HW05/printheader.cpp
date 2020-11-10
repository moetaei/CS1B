/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 5 - Assessing Recursion Performance
 * CLASS      : CS1B M/W: 6:30 to 9:50
 * DUE DATE   : 5/01/18
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

    str << " ASSIGNMENT #5 : Assessing Recursion Performance\n" << setw(9);
    str
	    << "***************************************************************************\n\n";
    str << right;

    return str.str();
    }

/******************************************************************************
 * AUTHOR          : Mohammed Taei  & Utkarsh Karki
 * STUDENT ID      : 1019392 	    & 1088154
 * LAB # 6         : Testing
 * CLASS           : CS1B
 * DUE DATE        : 3/26/18
 *****************************************************************************/
#include "header.h"

string PrintHeader() {
	ostringstream str;

	str << left;
	str
			<< "***************************************************************************\n";
	str << "*  PROGRAMMED BY : " << "Mohammed Taei & Utkarsh Karki" << endl;
	str << "*  " << setw(14) << "STUDENT ID" << ": 1019392 & 1088154\n";
	str << "*  " << setw(14) << "CLASS" << ": CS1B - M/W 6:30-9:50PM\n";
	str << "* ";

	str << " LAB #8        : Intro to Pointers\n" << setw(9);
	str
			<< "***************************************************************************\n\n";
	str << right;

	return str.str();
}

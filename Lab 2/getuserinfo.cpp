/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/

#include "header.h"

/******************************************************************************
 *
 * FUNCTION getuserinfo
 * ____________________________________________________________________________
 * This function will get the users information
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 *     name       : users name
 *     gender     : users gender
 *
 *     POST-CONDITIONS
 *     	  This returns nothing
 ******************************************************************************/

void getuserinfo(string name, char gender)
{
	if (gender == 'm' || 'M') {

		cout << "Try to get 3 heads in a row. Good luck Mr. " << name << "!"
				<< endl << endl;
	} else {
		cout << "Try to get 3 heads in a row. Good luck Ms. " << name << "!"
				<< endl << endl;
	}

}


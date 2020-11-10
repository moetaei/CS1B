/******************************************************************************
 * AUTHOR          : Joji Thomas and Mohammed Taei
 * STUDENT ID      : 1056113 and 1019392
 * LAB # 2 		   : Greatest Common Denominator
 * CLASS           : CS1B
 * SECTION         :
 * DUE DATE        : 11/30/17
 *****************************************************************************/
#include "header.h"
/******************************************************************************
 * Function - PrintHeader
 * ----------------------------------------------------------------------------
 * 	This function outputs class heading.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following needs a defined value passed in
 * 			asName : Assignment Name
 * 			asType : Assignment Type
 * 			asNum  : Assignment Number
 *
 *
 * POST_CONDITIONS
 * 		==> Returns nothing - this function will output the class heading.
 *****************************************************************************/
void PrintHeader (string asName,  //IN. - assignment name - used for output
				  char asType,    //IN. assignment type
				  	  	  	  	  // - (LAB OR ASSIGN) - used for output
				  int asNum,
				  ostringstream streamVar)//IN - assign Number - used for output
{
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << "Joji Thomas and Mohammed Taei" << endl;
	cout << "*  "      << setw(14) << "STUDENT ID"
		 << ": 1056113 and 1019392\n";
	cout << "*  "      << setw(14) << "CLASS"  << ": CS1B - M/W 5PM\n";
	cout << "* ";

	//Processing - this will adjust the setw's and format appropriately
	//			   based on if this is lab 'L' or assignment

	if(toupper(asType) == 'L')
	{
		cout << " LAB #" << setw(9);
	}
	else
	{
		cout << " ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "**************************************************\n\n";
	cout << right;
}

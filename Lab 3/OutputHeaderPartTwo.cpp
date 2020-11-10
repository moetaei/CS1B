/******************************************************************************
 * AUTHOR          : Joji Thomas and Mohammed Taei
 * STUDENT ID      : 1056113 and 1019392
 * LAB # 2 		   : Greatest Common Denominator
 * CLASS           : CS1B
 * DUE DATE        : 2/7/18
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
 * 			names  : the student names
 * 			out    : ostream variable for output to file or console
 *
 *
 * POST_CONDITIONS
 * 		==> Returns nothing - this function will output the class heading.
 *****************************************************************************/
void OstreamPrintHeader (string asName,  //IN. - assignment name - used for output
				  	  	  	  	 char asType,    //IN. assignment type
				  	  	  	  	  	  	  	  	 // - (LAB OR ASSIGN) - used for output
								  int asNum,     //IN - assign Number - used for output
								  string stdntId,//IN - student id
								  string names,  //IN - student name
								  ostream &out)  //IN - the ostream variable
{
	out << left;
	out << "**************************************************\n";
	out << "*  PROGRAMMED BY : "  << "Joji Thomas & Mohammed Taei " << endl;
	out << "*  "      << setw(14) << "STUDENT ID"
		 << ": 1056113 & 1019392\n";
	out << "*  "      << setw(14) << "CLASS"  << ": CS1B - M/W 6:50pm - 9:50\n";
	out << "* ";

	//Processing - this will adjust the setw's and format appropriately
	//			   based on if this is lab 'L' or assignment

	if(toupper(asType) == 'L')
	{
		out << " LAB #" << setw(9);
	}
	else
	{
		out << " ASSIGNMENT #" << setw(2);
	}
	out << asNum << ": " << asName << endl;
	out << "**************************************************\n\n";
	out << right;
}

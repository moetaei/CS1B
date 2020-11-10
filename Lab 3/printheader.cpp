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
 * <nothing>
 *
 *
 * POST_CONDITIONS
 * 		==> Returns nothing - this function will output the class heading.
 *****************************************************************************/
string PrintHeader ()
{
	ostringstream str;

	str << left;
	str << "**************************************************\n";
	str << "*  PROGRAMMED BY : "  << "Joji Thomas and Mohammed Taei" << endl;
	str << "*  "      << setw(14) << "STUDENT ID"
		 << ": 1056113 and 1019392\n";
	str << "*  "      << setw(14) << "CLASS"  << ": CS1B - M/W 6:30-9:50PM\n";
	str << "* ";

		str << " LAB #3        : Function - GCD\n" << setw(9);
	str << "**************************************************\n\n";
	str << right;

	return str.str();
}

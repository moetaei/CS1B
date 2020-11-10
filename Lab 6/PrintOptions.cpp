/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/29/2018
 * ****************************************************************************/
#include "header.h"

/******************************************************************************
 * FUNCTION PrintOptions
 * -----------------------------------------------------------------------------
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for find largest balance,
 *	smallest balance, and person.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			fout		: The output file
 *			fIdsAr		: The id array
 *			fNameAr		: The name array
 *			fBalanceAr	: The balance array
 *			index		: The index of the searched item
 *			fOption		: Option the user enters
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/

void PrintOptions(ofstream  &fout,			// IN/OUT - output file
				  account personInfoAr[],	// IN/CALC	- The balance array
				  int index,				// CALC		- The index of the array
				  int fOption)				// IN		- Users choice of the
											//			  menu
{
	const int IDS_COL	= 9;
	const int NAME_COL	= 25;
	const int BA_COL	= 10;

	if(index > -1)
	{
		switch(fOption)
		{
		case LARGEST: fout << "Largest Balance: " << endl;
					  	  break;

		case SMALLEST:
					  fout << "\nSmallest Balance: " << endl;
					  	  break;
		case FINDPERSON:
						fout << "\nSearch Name: " << endl;
						break;

		}

		  fout << left << setw(IDS_COL) << "ID #";
		  fout << setw(NAME_COL) << "NAME";
		  fout << right << setw(BA_COL) << "BALANCE DUE" << endl;
		  fout << left << setw(IDS_COL) << "----";
		  fout << setw(NAME_COL) << "--------------------";
		  fout << right << setw(BA_COL) << "-----------" << endl;
		  fout << left << setw(IDS_COL) << personInfoAr[index].ids;
		  fout << setw(NAME_COL) << personInfoAr[index].name;
		  fout << '$' << setw(BA_COL) << right << personInfoAr[index].balance
			   << endl;

	}

}

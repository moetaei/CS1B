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
 * FUNCTION SearchName
 * -----------------------------------------------------------------------------
 * 	This function will prompt the user to enter the name of the person they
 * 	 are looking for. The function will search search for the name through the
 * 	 name array.
 * 	 	==> returns the index of the name in the nameAr.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			fOption		: Option the user enters
 *			fNameAr		: The name array
 *			AR_SIZE		: The size of the array
 *			fSearchName : The name being searched
 * POST-CONDITIONS
 * 		==> returns the index of the name in the nameAr.
 ******************************************************************************/

int SearchName(	account personInfoAr[],		// IN - The name array
		 	 	const int AR_SIZE)		// IN - The array size


 {
	bool found;		// CALC		  - whether the name being searched is found
	int index;		// CALC		  - Loop Control variable used to search through
					//				the file
	int result;		// CALC & OUT - The index of the name being searched
	string searchName; // CALC	  - Name being searched

	//intitalization
	result	= -1;
	index	= 0;
	found	= false;

		getline(cin, searchName);

		 while (index < AR_SIZE && !found)
	 {
		 if(personInfoAr[index].name == searchName)
		 {
		 found = true;
		 cout << "Found.\n\n";
		 result = index;
		 } // END IF STATMENT
		 index++;
	 } // END WHILE LOOP

	 if(result == -1)
	 {
		 cout << searchName << " was not found.\n";
	 }//END IF STATMENT

	return result;
 }

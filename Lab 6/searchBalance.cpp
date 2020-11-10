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
 * FUNCTION SearchBalance
 * -----------------------------------------------------------------------------
 * 		This function will search for the largest or smallest balance in the
 * 	array of balances based on the user input. it will then return the index
 * 	of the desired balance of the user.
 * 	 ==> returns the index of the largest or smallest number.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			fOption		: Option the user enters
 *			fBalanceAr	: The balance array
 *			AR_SIZE		: Size of the array
 * POST-CONDITIONS
 * 		==> returns the index of the largest or smallest number
 ******************************************************************************/

int SearchBalance (int fOption,				// IN - Option input of the user
				   account personInfoAr[],	// IN - The balance array read from file
				   const int AR_SIZE)		// IN - The array size
{
	int index;			// CALC 		- The index of the array
	int indexVal;		// CALC & OUT	- The index of the balance wanted
	double largest;		// CALC			- The largest Balance
	double smallest;	// CALC			- The smallest Balance

	//Initializing
	largest	 = 0;
	smallest = personInfoAr[0].balance;

	if( fOption == 1)
	{
		for(index = 0; index <AR_SIZE; index++)
		{

			if (largest < personInfoAr[index].balance)
			{
				largest = personInfoAr[index].balance;
				indexVal = index;
			} //END IF FOR LARGEST BALANCE

		}//END FOR LOOP

	}
	else if(fOption == 2)
	{

			for(index = 0; index < AR_SIZE; index++)
			{
				if(personInfoAr[index].balance < smallest)
				{
					indexVal = index;
				}//END IF
			}//END FOR LOOP FOR SMALLESR

	} //END IF ELSE IF

	return indexVal;
}

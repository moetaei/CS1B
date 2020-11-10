/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/29/2018
 * ****************************************************************************/
#include "header.h"

double SumAndAverage (int fOption,		   // IN - Option input of the user)
					  account personInfoAr[], // IN - The balance array read from
					  	  	  	  	  	   //	   file
					  const int AR_SIZE)   // IN - The array size
{
	double valueRequested;			// CALC - the value that will be returned
									//		  (either sum or avg) based on
									//		   users input

	double sum;						// CALC - The sum of all balances
	double avg;						// CALC - The average of all balances
	int index;						// CALC - The index of the array
	//Initializing variables
	sum = 0;

	for(index = 0; index < AR_SIZE; index++)
	{
		sum += personInfoAr[index].balance;
	}

	avg = sum / double(AR_SIZE);

	if(fOption == 3)
	{
		valueRequested = sum;
	}
	else if (fOption == 4)
	{

		valueRequested = avg;
	}

	return valueRequested;
}

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
 * FUNCTION InputFunctin
 * -----------------------------------------------------------------------------
 * 	This function will receive an input file and read 3 sets of data from
 * the file. It will create three parallel arrays  name, Id and the balance.
 * 	 ==> returns nothing - This will read data from input file.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			ifstream &fin :	the input file
 *			fnameAr		  : the array for names
 *			fidsAr 		  : the array for ids
 *			fbalanceAr	  : the array for balances
 *			AR_SIZE		  : the size of the array
 * POST-CONDITIONS
 * 		==>	Returns nothing - This will read data from input file.
 ******************************************************************************/

void InputFunctin ( string finFileName,	// IN - the name of the file
					account personInfoAr[],
					const int AR_SIZE)  // IN - the size of the array
{

	ifstream fin;
	int index;
	index=0;

	fin.open(finFileName.c_str());

	while ( fin &&  index < AR_SIZE)
		{
			getline(fin, personInfoAr[index].name);
			fin >> personInfoAr[index].ids;
			fin >> personInfoAr[index].balance;
			fin.ignore(1000, '\n');
			index++;
		}//END WHILE

	//closes input file
	fin.close();
}

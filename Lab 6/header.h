/******************************************************************************
 * AUTHOR          : Mohammed Taei  & Negin Mashhadi
 * STUDENT ID      : 1019392 		& 1084104
 * LAB # 6 		   : Structs
 * CLASS           : CS1B
 * DUE DATE        : 3/5/18
 *****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_


#include <iostream>
#include <iomanip>		/**setw**/
#include <string>		/**Strings**/
#include <fstream>		/**fout**/
#include <ostream>		/**cout or fout**/

using namespace std;

//GLOBAL CONSTANTS
const int AR_SIZE_STRING			   = 6;
const string MENU					   = {"\n\nMENU OPTIONS\n\n"
										  "1 – Find the larger balance\n"
										  "2 – Find the smaller balance\n"
										  "3 – Obtain the sum of all balances\n"
										  "4 – Obtain the average of all "
										  "balances\n"
										  "5 – Find person\n"
										  "0 - Exit\n"
										  "Enter an option (0 to exit): "
										  };

const string MENU_LIST[AR_SIZE_STRING] =
										{"\nThank you for using my program.",
										 "\nFinding the larger balance…",
										 "\nFinding the smaller balance…",
										 "\nObtaining the sum of all balances…",
										 "\nObtaining the average of all balances…",
										 "\nWho would you like to search for: "
										};
enum menuOption
{
	EXIT,			//0
	LARGEST,		//1
	SMALLEST,		//2
	SUM,			//3
	AVG,			//4
	FINDPERSON		//5
};

struct account
{
	string name;
	int ids;
	double balance;
};

//PROTOTYPES


/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream  &output,// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output


/******************************************************************************
* InputFunctin
* 	This function will receive an input file and read 3 sets of data from
* the file. It will create three parallel arrays  name, Id and the balance.
* 	* ==> returns nothing - This will read data from input file.
*******************************************************************************/
 void InputFunctin ( string finFileName,	// IN - input file name
		 	 	 	 account personInfoAr[],
					 const int AR_SIZE);	// IN - the size of the array

/******************************************************************************
 * SearchBalance Function
 * 		This function will search for the largest or smallest balance in the
 * 	array of balances based on the user input. it will then return the index
 * 	of the desired balance of the user.
 * 		*==> returns the index of the largest or smallest number
 ******************************************************************************/
 int SearchBalance (int   fOption,		// IN - Option input of the user
		 	 	 	account personInfoAr[],	// IN - The balance array read from file
				    const int AR_SIZE);	// IN - The array size

/*******************************************************************************
 * SumAndAverage Function
 * 		This function will calculate the sum and average of all the balances in
 * 	 balance array based on the option the user chooses
 * 	*==> returns either the sum of all the balances or average
 ******************************************************************************/
 double SumAndAverage (int 	 fOption,	   // IN - Option input of the user
		 	 	 	   account personInfoAr[], // IN - The balance array read from
					  	  	  	  	  	   //	   file
					  const int AR_SIZE);  // IN - The array size

/******************************************************************************
 * 	SearchName
 * 		This function will prompt the user to enter the name of the person they
 * 	 are looking for. The function will search search for the name through the
 * 	 name array.
 * 	 *==> returns the index of the name in the nameAr.
 ******************************************************************************/
 int SearchName( account personInfoAr[],		// IN - The name array
		 	 	 const int AR_SIZE);	// IN - The array size
/*******************************************************************************
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for find largest balance,
 *	smallest balance, and person.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void PrintOptions(ofstream  &fout,		// IN/OUT 	- output file
				  account personInfoAr[],	// IN/CALC	- The balance array
				  int 	 index,			// CALC		- The index of the array
				  int 	 fOption);		// IN		- Users choice of the menu
/*******************************************************************************
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for sum and average.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void PrintSumAndAvg(ofstream  &fout,		// IN/OUT - output file
					double 	  fBalance,		// CALC	  - The sum or average
					const string prompt);	// OUT	  - The prompt for output



#endif /* HEADER_H_ */

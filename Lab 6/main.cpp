/******************************************************************************
 * AUTHOR          : Mohammed Taei & Negin Mashhadi
 * STUDENT ID      : 1019392 & 1084104
 * LAB # 6 		   : Structs
 * CLASS           : CS1B
 * DUE DATE        : 3/5/18
 *****************************************************************************/
#include "header.h"
/******************************************************************************
 * structs
 * -----------------------------------------------------------------------------

 */
int main ()
{
/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 * AR_SIZE 			 : The size of the array
 * COL_SIZE_PROMPT	 : The column size for the prompt
 *******************************************************************************/
	const int PROMPT_COL_SIZE	= 40;
	const int AR_SIZE			= 10;


	const string SUM_PROMPT = "\nSum of balance for all persons: \n";
	const string AVG_PROMPT = "Average of balance for all persons: \n";

	//VARIABLE DECLARATION
	account personsInfoAr[AR_SIZE];

	ifstream inFile;
	ofstream oFile;

	string nameAr[AR_SIZE];			// IN 	- Name array
	int idsAr[AR_SIZE];				// IN 	- ids array
	double balanceAr[AR_SIZE];		// IN 	- balances array

	string inFileName;				// IN 	- Input file name entered by user
	string outFileName;				// IN 	- Output file name entered by user
	int option;						// IN 	- User input based on what they want
									//		from the menu
	int balanceValueLargest;		// CALC - The index of the largest balance
	int balanceValueSmallest;		// CALC - The index of the smallest balance
	double sum;						// CALC	- Holds the sum of balances
	double avg;						// CALC	- Holds the avg of balance
	string searchName;				// IN	- The name being searched
	int searchPerson ;				// CALC - Holds the index for name searched
	bool valid;						// CALC - Checks for valid inputs
	menuOption optionMenu;			// CALC - The enum of the option user enters



	/*INTIALIZINH*/
	balanceValueLargest		=	-1;
	balanceValueSmallest	=	-1;

	/**************************************************************************
	* INPUT - The name of the input file and output file
	**************************************************************************/
	PrintHeader( cout, "Functions and Arrays", 'A' , 1);
	cout << left << setw(PROMPT_COL_SIZE)
		 << "What input file would you like to use? ";
			getline(cin, inFileName);

	cout << "What output file would you like to use? ";
			getline(cin, outFileName);

	/**************************************************************************
	* PROCESSING - performing a certain task based on user input
	**************************************************************************/
	oFile.open(outFileName);
	PrintHeader( oFile, "Functions and Arrays", 'A' , 1);


	InputFunctin(inFileName,personsInfoAr , AR_SIZE);


	do{
		cout << MENU;
		cin	 >> option;
		cin.ignore(1000, '\n');

		valid = (option == 0)||
				(option == 1)||
				(option == 2)||
				(option == 3)||
				(option == 4)||
				(option == 5);


		if (valid)
		{
			optionMenu = menuOption(option);
			cout << MENU_LIST[optionMenu];
		}
		cout << endl;


		switch(option)
		{
			case LARGEST :
					balanceValueLargest = SearchBalance(option, personsInfoAr,
														AR_SIZE);
					PrintOptions(oFile, personsInfoAr, searchPerson, option);
				break;

			case SMALLEST:
					balanceValueSmallest =
									SearchBalance(option, personsInfoAr, AR_SIZE);

					PrintOptions(oFile, personsInfoAr, searchPerson, option);
					break;
			case SUM:
					sum =  SumAndAverage(option, personsInfoAr, AR_SIZE);
					PrintSumAndAvg(oFile, sum, SUM_PROMPT);
					break;
			case AVG:
					avg =  SumAndAverage(option, personsInfoAr, AR_SIZE);
					PrintSumAndAvg(oFile, avg, AVG_PROMPT);
					break;
			case FINDPERSON:
					searchPerson = SearchName(personsInfoAr, AR_SIZE);
					PrintOptions(oFile, personsInfoAr, searchPerson, option);
					break;
		}

		if(!valid)
		{
			cout << MENU_LIST[EXIT];
		}

	}while(valid && option != 0);

	oFile.close();



	return 0;
}

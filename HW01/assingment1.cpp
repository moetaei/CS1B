/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 1
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 ****************************************************************************/
/***************************************************************************
 * This program will take input from a file and will display a menu that
 * will allow you to choose from specific options in terms of largest,
 * smallest, sum, average, and string name search. It does this via fstream
 * (c-string file name). Inputs it into 3 separate arrays labeled accordingly
 * in the data table. Upon input and menu selection the code will output into
 *  a .TXT file. All are handled by functions that are divvied out accordingly.
 *
 *  INPUT :
 *  FILE IO
 *  MENU CHOICE to select takes
 *
 *  OUTPUT:
 *  FILE IO
 *
 ***************************************************************************/
#include "header.h"

int main() {
	// File Stream declaration
	ifstream inFile;
	string fileName;

	// Name Declaration
	ofstream outFile;
	string fileOut;

	string nameAr[10]; 		// Name Array
	float balarr[10];  		// Balance Array
	int accarr[10];    		// Account ID Array
	int index = 0;	   		// Index counter
	int result = 0;    		// Return Value for functions
	float sum = 0;     		// Return Value for Sum
	float average = 0; 		// Return Value for Average
	string namesearch; 		// String for namesearch variable
	int choice;        		// Menu Choice Variable

	cout << left;
	do {
		cout << setw(29) << "Enter the file name : ";
		cin >> fileName;

		// Input File Name
		//error checking

		if (fileName != "InFile.txt") {
			cout << "File could not be opened." << endl;
		}
	} while (fileName != "InFile.txt");

	do {

		cout << setw(29) << "Enter the output file name : ";
		cin >> fileOut;
		// Output File Name Input
		//error checking
		if (fileOut != "OFile.txt") {
			cout << "File could not be opened" << endl;
		}
	} while (fileOut != "OFile.txt");

	 //assigned file to c string to out and infile.

	outFile.open(fileOut.c_str());
	inFile.open(fileName.c_str());

	// constant string menu

	const string MENU = "MENU OPTIONS\n\n"
			"1 - Find the larger balance\n"
			"2 - Find the smaller balance\n"
			"3 - Obtain the sum of all balances\n"
			"4 - Obtain the average of all balances\n"
			"5 - Find person\n"
			"0 - Exit\n"
			"Enter an option (0 to exit): ";

	//read in from cin
	while (!inFile.eof()) {
		getline(inFile, nameAr[index]);
		inFile >> accarr[index];
		inFile >> balarr[index];
		inFile.ignore(100, '\n');

		index++;
	}
	do {
		cout << MENU;
		cin >> choice;
		cin.ignore(1000, '\n');

		// enum menu with functions

		switch (choice) {
		case large_balance:
			result = balance(balarr, choice);
			break;
		case smaller_balance:
			result = balance(balarr, choice);
			break;
		case add_balance:
			sum = sumavgfunction(balarr, choice);
			break;
		case average_balance:
			average = sumavgfunction(balarr, choice);
			break;
		case find_person:
			result = namefind(nameAr);
			break;
		case thanks:
			cout << "Thank you for using my program" << endl;
			choice = 0;
			break;
		}

		// write to file function
		if(result != -1)
		{
			writeIntoFile(result, choice, sum, average, nameAr, balarr, accarr,
				outFile);
		}

	} while (choice != 0);
	//inFile and outFile close
	inFile.close();
	outFile.close();

	return 0;
}

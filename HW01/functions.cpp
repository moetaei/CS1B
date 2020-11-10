/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 1
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 ****************************************************************************/
#include"header.h"

/*This function searches for the balance either largest or smallest depending
 * on user choice. The input is from menu (int choice) and the inFile stream.*/

int balance(float balarr[], int choice) {
	int IndexVal = 0;

	if (choice == 1) {
		int index = 0; /*index search counter*/
		int large = 0; /*standard number/comparison number*/

		for (index = 0; index < 10; index++) {
			if (balarr[index] > large) {
				large = balarr[index];
				IndexVal = index;
			}

		}

	} else {
		float small = balarr[1]; /*sets smallest amount as first amount
		 instead of zero to avoid errors*/
		int index = 0; /*index counter*/

		for (index = 0; index < 10; index++) {
			if (balarr[index] < small) {
				small = balarr[index];
				IndexVal = index;
			}

		}
	}
	return IndexVal;
}

float sumavgfunction(float balarr[], int choice) {
	/* function takes in input from menu (int choice). Adds each array value
	 * from Balance Array (balarr) using the index counter and returns value.
	 * If input choice designates average the value will be divided by
	 *  the total number of entries and return the average value.*/
	float sum = 0;
	int index = 0;

	for (index = 0; index < 10; index++) {
		sum += balarr[index];
	}

	if (choice == 4) {
		sum = sum / 10;
	} else
		;
	return sum;
}

int namefind(string arr[]) {
	string searchname; /*input for string name to enable ability to search*/
	int nameIndex = -1; /* index search counter to go through entries.*/
	bool found = 0; /* boolean value to return if name was found or not.*/

	cout << "Who do you want to search for (enter done to exit): ";
	getline(cin, searchname);

	for (int index = 0; index < 10; index++) {
		if (searchname == arr[index]) {
			found = 1;
			nameIndex = index;

		}
	}
	if (found) {
		cout << "Found." << endl;

	}
	if (found == 0 && searchname != "done") {
		cout << searchname << " was not found." << endl;
	}

	return nameIndex;
}

void writeIntoFile(int result, int choice, float sum, float average,
		string nameAr[], float balarr[], int accarr[], ofstream& outFile) {
	/* function takes input from various sections needed to output the
	 * necessary values to the output file*/

	if (choice == 1) {
		outFile << "Larger Balance:" << endl;
		outFile << "ID#" << setw(10) << right << "NAME" << setw(32)
				<< "BALANCE DUE" << endl;
		outFile << "----" << setw(25) << right << "--------------------"
				<< setw(16) << "-----------" << endl;
		outFile << left << setw(9) << accarr[result] << setw(25)
				<< nameAr[result] << setw(1) << setprecision(2) << fixed << left
				<< "$" << right << setw(10) << balarr[result] << endl << endl;

	}

	if (choice == 2) {
		outFile << "Smaller Balance:" << endl;
		outFile << "ID#" << setw(10) << right << "NAME" << setw(32)
				<< "BALANCE DUE" << endl;
		outFile << "----" << setw(25) << right << "--------------------"
				<< setw(16) << "-----------" << endl;
		outFile << left << setw(9) << accarr[result] << setw(25)
				<< nameAr[result] << setw(1) << setprecision(2) << fixed << left
				<< "$" << right << setw(10) << balarr[result] << endl << endl;

	}

	if (choice == 3) {
		outFile << "Sum of All Balances" << endl;
		outFile << "$" << right << setw(10) << setprecision(2) << fixed << sum
				<< endl << endl;

	}

	if (choice == 4) {
		outFile << "Average of All Balances" << endl;
		outFile << "$" << right << setw(10) << setprecision(2) << fixed
				<< average << endl << endl;

	}

	if (choice == 5) {
		outFile << "Search Name:" << endl;
		outFile << "ID#" << setw(10) << right << "NAME" << setw(32)
				<< "BALANCE DUE" << endl;
		outFile << "----" << setw(25) << right << "--------------------"
				<< setw(16) << "-----------" << endl;
		outFile << left << setw(9) << accarr[result] << setw(25)
				<< nameAr[result] << setw(1) << setprecision(2) << fixed
				<< "$" << right << setw(10) << balarr[result] << endl << endl;

	}
}


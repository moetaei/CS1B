/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/
#include "header.h"

bool coinflip(int &hCounter, int tCounter, float &totalFlip) {
	hCounter = 0; // heads counter
	tCounter = 0;  // tails counter
	int flip = 0;  // random number generator
	if (hCounter != 3) {
		cout << "Press <enter> to flip";  //enter newline
		cin.ignore(100, '\n');
	}
	while (hCounter < 3) {
		flip = rand() % 2;
		if (flip == 1) {
			cout << "HEADS" << endl;
			hCounter++;
		}
		if (flip == 0) {
			cout << "TAILS" << endl;
			tCounter++;
		}
		if (hCounter != 3) {
			cout << "Press <enter> to flip";
			cin.ignore(100, '\n');
		}
	}
	cout << endl;
	totalFlip = tCounter + hCounter;
	return flip;
}

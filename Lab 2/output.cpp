/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/
#include "header.h"
void outPut(float totalFlip, int hCounter, float average) {
// Outputs total amount of flips from previous function. Takes total flips along with head counter and the average
// total.

	cout << "It took you " << totalFlip << " tosses to get " << hCounter
			<< " heads in a row" << endl;
	cout << setprecision(0) << fixed;
	cout << "On average you flipped heads " << average << "% of the time."
			<< endl;
}

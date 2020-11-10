/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/
#include "header.h"

float CalcAverageHeads(float totalFlip, int hCounter) {
	// takes totalflip and hcounter. calculates the average
	float average;
	average = hCounter / float(totalFlip) * 100;
	return average;
}


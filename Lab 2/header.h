/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void getuserinfo(string name, char gender); 				// gets user input from
bool coinflip(int &hCounter, int tCounter, float &totalFlip); // user input new line to flip a coin
float CalcAverageHeads(float totalFlip, int hCounter);		// calculate amount of times heads were flipped
void outPut(float totalFlip, int hCounter, float average);  // outputs the amount of flips to screen IO

#endif /* HEADER_H_ */

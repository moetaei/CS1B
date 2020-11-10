/***************************************************************************
 * AUTHOR : Mohammed Taei & Manny Lopez
 * STUDENT ID : 1019392 & 1074327
 * Assignment : CS1B Lab 2
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 **************************************************************************/

#include "header.h"

int main() {
	srand(time(NULL));			//Random Number Generator
	const int PROMPT_COL = 27;  //Constant for width
	char gender;				//Gender Variable
	string name;				//Name input string
	int hCounter = 0;				//Heads counter
	int tCounter = 0;				//Tails counter
	float totalFlip = 0;			//Total Flip Counter
	float average=0;				//Average calculated

	//menu input before function
	cout << "Welcome to coin toss! Get 3 heads in a row to win!" << endl
			<< endl;
	cout << left;
	cout << setw(PROMPT_COL) << "What is your name? ";
	getline(cin, name);

	cout << setw(PROMPT_COL) << "What is your gender(m/f): ";
	cin.get(gender);
	cin.ignore(1000, '\n');
	cout << endl;

	cout << right;

	getuserinfo(name, gender);
	// coin flip function
	coinflip(hCounter, tCounter, totalFlip);
	// average function calculator
	average = CalcAverageHeads(totalFlip, hCounter);
	// outputs coin flip calculations
	outPut(totalFlip, hCounter, average);

	return 0;
}


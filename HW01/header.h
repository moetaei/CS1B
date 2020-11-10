/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Assignment 1
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 1/31/18
 ****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

//** ENUM Menu

enum menu {
	exitfile,
	large_balance,
	smaller_balance,
	add_balance,
	average_balance,
	find_person,
	thanks,
};

int balance(float balarr[], int choice); /* function for largest and smallest
balance */
float sumavgfunction(float balar[], int choice); /* function for adding all
values and averaging*/
int namefind(string arr[]); /* function for finding name */
void writeIntoFile(int result, int choice, float sum, float average,
		string nameAr[], float balarr[], int accarr[], ofstream& outFile);
/* function for outputting to text file*/

#endif /* HEADER_H_ */

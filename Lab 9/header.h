/****************************************************************************
 * AUTHOR : Mohammed Taei and Korey Luu
 * STUDENT ID : 1019392   and 388913
 * Assignment :
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 4/2/18
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
	EXIT,
	PUSH,
	POP,
	ISEMPTY,
	PEEK,
	SIZE,
};
// Struct person
struct person {
    string name;
    char gender;
    int age;
    person *next;
};

/******************************************************************************
 * FUNCTION Push

 * -----------------------------------------------------------------------------
 * 	Push
 *		This function Will Add a person to the stack and push the
 *		previous person entered towards the bottom of the stack.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void Push(person *&head);

/******************************************************************************
 * FUNCTION Pop
 * -----------------------------------------------------------------------------
 * 	Pop
 *		This function Will remove the person at the top of the stack.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void Pop(person *&head);

/******************************************************************************
 * FUNCTION IsEmpty
 * -----------------------------------------------------------------------------
 * 	IsEmpty
 *		This function Will display whether the stack is empty or not.
 *			==> returns nothing - This will output the results.
 *
 ******************************************************************************/
void IsEmpty(person *&head);

/******************************************************************************
 * FUNCTION Peek
 * -----------------------------------------------------------------------------
 * 	Peek
 *		This function Will display the person at the top of the stack.
 *			==> returns nothing - This will output the results.

 ******************************************************************************/
void Peek(person *&head);

/******************************************************************************
 * FUNCTION Size
 * -----------------------------------------------------------------------------
 * 	Size
 *		This function Will keep track of the number in the stack, and
 *		display that no one is in the stack once empty.
 *
 *			==> .returns nothing - This will output the results.
 ******************************************************************************/
void Size(person *&head);
#endif /* HEADER_H_ */

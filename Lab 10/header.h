/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
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
	CLEAR,
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
 *		This function Will Add a person to the queue and push the
 *		previous person entered towards the bottom of the queue.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void Push(person *&head, person *&tail);

/******************************************************************************
 * FUNCTION Pop
 * -----------------------------------------------------------------------------
 * 	Pop
 *		This function Will remove the person at the top of the queue.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void Pop(person *&head, person *&tail);

/******************************************************************************
 * FUNCTION IsEmpty
 * -----------------------------------------------------------------------------
 * 	IsEmpty
 *		This function Will display whether the queue is empty or not.
 *			==> returns nothing - This will output the results.
 *
 ******************************************************************************/
void IsEmpty(person *&head, person *&tail);

/******************************************************************************
 * FUNCTION Peek
 * -----------------------------------------------------------------------------
 * 	Peek
 *		This function Will display the person at the top of the queue.
 *			==> returns nothing - This will output the results.
 *
 ******************************************************************************/
void Peek(person *&head, person *&tail);

/******************************************************************************
 * FUNCTION Size
 * -----------------------------------------------------------------------------
 * 	Size
 *		This function Will keep track of the number in the queue, and
 *		display that no one is in the queue once empty.
 *
 *			==> .returns nothing - This will output the results.
 ******************************************************************************/
void Size(person *&head, person *&tail);

/******************************************************************************
 * FUNCTION Empty
 * -----------------------------------------------------------------------------
 * 	Empty
 *		This function Will empty the queue, and
 *		display that no one is in the queue once empty.
 *
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void EMPTY (person *&head, person *&tail);
#endif /* HEADER_H_ */

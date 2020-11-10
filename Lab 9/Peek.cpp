/****************************************************************************
 * AUTHOR : Mohammed Taei and Korey Luu
 * STUDENT ID : 1019392   and 388913
 * Assignment :
 * CLASS : CS1B
 * SECTION : MW: 6:30p to 9:50p
 * DUE DATE : 4/2/18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION Peek
 * -----------------------------------------------------------------------------
 * 	Peek
 *		This function Will display the person at the top of the stack.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void Peek(person *&head)
    {
    if (head == NULL)
	{
	cout << "There is nobody to peek at." << endl;
	}
    else
	{
	cout << "Peeking at" << endl;
	cout << "NAME: " << head->name << endl;
	cout << "GENDER: " << head->gender << endl;
	cout << "AGE: " << head->age << endl;
	}
    }

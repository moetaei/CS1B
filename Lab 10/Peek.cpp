/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
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
void Peek(person *&head, person *&tail)
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

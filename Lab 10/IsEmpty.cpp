/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION IsEmpty
 * -----------------------------------------------------------------------------
 * 	PrintOptions
 *		This function Will display whether the stack is empty or not.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void IsEmpty(person *&head, person *&tail)
    {
    if (head == NULL)
	{
	cout << "The queue is empty." << endl;
	}
    else
	{
	cout << "The queue is not empty" << endl;
	}
    }

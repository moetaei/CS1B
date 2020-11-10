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
void IsEmpty(person *&head)
    {
    if (head == NULL)
	{
	cout << "The stack is empty." << endl;
	}
    else
	{
	cout << "The stack is not empty" << endl;
	}
    }

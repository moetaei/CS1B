/****************************************************************************
 * AUTHOR : Mohammed Taei and Korey Luu
 * STUDENT ID : 1019392   and 388913
 * Assignment :
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 4/2/18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION Pop
 * -----------------------------------------------------------------------------
 * 	Pop
 *		This function Will remove the person at the top of the stack.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void Pop (person *&head)
    {
    person *perp;

    cout << endl << "POPPING\n";
    cout << setw(8) << left << "NAME: " << head -> name << endl;
    cout << setw(8) << "GENDER: " << head -> gender << endl;
    cout << setw(8) << "AGE: " << head -> age << endl;
    if(head == NULL)
   	{
   	cout << "The stack is empty!" << endl;
   	}
    if (head != NULL)
	{
	perp = head;
	head = perp ->next;
	delete perp;
	perp = NULL;
	}
    }



/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
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
void Pop (person *&head, person *&tail)
    {
    person *perp;

    cout << endl << "DEQUEUING\n";
    cout << setw(8) << left << "NAME: " << head -> name << endl;
    cout << setw(8) << "GENDER: " << head -> gender << endl;
    cout << setw(8) << "AGE: " << head -> age << endl;

    if (head != NULL)
	{
	perp = head;
	head = perp->next;
	delete perp;
	}


    }



/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION Empty
 * -----------------------------------------------------------------------------
 * 	Empty
 *		This function will remove all person in the queue.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void EMPTY (person *&head, person *&tail)
    {
    person *perp;
	cout << "Clearing" << endl;
	while (perp != NULL)
	{
	perp = head;
	head = perp->next;
	cout << perp->name << endl;
	if( perp-> next == NULL)
	    {
	    break;
	    }
	delete perp;
	}
	cout << "The queue has been CLEARED!"<< endl;
    }



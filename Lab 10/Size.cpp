/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION Size
 * -----------------------------------------------------------------------------
 * 	Size
 *		This function Will keep track of the number in the stack, and
 *		display that no one is in the stack once empty.
 *
 *			==> .returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 *
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void Size(person *&head, person *&tail)
    {
    person *perp;
    perp = head;
    int count = 0;
    while (perp != NULL)
   	    	    {
		    count++;
		    perp = perp ->next;
   	    	    }
    if(count == 0)
	{
	cout << "Nobody is in the queue!" << endl;
	}
    if(count == 1)
	{
	cout << "There is one person in the queue." << endl;
	}
    else
    {
	cout << "There are " << count << " people on the queue." << endl;
    }

    }

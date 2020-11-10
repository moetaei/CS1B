/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB	      : 10 - Implementing A Queue
 * CLASS      : CS1B (M/W: 6:30p to 9:50p)
 * DUE DATE   : 04/09/ 18
 ****************************************************************************/

#include"header.h"
/******************************************************************************
 * FUNCTION Push

 * -----------------------------------------------------------------------------
 * 	Push
 *		This function Will Add a person to the stack and push the
 *		previous person entered towards the bottom of the stack.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			head - the head of the linked list.
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/
void Push(person *&head, person *&tail)
    {

    person *perp;
    perp = new person;
	    cin.ignore(1000, '\n');

	    cout << endl << setw(14) << left << "Enter Name: ";
    	    getline(cin, perp->name);
    	    cout << setw(14) << "Enter Gender: ";
    	    cin.get(perp->gender);
    	    cin.ignore(1000,'\n');
    	    cout << setw(14) << "Enter Age: ";
    	    cin >> perp->age;

    	if( head == NULL)
    	    {
    	    head = perp;
    	    tail = perp;
    	    perp->next = NULL;
    	    }
    	else if( head == tail)
    	    {
    	    tail = perp;
    	    head-> next = perp;
    	    perp-> next = NULL;
    	    }
    	else if (head != tail)
    	    {
    	    tail-> next = perp;
    	    tail = perp;
    	    perp-> next = NULL;
    	    }
    	    }

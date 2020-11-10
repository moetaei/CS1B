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
void Push(person *&head)
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
    	    perp->next = head;
    	    head=perp;

    }

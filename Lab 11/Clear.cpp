/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

void Clear(ListNode *&head,	// head of linked list
	ListNode *&tail,	// tail of the linked list
	PersonInfo *data)	// the data in the linked list
    {
    ListNode *temp;    // temp pointer

    if (head == NULL)
	{
	cout << "The list has been cleared!\n\n";
	}
    else
	{
	cout << "CLEARING LIST\n";
	while (head != NULL)
	    {
	    temp = head;
	    head = head->next;
	    cout << "Removing " << temp->data->name << "!" << endl;
	    delete temp; // deletes node;
	    }
	head = NULL;
	tail = NULL;
	cout << "\nThe list has been cleared!\n\n";
	}
    }

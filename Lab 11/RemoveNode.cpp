/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

void RemoveNode(ListNode *&head,	// head of linked list
	ListNode *&tail,		// tail of linked list
	string name,	    		// the name being searched
	bool &found)			// checks if item is in the list
    {
    ListNode *searchPtr;		// pointer for the searching
    searchPtr = head;
    found = false;

    if (head == NULL)
	{
	cout << "\nCan't remove from an empty list!\n";
	}
    else
	{
	searchPtr = head;
	while (searchPtr != NULL && !found)
	    {
	    if (searchPtr->data->name == name)
		{
		found = true;
		}
	    else
		{
		searchPtr = searchPtr->next;
		}
	    }
	if (searchPtr != NULL)
	    {
	    if (searchPtr == head)
		{
		if (searchPtr == tail)
		    {
		    delete head;
		    delete tail;
		    head = NULL;
		    tail = NULL;
		    }
		else
		    {
		    searchPtr = head->next;
		    searchPtr->previous = NULL;
		    delete head;
		    head = searchPtr;
		    }
		}
	    else if (searchPtr == tail)
		{
		searchPtr = tail->previous;
		searchPtr->next = NULL;
		delete tail;
		tail = searchPtr;
		}
	    else
		{
		searchPtr->previous->next = searchPtr->next;
		searchPtr->next->previous = searchPtr->previous;
		delete searchPtr;
		}
	    }
	}

    }

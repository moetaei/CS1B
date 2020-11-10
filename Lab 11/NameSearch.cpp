/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

ListNode *NameSearch(ListNode *&head, // head of linked list
	string name,   // search string name
	bool &found)   // checks if item is in the list
    {
    ListNode *ptr;

    ptr = head;
    found = false;

    while (ptr != NULL && !found) // searches for name using bool value LCV
	{

	if (ptr->data->name == name)
	    {
	    found = true;
	    }
	else
	    {
	    ptr = ptr->next;
	    }
	}

    return ptr;
    }

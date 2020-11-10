/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

bool IsEmpty(ListNode *head)
    {
    bool empty; // checks for bool value return for ISEMPTY

    if (head == NULL)
	{
	empty = true;

	}
    else
	{
	empty = false;
	}

    return empty;
    }

/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"
void AddNode(ListNode   *&head, // head of linked list
		     ListNode   *&tail, // tail of linked list
	         PersonInfo *data)  // data of linked list
{
	ListNode *ptr;
	ListNode *temp;


	if(data != NULL)
	{
		ptr =  new ListNode;
		ptr -> data = data;

		if(head == NULL) // If node is empty;
		{
			ptr -> next     = NULL;
			ptr -> previous = NULL;
			head = ptr;
			tail = ptr;
		}
		else
		{
			temp = head;
			while(temp != NULL && temp -> data -> name < data -> name)
			{
				temp = temp -> next;
			}

			if(temp == NULL)
			{
				ptr ->  previous = tail;
				ptr ->  next     = NULL;
				tail -> next     = ptr;
				tail =  ptr;
			}
			else if(temp == head)
			{
				head -> previous = ptr;
				ptr  -> next     = head;
				head =  ptr;
			}
			else
			{
				temp -> previous -> next = ptr;
				ptr ->  next     = temp;
				ptr ->  previous = temp -> previous;
				temp -> previous = ptr;
			}

		}
	}
}

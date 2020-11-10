/****************************************************************************
 * AUTHOR     : Mohammed Taei and Korey Luu
 * STUDENT ID : 1019392   and 388913
 * LAB        : 9 - Implementing a Stack
 * CLASS      : CS1B
 * SECTION    : MW: 6:30p ‐ 9:50p
 * DUE DATE   : 4/2/18
 ****************************************************************************/
#include"header.h"

int main()
    {
/******************************************************************************
 * Implementing a Stack
 * -----------------------------------------------------------------------------
 * This program will create a stacked list and also add
 * functionality to it. Push will add a person, Pop will remove a person, Peek
 * will look at the top of the list, Size will tell you how many are in the list
 * and IsEmpty will tell you if the list is empty or not.
 * -----------------------------------------------------------------------------
 * Input:
 *      choice  : the menu option the user chooses
 *
 * Output:
 *
 *STACK MENU
 * 1 - Add a person (PUSH)
 * 2 - Remove a person (POP)
 * 3 - Is the stack empty? (ISEMPTY)
 * 4 - Who is on top? (PEEK)
 * 5 - How many people are there? (SIZE)
 * 0 - To Exit
 * Enter a command?
 ******************************************************************************/

    int choice;          // IN   - Users menu input
    person *head = NULL; // CALC - the head of the stacked list
    bool invalid= false; // CALC - the bool that exits the do while

/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 * MENU      : the menu for the switch statement
 *******************************************************************************/

    const string MENU = "\nSTACK MENU\n\n"
    			"1 - Add a person (PUSH)\n"
    			"2 - Remove a person (POP)\n"
    			"3 - Is the stack empty? (ISEMPTY)\n"
    			"4 - Who is on top? (PEEK)\n"
    			"5 - How many people are there? (SIZE) \n"
    			"0 - To Exit\n"
    			"Enter a command? ";
    	do {
		cout << MENU;
		if (!(cin >> choice))
		    {
		    cout << "****Please input a NUMBER between 0 and 5****"
			    << endl;
		    cin.clear();
		    cin.ignore(1000,'\n');
		    cout << MENU;
		    cin  >> choice;
		    invalid= true;
			}
		else
		{
		    invalid = true;
		}

		if(choice > 5 || choice < 0)
		    {
		    cout << "****The number " << choice << " is  an invalid "
			 "entry****" << endl;
		    cout << "****Please input a number between 0 and 5****"
			 << endl;
		    invalid = true;
		    }

            }while(choice != 0 && invalid == false); // end - do
//		 enum menu with functions
 while(choice != 0)
     {
		switch(choice)
		{
		case PUSH:

		    Push(head);
			break;
		case POP:
		    if(head==NULL)
		   			{
		   			cout << "The stack is empty" << endl;
		   			break;
		   			}
		    Pop (head);
			break;
		case ISEMPTY:
		    IsEmpty(head);
			break;
		case PEEK:
		    Peek(head);
			break;
		case SIZE:
		    Size(head);
			break;
		case EXIT:
			cout << "Thank you for using my program" << endl;
			choice = 0;
			break;
		}

	    do {
		cout << MENU;
		if (!(cin >> choice))
		    {
		    cout << "****Please input a NUMBER between 0 and 5****"
			    << endl;
		    cin.clear();
		    cin.ignore(1000,'\n');
		    cout << MENU;
		    cin >> choice;
		    invalid= true;
			}
		else
		    {
		    invalid = true;
		    }

		if(choice > 6 || choice < 0)
		    {
		    cout << "****The number " << choice << " is  an invalid "
			 "entry****" << endl;
		    cout << "****Please input a number between 0 and 5****"
			 << endl;
		    invalid = true;
		    }

	}while(choice != 0 && invalid == false); // end - do
     }// end - while(choice != 0)

		return 0;
}

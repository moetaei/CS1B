/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

int main()
    {

    const int PROMPT_COL = 8;
    ifstream InFile;		// filestream variable input
    StackMenu menuChoiceEnum;  // menu choice enum
    ListNode *head;           //  head of linked list
    ListNode *tail;           //  tail of linked list
    ListNode *ptr;
    PersonInfo *person;
    string name;		// search string name
    bool empty;			// bool value for IS EMPTY
    bool found;

    cout << PrintHeader();

    head = NULL;
    tail = NULL;
    person = NULL;

    menuChoiceEnum = Menu();

    while (menuChoiceEnum != EXIT)
	{
	switch (menuChoiceEnum)
	    {
	case EXIT:
	    break;
	case CREATE:
	    InFile.open("InFile.txt");
	    while (InFile)
		{
		person = GetInfo(InFile);
		if (person != NULL)
		    {
		    cout << "Adding : ";
		    cout << person->name << endl;
		    }

		AddNode(head, tail, person);

		}
	    cout << endl;

	    InFile.close();
	    break;
	case DISPLAY:
	    DisplayList(head);
	    break;
	case ISEMPTY:
	    empty = IsEmpty(head);
	    if (!empty)
		{
		cout << "No, the list is NOT empty.\n\n";
		}
	    else
		{
		cout << "Yes, the list is empty.\n\n";
		}
	    break;
	case SEARCH:
	    if (head == NULL)
		{
		cout << "\nCan't search from an empty list\n\n\n";
		}
	    else
		{
		cout << "Who would you like to search for? ";
		getline(cin, name);
		cout << endl;
		cout << "Searching for " << name << "...";
		cout << endl << endl;

		ptr = NameSearch(head, name, found);

		if (found)
		    {
		    cout << left;
		    cout << setw(PROMPT_COL) << "Name: " << ptr->data->name;
		    cout << endl;
		    cout << setw(PROMPT_COL) << "Gender: " << ptr->data->gender;
		    cout << endl;
		    cout << setw(PROMPT_COL) << "Age: " << ptr->data->age;
		    cout << endl << endl;
		    }
		else
		    {
		    cout << "I'm sorry, \"" << name << "\" was NOT found!";
		    cout << endl << endl;
		    }
		}
	    break;
	case REMOVE:
	    if (head == NULL)
		{
		cout << "Can't remove from an empty list\n\n";
		}
	    else
		{
		cout << "Who would you like to remove? ";
		getline(cin, name);
		cout << endl;
		cout << "Searching for " << name << "...";
		cout << endl;

		RemoveNode(head, tail, name, found);

		if (found)
		    {
		    cout << "Removing " << name << "!";
		    cout << endl << endl;
		    }
		else
		    {
		    cout << "I'm sorry, \"" << name << "\" was NOT found!";
		    cout << endl << endl;
		    }
		}
	    break;
	case CLEAR:
	    Clear(head, tail, person);
	    break;
	default:
	    cout << "Error";
	    break;
	    }

	menuChoiceEnum = Menu();

	}

    return 0;
    }

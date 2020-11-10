/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

enum StackMenu
    {
    EXIT,
    CREATE,
    DISPLAY,
    ISEMPTY,
    SEARCH,
    REMOVE,
    CLEAR
    };

struct PersonInfo
    {
    string name;
    char gender;
    int age;
    };

struct ListNode
    {
    PersonInfo *data;
    ListNode *next;
    ListNode *previous;
    };

/***********************************************************************
 * PrintHeader
 * This function will output to the console the PrintHeader for the user
 **********************************************************************/

string PrintHeader();

/***********************************************************************
 * MENU
 * This function will output the menu for the user.
 **********************************************************************/

StackMenu Menu();

/***********************************************************************
 * IS EMPTY
 * This function will check if the list is empty
 **********************************************************************/

bool IsEmpty(ListNode *head); //CALC - head of linked list

/***********************************************************************
 * CLEAR
 * This function will clear the list and return the names being deleted
 **********************************************************************/

void Clear(ListNode *&head, 	// head of linked list
	ListNode *&tail, 	// tail of linked list
	PersonInfo *data); 	// data of linked list

/***********************************************************************
 * GET INFO
 * This function will read in using the ifstream variable InFile
 **********************************************************************/
PersonInfo *GetInfo(ifstream &InFile);
/***********************************************************************
 * ADD NODE
 * This function will receive the date from PersonInfo function and
 * organize the list alphabetically.
 **********************************************************************/
void AddNode(ListNode *&head, // head of linked list
	ListNode *&tail,      // tail of linked list
	PersonInfo *data);    // data of linked list

/***********************************************************************
 * DisplayList
 * This function will output the organized list.
 **********************************************************************/
void DisplayList(ListNode *&head); //head of linked list

/***********************************************************************
 * NameSearch
 * This function will search for the name in the organized list
 **********************************************************************/
ListNode *NameSearch(ListNode *&head, 	// head of linked list
	string name,   			// the name being searched
	bool &found);   		// checks if name is in the list

/***********************************************************************
 * REMOVE NODE
 * This function will remove the node.
 **********************************************************************/

void RemoveNode(ListNode *&head, 	// head of linked list
	ListNode *&tail, 		// tail of linked list
	string name,   			// the name being searched
	bool &found);   		// validates if item is in the list

#endif /* HEADER_H_ */

/***********************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * LAB # 11   : Ordered List
 * SECTION    : CS1B M/W-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "header.h"

PersonInfo *GetInfo(ifstream &InFile) // IN & OUT    - to the input file
{
	PersonInfo *ptr;
	ptr = NULL;
	ptr = new PersonInfo;

	if(InFile)
	{
		getline(InFile, ptr -> name);
		InFile.get(ptr -> gender);
		InFile >> ptr -> age;
		InFile.ignore(1000, '\n');
		InFile.ignore(1000, '\n');
	}

	return ptr;
}

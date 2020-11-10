/******************************************************************************
 * AUTHOR          : Mohammed Taei  & Utkarsh Karki
 * STUDENT ID      : 1019392 	    & 1088154
 * LAB # 6 	   : Testing
 * CLASS           : CS1B
 * DUE DATE        : 3/26/18
 *****************************************************************************/
#include "header.h"

int main ()
{
	cout << PrintHeader();
	int *num1=new int;
	int *num2=new int;
	int total;
	while( *num1 != -999){
	cout << "Input the first value (enter -999 to exit)? ";
	cin >> (*num1);
	if(*num1 == -999)
	{
		break;
	}
	cout << setw(44) << left << "Input the second value" ;
	cin >> (*num2);

	total = *num1 + *num2;
	cout << setw(16) << left << "The sum is: " << total << endl;
	total = *num1 * *num2;
	cout << "The product is: " << total << endl << endl;
	}
	return 0;
}


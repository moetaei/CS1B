/******************************************************************************
 * AUTHOR          : Joji Thomas and Mohammed Taei
 * STUDENT ID      : 1056113 and 1019392
 * LAB # 2 		   : Greatest Common Denominator
 * CLASS           : CS1B
 * SECTION         :
 * DUE DATE        : 11/30/17
 *****************************************************************************/
#include "header.h"

    int main()
    {

    int n1;
	int n2;
	const int PROMPT_COL = 26;
	ostringstream streamVar;

    cout << left;
    cout << setw(PROMPT_COL) << "Enter first integer:";
	cin >> n1;
	cout << setw(PROMPT_COL) << "Enter the second integer: ";
	cin >> n2;
	cout << gcd(n1,n2);
	cout << right;

	return 0;
	}

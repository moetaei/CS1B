#include "header.h"
void searchfunction(int intArray[], const int AR_SIZE){

	for(int count = 0; count < 4; count++)
	{
		bool found = 0;
		int intIndex=-1;
		int search=0;
		cout << "Enter an integer to search for: ";
					cin  >> search;
		for (int index = 0; index < 8; index++) {
			if (search == intArray[index]) {
				found = 1;
				intIndex = index;
			}
			if (index == 7)
			{
			if (found)
			{
				cout << "The integer " << search << " was found in index #"
										<< intIndex << endl << endl;
			}
			if (found == 0 && intIndex ==-1)
			{
				cout << search << " was not found!"<< endl << endl;
			}
			}
		}
	}
}
void sortfunction(int intArray[], const int AR_SIZE) {

	int x;   // inner sorting variable
	int y;   // outer sorting variable
	int key; // reference for sorting

	for (y = 1; y < AR_SIZE; y++)    // Start with 1 (not 0)
		{
		key = intArray[y];

		for (x = y - 1; (x >= 0) && (intArray[x] > key); x--) // Smaller values move up
				{
			intArray[x + 1] = intArray[x];
				}
		intArray[x + 1] = key;    //Put key into its proper location
		}
}

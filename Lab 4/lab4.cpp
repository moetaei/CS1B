/******************************************************************************
 * AUTHOR          : Mohammed Taei and Matt Cahill
 * STUDENT ID      : 1019392
 * LAB # 4 		   : Name Search
 * CLASS           : CS1B
 * DUE DATE        : 2/14/18
 *****************************************************************************/
#include "header.h"


int main() {
	string searchname; /*input for string name to enable ability to search*/
	string names[10];  /*array for all the names */
	int count = 0;	   /*counter for index*/
	for (int x = 0; x < 10; x++) { // gets names in a loop //
		count++;
		cout << "Please enter name #" << count << ": ";
		getline(cin, names[x]);
	}
		while (searchname != "done" || searchname != "Done") {
			cout << "Who do you want to search for? (enter done to exit): ";
			getline(cin, searchname);
			if(searchname == "done" || searchname == "Done")
					{
					break;
					}
			int found = 0; /* boolean value to return if name was found or not.*/
			for (int x = 0; x < 10; x++) {
				// search array through index //
				if (searchname == names[x]) {
					found++;
				}
			}
			cout << "There are " << found << " instances of the name "
					<< searchname << endl;
			if (found == 0) {
				cout << searchname << " was not found." << endl;
			}

		}


	cout << "Thank you for using my	program." << endl;
}

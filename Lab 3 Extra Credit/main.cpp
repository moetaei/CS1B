/****************************************************************************
 * AUTHOR : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : CS1B Lab Extra Credit
 * CLASS : CS1B
 * SECTION : MW: 6:30p ‐ 9:50p
 * DUE DATE : 2/05/18
 ****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	float weight = -1;
	float total = 0;
	int packCount = 0;
	int small  = 0;
	int medium = 0;
	int large  = 0;
	int xlarge = 0;
	cout << "Please enter your package weight. Entering 0 will calculate"
			" shipping pricing " << endl;
	cin >> weight;

	while (weight !=0)
	{

		if (weight > 0.0 && weight < 2.9)
		{
			total+=5;
			small ++;
			packCount++;
		}

		if (weight > 2.9 && weight < 13)
		{
			total+=8.50;
			medium++;
			packCount++;
		}
		if (weight > 12 && weight < 21)
				{
					total+=12.50;
					large++;
					packCount++;
				}
		if (weight > 20 && weight < 41)
						{
							total+=18;
							xlarge++;
							packCount++;
						}
		if( weight > 40)
		{
			cout << "Invalid entry" << endl;
			cout << "Please enter your package weight. Entering 0 will calculate"
						" shipping pricing " << endl;
				cin >> weight;
		}
		cout << "Please enter your package weight. Entering 0 will calculate"
							" shipping pricing " << endl;
		cin >> weight;
	}
	cout << small << " packages under 2 lbs." << endl;
	cout << medium << " packages between 3-12 lbs." << endl;
	cout << large << " packages between 13-20 lbs." << endl;
	cout << xlarge << " packages between 21-40 lbs." << endl;
	cout << setprecision(2)<< fixed << endl;
	cout << "The total shipping price is $" << total << endl;

	return 0;
}

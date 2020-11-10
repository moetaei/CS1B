#include "header.h"

void inputString ()
{
	string dayst;
	int day;
cout << "What day is it today? ";
		getline(cin, dayst);

		if(dayst == "Sunday")
		{
			day = 0;
		}
		if(dayst == "Monday")
		{
			day = 1;
		}
		if(dayst == "Tuesday")
		{
			day = 2;
		}
		if(dayst == "Wednesday")
				{
					day = 3;
				}
		if(dayst == "Thursday")
						{
							day = 4;
						}
		if(dayst == "Friday")
						{
							day = 5;
						}
		if(dayst == "Saturday")
						{
							day = 6;
						}
		if (dayst != "Saturday" && dayst != "Sunday" && dayst != "Monday" && dayst != "Tuesday" &&
				dayst != "Wednesday" && dayst != "Thursday" && dayst != "Friday")
		{
			cout << "*** Invalid Day Input ***"<< endl;
					cout << dayst << " is invalid." << endl;
		}
		outputENUM (day);

}

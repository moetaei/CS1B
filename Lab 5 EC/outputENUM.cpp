#include "header.h"

int outputENUM(int day)
{
	switch (day){
	case SUNDAY:
		cout << "Today is SUNDAY!"<< endl;
		break;
	case MONDAY:
		cout << "Today is MONDAY!"<< endl;
		break;
	case TUESDAY:
		cout << "Today is TUESDAY!"<< endl;
		break;
	case WEDNESDAY:
		cout << "Today is WEDNESDAY!"<< endl;
		break;
	case THURSDAY:
		cout << "Today is THURSDAY!"<< endl;
		break;
	case FRIDAY:
		cout << "Today is FRIDAY!"<< endl;
		break;
	case SATURDAY:
		cout << "Today is SATURDAY!"<< endl;
		break;
	}
	inputString();
return 0;
}

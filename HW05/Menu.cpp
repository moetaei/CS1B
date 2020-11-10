#include "header.h"
bool invalid;

void Menu()
    {
    int menuChoice; // INPUT - MENU CHOICE
    long long num1; // INPUT - VALUE TO FIND
    bool invalid;   // ERROR CHECKING FOR MENU
    long long final = 0; // Final Variable Placeholder for NUM1
    int decriment;  // Decriment Value for for Factorial Console OUTPUT
    int t1 = 0, t2 = 1, nextTerm = 0;
    do
	{
	invalid = false;

	cout << "LIST MENU:\n"
		<< "1 – Calculate and Display Factorial of a Number\n"
		<< "2 – Calculate and Display Fibonacci Series of a Number\n"
		<< "3 – Compare Performance for Factorial Implementations?\n"
		<< "4 – Compare Performance for Fibonacci Series Implementations\n"
		<< "0 - to Exit\n" << "Enter a command (0 to exit): ";
	if (!(cin >> menuChoice))
	    {
	    cout << "\nPlease input a number between 0 and 4!\n\n";
	    cin.clear();
	    cin.ignore(1000, '\n');
	    invalid = true;
	    }	//END if(!(cin >> menuChoice))
	else if (menuChoice < 0 || menuChoice > 4)
	    {
	    cout << "\nThe number " << menuChoice << " is invalid!\n";
	    cout << "Please input a number between 0 and 4!\n\n";
	    invalid = true;
	    }	//END else if (menuChoice < 0 || menuChoice > 5)
	}
    while (invalid);
    while (menuChoice != 0)
	{
	switch (menuChoice)
	    {
	case 1:
	    cout
		    << "Please enter the positive number you would like the factorial of: ";
	    cin >> num1;
	    final = Factorial(num1);
	    cout << "Your factorial is " << final << " (=";
	    decriment = num1;
	    while (decriment != 0)
		{
		if (decriment == 1)
		    {
		    cout << decriment;
		    break;
		    }
		cout << decriment << "*";
		decriment--;
		}
	    cout << ")" << endl << endl;
	    break;
	case 2:
	    cout
		    << "Please enter the positive number you would like the Fibonacci sequence: ";
	    cin >> num1;
	    if (num1 == 0)
		{
		cout << "The Fibonacci Sequence is 0" << endl << endl;
		break;
		}
	    cout << "The Fibonacci Sequence is ";
	    for (int x = 1; x < num1; x++)
		{
		if (x == 1)
		    {
		    cout << t1;
		    continue;
		    }
		if (x == 2)
		    {
		    cout << ", " << t2;
		    continue;
		    }
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << ", " << nextTerm;
		}
	    cout << ", " << FiboIT(num1) << endl << endl;
	    break;
	case 3:
	    cout << "Chrono Library Test \n";
	    cout << "\n";
	    cout
		    << "Please enter the positive number you would like the factorial of: ";
	    cin >> num1;
	    Chrono(num1, menuChoice);
	    break;

	case 4:
	    cout << "Chrono Library Test \n";
	    cout << "\n";
	    cout
		    << "Please enter the positive number you would like the Fibonacci sequence of: ";
	    cin >> num1;

	    Chrono(num1, menuChoice);
	    break;
	    }
	do
	    {
	    invalid = false;

	    cout << "LIST MENU:\n"
		    << "1 – Calculate and Display Factorial of a Number\n"
		    << "2 – Calculate and Display Fibonacci Series of a Number\n"
		    << "3 – Compare Performance for Factorial Implementations?\n"
		    << "4 – Compare Performance for Fibonacci Series Implementations\n"
		    << "0 - to Exit\n" << "Enter a command (0 to exit): ";
	    if (!(cin >> menuChoice))
		{
		cout << "\nPlease input a number between 0 and 4!\n\n";
		cin.clear();
		cin.ignore(1000, '\n');
		invalid = true;
		}	//END if(!(cin >> menuChoice))
	    else if (menuChoice < 0 || menuChoice > 4)
		{
		cout << "\nThe number " << menuChoice << " is invalid!\n";
		cout << "Please input a number between 0 and 4!\n\n";
		invalid = true;
		}	//END
	    }
	while (invalid);
	}	//switch(menuChoice)
    }


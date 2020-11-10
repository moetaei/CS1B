#include "header.h"

long long FactorialIT(long long num1)
    {
    // Data Table
    // This function will loop through the while loop by taking the INPUT (NUM1)
    // it will initialize counter to a count value and increments accordingly
    // until the value of num1 is equal to counter (1).
    int counter = 1;
    int total = num1;

    while (counter != num1)
	{
	total = total * (num1 - counter);
	counter++;
	}
    return total;
    }

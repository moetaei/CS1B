#include "header.h"

long long FiboIT(long long num1)
    {
    // Data Table
    // This function will use a for loop initialized to the current value
    // of the input (NUM1) and will return the value once it reaches the end of
    // the for loop.
    long long prev = 1;
    long long curr = 1;
    long long next = 1;
    for (int i = 3; i <= num1 - 1; ++i)
	{
	next = curr + prev;
	prev = curr;
	curr = next;
	}
    return next;
    }

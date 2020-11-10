#include "header.h"

long long Fibo(long long num1) // NUM1 INPUT FOR DATA VALUE
    {
    // Data Table
    // This function will keep returning the num1 (INPUT) value until it
    // reaches the numerical location of the corresponding Fibonacci series.
    if (num1 < 0 || num1 == 1)
	{
	return 0;
	}
    else if (num1 == 2)
	{
	return 1;
	}
    else
	{
	return Fibo(num1 - 1) + Fibo(num1 - 2);
	}
    }

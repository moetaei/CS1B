#include "header.h"

long long Factorial (long long num1)
    {
    // Data Table
    // This function will keep returning the num1 (INPUT) value until there
    // is only 1 left and will return num1 to be output onto the console
    if(num1 > 1)
            return num1 * Factorial(num1 - 1);
        else
            return num1;
    }

/****************************************************************************
 * AUTHOR     : Mohammed Taei
 * STUDENT ID : 1019392
 * Assignment : Assignment 3
 * CLASS      : CS1B
 * SECTION    : M/W: 6:30 to 9:50
 * DUE DATE   : 3/14/18
 ****************************************************************************/
#include "header.h"
// Main initializes head and tail to null
// Deals with passing references through for input and output
int main()
    {

    DVD *head = NULL;
    DVD *tail = NULL;

    InputFunction(head, tail); // Input function will retrieve all information
    // from the file using fstream
    OutputFunction(head, tail);// Output function will retrieve all information
    // from the struct filled by the Input function and will populate the
    // console along with a predetermined file name of OutputFile.txt

    return 0;
    }

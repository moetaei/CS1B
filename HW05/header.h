#ifndef HEADER_H_
#define HEADER_H_


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;
void Menu();
string PrintHeader();
//This function will output the print header onto the console. No data input
//Only Output
long long Factorial (long long);
// This function will take input through the user and will use a recursive
// algorithm to return the output result and display it on the console. Also
// used for timing comparison between the Factorial Iterative and Recursive
long long FactorialIT(long long);
// This function will take input through the user and will use a iterative
// algorithm to return the output result and display it on the console. Also
// used for timing comparison between the Factorial Iterative and Recursive
long long Fibo(long long);
// This function will take input through the user and will use a recursive
// algorithm to return the output result of the series and display it on the
// console. It will also be used to time both the Fibonacci Series Iterative or
// the Recursive.
long long FiboIT(long long);
// This function will take input through the user and will use a recursive
// algorithm to return the output result of the series and display it on the
// console. It will also be used to time both the Fibonacci Series Iterative or
// the Recursive.
void Chrono(long long, int);
// This function will successfully test over the duration of 50000 instances to
// get a more accurate read to find the difference between Iterative and
// Recursive algorithm and outputs to the console both the respective times
// in microseconds.
#endif

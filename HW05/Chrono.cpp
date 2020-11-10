#include "header.h"
void Chrono(long long num1, int menuChoice)
    {
    // Data Table
    // NUM1 Input. Desired Number to find factorial or fibonacci.
    // menuChoice Input. This will take the menuchoice and choose the correct
    // timing accordingly.
    // Will Output the Microsecond results to the screen to show which is faster
if(menuChoice ==3)
    {

  	    high_resolution_clock::time_point t1 = high_resolution_clock::now();
  	    for (int i=0; i<50000; ++i) {
  		Factorial(num1);  // function to measure execution time
  	    }
  	    high_resolution_clock::time_point t2 = high_resolution_clock::now();
  	    auto duration = duration_cast<microseconds>(t2 - t1).count();
  	    cout << "It took the program " << duration
  		    << " microseconds to execute for the recursive Factorial."
  		    << endl << endl;
  	    high_resolution_clock::time_point t3 = high_resolution_clock::now();
  	    	    for (int i=0; i<50000; ++i) {
  	    		Factorial(num1);  // function to measure execution time
  	    	    }
  	    	    high_resolution_clock::time_point t4 = high_resolution_clock::now();
  	    	    duration = duration_cast<microseconds>(t4 - t3).count();
  	    	    cout << "It took the program " << duration
  	    		    << " microseconds to execute for the iterative Factorial."
  	    		    << endl << endl;
    }
if(menuChoice == 4)
    {

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    	    for (int i=0; i<10000; ++i) {
    		Fibo(num1);  // function to measure execution time
    	    }
    	    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    	    auto duration = duration_cast<microseconds>(t2 - t1).count();
    	    cout << "It took the program " << duration
    		    << " microseconds to execute for the recursive Fibonacci Sequence."
    		    << endl << endl;
    	    high_resolution_clock::time_point t3 = high_resolution_clock::now();
    	    	    for (int i=0; i<10000; ++i) {
    	    		FiboIT(num1);  // function to measure execution time
    	    	    }
    	    	    high_resolution_clock::time_point t4 = high_resolution_clock::now();
    	    	    duration = duration_cast<microseconds>(t4 - t3).count();
    	    	    cout << "It took the program " << duration
    	    		    << " microseconds to execute for the iterative Fibonacci Sequence."
    	    		    << endl << endl;
    }

    }

#include <iostream>
#include <string>
#include <limits>
#include "queueArray.h"

using namespace std;

int main() {
	queueType<int> numQueue(4);
	queueType<double> decimalQueue;
	queueType<string> wordQueue;
	int top;

	numQueue.initializeQueue();
	numQueue.addQueue(21);
	numQueue.addQueue(12);
	numQueue.addQueue(18);
	numQueue.addQueue(20);
	numQueue.print();
	top = numQueue.peek();
	cout << endl << "The top is " << top << endl;
	cout << "Deleting" << endl;
	numQueue.deleteQueue();
	numQueue.deleteQueue();
	numQueue.deleteQueue();
	numQueue.deleteQueue();
	numQueue.deleteQueue();

	cout << "error message" << endl << endl;
	return 0;
}


#include "LinkedList.h"

int main() {

	cout << "Part 1:\n"
			<< "Creating a linked list and adding 7 nodes.\n";
	LinkedList<int> myLinkedList;

	myLinkedList.addNode(60, 1);
	myLinkedList.addNode(143, 1);
	myLinkedList.addNode(62, 1);
	myLinkedList.addNode(78, 1);
	myLinkedList.addNode(88, 1);
	myLinkedList.addNode(102, 1);

	myLinkedList.printList();

	//part 2
	//copy constructor
	cout << endl << endl << "Part 2:\n"
			<< "Creating second linked list and initializing using copy constructor.\n";
	LinkedList<int> secondLinkedList = myLinkedList;

	cout << "Original linked list: \n";
	myLinkedList.printList();

	cout << "Second, copied linked list: \n";
	secondLinkedList.printList();

	cout << endl << endl
			<< "Creating third linked list and adding two nodes to it.\n";
	LinkedList<int> thirdLinkedList;

	thirdLinkedList.addNode(40, 1);
	thirdLinkedList.addNode(60, 1);

	cout << "Contents of third linked list: \n";
	thirdLinkedList.printList();

	cout << "Copying data from first linked list using copy assignment.\n";
	thirdLinkedList = myLinkedList;

	cout << "Original linked list: \n";
	myLinkedList.printList();

	cout << "Third copied linked list using copy assignment: \n";
	thirdLinkedList.printList();

	//part 3
	cout << endl << endl << "Part 3:\n"
			<< "Creating new linked list in reverse order of the first.\n";

	LinkedList<int> reverseLinkedList;

	for (int i = 1; i <= myLinkedList.getSize(); i++) {
		reverseLinkedList.addNode(myLinkedList.getItem(i), 1);
	}

	cout << "Original linked list: \n";
	myLinkedList.printList();

	cout << "New, reversed linked list: \n";
	reverseLinkedList.printList();

	//part 4
	cout << endl << endl << "Part 4:\n"
			<< "Deleting third node of each list.\n";

	myLinkedList.removeNode(3);
	cout << "First linked list: \n";
	myLinkedList.printList();

	secondLinkedList.removeNode(3);
	cout << "Second linked list: \n";
	secondLinkedList.printList();

	thirdLinkedList.removeNode(3);
	cout << "Third linked list: \n";
	thirdLinkedList.printList();

	reverseLinkedList.removeNode(3);
	cout << "Reversed linked list: \n";
	reverseLinkedList.printList();

	cout << endl << "Trying to delete 8th node from first list..\n";
	myLinkedList.removeNode(8);

	cout << endl
			<< "Creating new, empty linked list and trying to remove a node.\n";
	LinkedList<int> emptyList;

	emptyList.removeNode(1);

	cout << endl << endl << "Part 5:\n"
<< "Adding a node (containing '40' to the middle of each list.\n";

	myLinkedList.addNode(40, 3);
	cout << "First linked list: \n";
	myLinkedList.printList();

	secondLinkedList.addNode(40, 3);
	cout << "Second linked list: \n";
	secondLinkedList.printList();

	thirdLinkedList.addNode(40, 3);
	cout << "Third linked list: \n";
	thirdLinkedList.printList();

	cout << endl << endl << endl << "Part 6:\n"
			<< "Repeat each previous step using linked list of doubles..\n";

	//Part 1
	cout << endl << endl
			<< "Creating linked list of doubles and adding 7 nodes.\n";
	LinkedList<double> firstDoubleLinkedList;

	firstDoubleLinkedList.addNode(152.68, 1);
	firstDoubleLinkedList.addNode(724.90, 1);
	firstDoubleLinkedList.addNode(44.245, 1);
	firstDoubleLinkedList.addNode(7.59, 1);
	firstDoubleLinkedList.addNode(156.11, 1);
	firstDoubleLinkedList.addNode(257.123, 1);

	firstDoubleLinkedList.printList();

	cout << endl << endl << "Part 2:\n"
			<< "Creating second linked list and initializing using copy constructor.\n";
	LinkedList<double> secondDoubleLinkedList = firstDoubleLinkedList;

	cout << "Original linked list: \n";
	firstDoubleLinkedList.printList();

	cout << "Second, copied linked list: \n";
	secondDoubleLinkedList.printList();

	cout << endl << endl
			<< "Creating third linked list and adding two nodes to it.\n";
	LinkedList<double> thirdDoubleLinkedList;

	thirdDoubleLinkedList.addNode(100.123, 1);
	thirdDoubleLinkedList.addNode(200.321, 1);

	cout << "Contents of third linked list: \n";
	thirdDoubleLinkedList.printList();

	cout << "Copying data from first linked list using copy assignment.\n";
	thirdDoubleLinkedList = firstDoubleLinkedList;

	cout << "Original linked list: \n";
	firstDoubleLinkedList.printList();

	cout << "Third, copied linked list using copy assignment: \n";
	thirdDoubleLinkedList.printList();

	//part 3
	cout << endl << endl << "Part 3:\n"
			<< "Creating new linked list in reverse order of the first.\n";

	LinkedList<double> reverseDoubleLinkedList;

	for (int i = 1; i <= firstDoubleLinkedList.getSize(); i++) {
		reverseDoubleLinkedList.addNode(firstDoubleLinkedList.getItem(i), 1);
	}

	cout << "Original linked list: \n";
	firstDoubleLinkedList.printList();

	cout << "New, reversed linked list: \n";
	reverseDoubleLinkedList.printList();

	//part 4
	cout << endl << endl << "Part 4:\n"
			<< "Deleting third node of each list.\n";

	firstDoubleLinkedList.removeNode(3);
	cout << "First linked list: \n";
	firstDoubleLinkedList.printList();

	secondDoubleLinkedList.removeNode(3);
	cout << "Second linked list: \n";
	secondDoubleLinkedList.printList();

	thirdDoubleLinkedList.removeNode(3);
	cout << "Third linked list: \n";
	thirdDoubleLinkedList.printList();

	reverseDoubleLinkedList.removeNode(3);
	cout << "Reversed linked list: \n";
	reverseDoubleLinkedList.printList();

	cout << endl << "Trying to delete 8th node from first list..\n";
	firstDoubleLinkedList.removeNode(8);

	cout << endl
			<< "Creating new, empty linked list and trying to remove a node.\n";
	LinkedList<double> emptyDoubleList;

	emptyDoubleList.removeNode(1);

	cout << endl << endl << "Part 5:\n"
			<< "Adding a node (containing '40' to the middle of each list.\n";

	firstDoubleLinkedList.addNode(40, 3);
	cout << "First linked list: \n";
	myLinkedList.printList();

	secondDoubleLinkedList.addNode(40, 3);
	cout << "Second linked list: \n";
	secondDoubleLinkedList.printList();

	thirdDoubleLinkedList.addNode(40, 3);
	cout << "Third linked list: \n";
	thirdDoubleLinkedList.printList();

	return 0;
}

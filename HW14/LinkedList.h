#include <iostream>
using namespace std;

template<typename Type>
class LinkedList {
public:

	LinkedList();

	LinkedList(const LinkedList &l);

	LinkedList<Type>& operator=(const LinkedList<Type> &l) {
		Node *nodePtr = l.head;

		size = l.size;

		Type firstItem = nodePtr->item;
		int count = 0;

		while (head != nullptr) {
			removeNode(1);
		}


		while (nodePtr != nullptr) {

			addNode(nodePtr->item, count);

			nodePtr = nodePtr->next;

			count++;
		}

		removeNode(size);
		addNode(firstItem, 1);

		return *this;
	}

	~LinkedList();

	void addNode(Type newItem, int position);

	void removeNode(int position);

	int getSize() const;

	void printList() const;

	Type getItem(int position) const;

private:

	int size;

	struct Node {

		Type item;

		Node* next;
		Node* prev;

		Node(Type newItem) {
			item = newItem;

			next = nullptr;
			prev = nullptr;
		}

	};

	Node* head;
};


template<typename Type>
LinkedList<Type>::LinkedList() {
	size = 0;
	head = nullptr;
}


template<typename Type>
LinkedList<Type>::LinkedList(const LinkedList &l) {
	head = nullptr;
	size = l.size;

	Node *nodePtr = l.head;

	Type firstItem = nodePtr->item;
	int count = 0;


	while (nodePtr != nullptr) {

		addNode(nodePtr->item, count);

		nodePtr = nodePtr->next;

		count++;
	}

	removeNode(size);
	addNode(firstItem, 1);

}

template<typename Type>
LinkedList<Type>::~LinkedList() {
	while (head != nullptr) {
		removeNode(1);
	}
}

template<typename Type>
void LinkedList<Type>::addNode(Type newItem, int position) {

	Node *nodePtr;

	nodePtr = new Node(newItem);


	if (head == nullptr) {
		head = nodePtr;
	} else {
		if (position == 1) {

			head->prev = nodePtr;
			nodePtr->next = head;

			head = nodePtr;
		} else if (position > 1 && position <= size)
				{

			nodePtr->next = head;


			for (int i = 0; i < position - 2; i++) {
				nodePtr->next = nodePtr->next->next;
			}

			nodePtr->prev = nodePtr->next;
			nodePtr->next = nodePtr->prev->next;
			nodePtr->prev->next = nodePtr;
			nodePtr->next->prev = nodePtr;
		} else if (position > size)
				{
			nodePtr->next = head;

			while (nodePtr->next->next != nullptr) {
				nodePtr->next = nodePtr->next->next;
			}

			nodePtr->prev = nodePtr->next;
			nodePtr->prev->next = nodePtr;
			nodePtr->next = nullptr;
		}
	}

	size++;
	nodePtr = nullptr;
}

template<typename Type>
void LinkedList<Type>::removeNode(int position) {
	if (head != nullptr) {
		Node *deletePtr = head;

		if (position == 1) {

			head = deletePtr->next;

			if (head != nullptr) {

				head->prev = nullptr;
			}

			delete deletePtr;
		} else if (position > 1 && position < size)
				{


			for (int i = 0; i < position - 1; i++) {
				deletePtr = deletePtr->next;
			}

			deletePtr->prev->next = deletePtr->next;
			deletePtr->next->prev = deletePtr->prev;

			delete deletePtr;
		} else if (position == size || position == size + 1)
				{
			while (deletePtr->next != nullptr) {
				deletePtr = deletePtr->next;
			}

			deletePtr->prev->next = nullptr;

			delete deletePtr;
		} else {
			cout << "Node does not exist! cannot remove!\n";
			size++;
		}
		size--;
		deletePtr = nullptr;
	} else {
		cout << "Cannot remove from empty linked list!";
	}
}

template<typename Type>
void LinkedList<Type>::printList() const {
	if (head == nullptr) {
		cout << "Linked list is empty!\n";
	} else {
		Node *printPtr = head;
		while (printPtr != nullptr) {
			cout << printPtr->item << ' ';
			printPtr = printPtr->next;
		}
	}
	cout << endl;
}

template<typename Type>
Type LinkedList<Type>::getItem(int position) const {
	Node *itemPtr = head;
	for (int i = 0; i < position - 1; i++) {
		itemPtr = itemPtr->next;
	}
	return itemPtr->item;
}

template<typename Type>
int LinkedList<Type>::getSize() const {
	return size;
}


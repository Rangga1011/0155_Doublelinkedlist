#include <iostream>
#include <string>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node *next;
	Node *prev;
};

Node* START = NULL;

void addNode() {
	Node* newNode = new Node(); // step 1 create a new node
	cout << "\nEnter the roll number of the student: ";
	cin >> newNode->noMhs;      // assign value to the data field of the new node
	cout << "\nEnter the name of the student: ";
	cin >> newNode->name;      // assign value to the data field of the new node

	//insert the new node in the list
	if (START == NULL || newNode->noMhs <= START->noMhs) {  // step 2 insert the new node

		if (START != NULL && newNode->noMhs == START->noMhs) {
			cout << "\033[31Duplicate roll numbers not allowed\033[0m" << endl;
			return;
		}
		// if the list empty, make the new node the start
		newNode->next = START;   // step 3 : make the new node point the frist node
		if (START != NULL) {
			START->prev = newNode;  // step 4 make the firstnode point to the new node
		}
		newNode->prev = NULL;  // step 5 make the new node point to NULL



	}
	

}











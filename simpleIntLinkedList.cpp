#include <iostream>
#include "simpleIntLinkedList.h"
using namespace std;

ListNode::ListNode(int n)
{
	_item = n;
	_next = NULL;
}

void List::insertHead(int n)
{
	ListNode *aNewNode = new ListNode(n);
	aNewNode->_next = _head;
	_head = aNewNode;
	_size++;
};

void List::removeHead()
{
	if (_size > 0) {
		ListNode *temp = _head;
		_head = _head->_next;
		delete temp;
		_size--;
	}
}
/*
void List::print() {
	// modify this
	ListNode* ptr = _head;
	for (int i = 0; i < _size; i++) {
		cout << ptr->_item << " ";
		ptr = ptr->_next;
	}
	cout << "\n";
}
*/

void List::print() {
	ListNode* ptr = _head;
	while ((ptr->_item != NULL) && (ptr->_item != 0)) {
		cout <<  ptr->_item << " ";
		ptr = ptr->_next;
		if (ptr == NULL) {
			cout << endl;
			return;
		}

	}
}


bool List::exist(int n) {
	// modify this
	
	ListNode* point = _head; // getting the head pointer
	if (point == NULL) {
		return 0;
	}
	if (point->_item == NULL) {
		return 0;
	}
	else {
		
		while (point->_item != NULL) {
			if (point->_item == n) {
				return 1;
			}
			point = point->_next;
			if (point == NULL) {
				return 0;
			}
		}
	}

}

int List::headItem()
	{
	return 0; // modify this
}

List::~List()
{
	while (_size != 0)
		removeHead();
};






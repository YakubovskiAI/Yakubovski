// ---------------------------------------------------------------------------

#pragma hdrstop

#include "List.h"

void List::PushBack(std::string data) {
	Node* toAdd = new Node(data);
	if (head == NULL) {
		head = toAdd;
		tail = toAdd;
	}
	else {
		tail->pNext = toAdd;
		toAdd->pPrev = tail;
		tail = toAdd;
	}
}

void List::PopFront() {
	if (head == NULL) {
		return;
	}
	else if (head == tail) {
		delete tail;
		head = NULL;
		tail = NULL;
	}
	else {
		Node* toDelete = head;
		head = toDelete->pNext;
		head->pPrev = NULL;
		delete toDelete;
	}
}

void List::Move(int min, int max, int point) {
	int counter = 0;
	Node* first = NULL;
	Node* second = NULL;
	Node* Point = NULL;
	Node* tmp = head;
	while (tmp != NULL) {
		if (counter == min) {
			first = tmp;
		}
		if (counter == max) {
			second = tmp;
		}
		if (counter == point) {
			Point = tmp;
		}
		counter++;
		tmp = tmp->pNext;
	}
	if (first->pPrev != NULL) {
		first->pPrev->pNext = second->pNext;
	}
	else {
		head = second->pNext;
	}
	if (second->pNext != NULL) {
		second->pNext->pPrev = first->pPrev;
	}
	else {
		tail = first->pPrev;
	}
	if (Point->pPrev != NULL) {
		Point->pPrev->pNext = first;
		first->pPrev = Point->pPrev;
	}
	else {
		first->pPrev = NULL;
		head = first;
	}
	Point->pPrev = second;
	second->pNext = Point;
}
// ---------------------------------------------------------------------------
#pragma package(smart_init)

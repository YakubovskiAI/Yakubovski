// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Queue.h"

void Queue::Refresh(TListBox *ListBox1) {
	Node* tmp = head;
	ListBox1->Clear();
	while (tmp != NULL) {
		ListBox1->Items->Add(tmp->GetData().c_str());
		tmp = tmp->pNext;
	}
}

void Queue::PushFront(std::string data) {
	Node* toAdd = new Node(data);
	if (head == NULL) {
		head = toAdd;
		tail = toAdd;
	}
	else {
		head->pPrev = toAdd;
		toAdd->pNext = head;
		head = toAdd;
	}
}

void Queue::PopBack() {
	if (head == NULL) {
		return;
	}
	else if (head == tail) {
		delete tail;
		head = NULL;
		tail = NULL;
	}
	else {
		Node* toDelete = tail;
		tail = toDelete->pPrev;
		tail->pNext = NULL;
		delete toDelete;
	}
}

std::string Queue::GetFront() {
	return head == NULL ? NULL : head->GetData();
}

std::string Queue::GetBack() {
	return tail == NULL ? NULL : tail->GetData();
}

bool Queue::Empty() {
	return head == NULL;
}
// ---------------------------------------------------------------------------
#pragma package(smart_init)

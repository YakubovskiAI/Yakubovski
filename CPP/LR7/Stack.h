// ---------------------------------------------------------------------------

#ifndef StackH
#define StackH
#include "Node.h"

class Stack {
public:
	Node *head = 0;
	void push(int key, UnicodeString name);
	void pop();
	Node* top();
	void DeleteNode(int key, UnicodeString name);
	void DeleteNodeByKey(int key);

	bool empty();
	void PrintStack(TMemo* Memo1);

};

void Stack::push(int key, UnicodeString name) {
	Node *tmp = new Node(key, name);
	tmp->pNext = head;
	head = tmp;
}

void Stack::pop() {
	if (head == 0) {
		return;
	}
	Node *toDelete = head;
	head = toDelete->pNext;
	delete toDelete;
}

Node* Stack::top() {
	return head;
}

bool Stack::empty() {
	return (head == 0);
}

void Stack::PrintStack(TMemo* Memo1) {
	if (empty()) {
		Memo1->Lines->Add("���� ����");
		return;
	}

	Node* tmp = head;
	while (tmp) {
		Memo1->Lines->Add("����: " + IntToStr(tmp->GetKey()));
		Memo1->Lines->Add("��������: " + tmp->GetName());
		tmp = tmp->pNext;
	}
}

void Stack::DeleteNode(int key, UnicodeString name) {
	if (head == NULL)
		return;
	Node * tmp = head;
	if (tmp->GetKey() == key && tmp->GetName() == name) {
		head = tmp->pNext;
		delete tmp;
		return;
	}

	while (tmp->pNext) {
		if (tmp->pNext->GetKey() == key && tmp->pNext->GetName() == name) {
			Node* toDelete = tmp->pNext;
			tmp->pNext = toDelete->pNext;
			delete toDelete;
		}
		tmp = tmp->pNext;
	}
}

void Stack::DeleteNodeByKey(int key) {
	if (head == NULL)
		return;
	Node* tmp = head;
	if (tmp->GetKey() == key) {
		head = tmp->pNext;
		delete tmp;
	}
	if (head == NULL)
		return;
	tmp = head;
	while (tmp->pNext) {
		if (tmp->pNext->GetKey() == key) {
			Node* toDelete = tmp->pNext;
			tmp->pNext = toDelete->pNext;
			delete toDelete;
			if (tmp->pNext == NULL)
				break;
		}
		tmp = tmp->pNext;
	}
}
// ---------------------------------------------------------------------------
#endif

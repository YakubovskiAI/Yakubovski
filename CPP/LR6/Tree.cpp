// ---------------------------------------------------------------------------

#pragma hdrstop

#include "Tree.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)

void Tree::PrintMiniTree(Node* tmp, TTreeView* TreeView1, int &index) {
	int i = index;
	if (tmp->pRight != NULL) {
		TreeView1->Items->AddChild(TreeView1->Items->Item[i],
			"Right: " + tmp->pRight->GetSurname() +
			IntToStr(tmp->pRight->GetID()));
		PrintMiniTree(tmp->pRight, TreeView1, ++index);
	}
	if (tmp->pLeft != NULL) {
		TreeView1->Items->AddChild(TreeView1->Items->Item[i],
			"Left: " + tmp->pLeft->GetSurname() +
			IntToStr(tmp->pLeft->GetID()));
		PrintMiniTree(tmp->pLeft, TreeView1, ++index);
	}
}

void Tree::PrintTree(TTreeView *TreeView1) {
	int index = 0;
	TreeView1->Items->Clear();
	if (root != NULL) {
		TreeView1->Items->Add(NULL, "Center: " + root->GetSurname() +
			IntToStr(root->GetID()));
		PrintMiniTree(root, TreeView1, index);
	}
}

void Tree::AddNode(Node*& tmp, int id, UnicodeString surname) {
	if (tmp == NULL) {
		Node* newNode = new Node(id, surname);
		tmp = newNode;
		return;
	}
	if (id < tmp->GetID())
		AddNode(tmp->pLeft, id, surname);
	if (id > tmp->GetID())
		AddNode(tmp->pRight, id, surname);
}

void Tree::CreateTreeFromArray(Node * &tmp, int* idArray,
	UnicodeString* surnameArray, int left, int right) {
	if (right - left == 1) {
		tmp = new Node(idArray[left], surnameArray[left]);
		return;
	}
	if (right - left == 2) {
		tmp = new Node(idArray[left], surnameArray[left]);
		tmp->pRight = new Node(idArray[left + 1], surnameArray[left + 1]);
		return;
	}
	tmp = new Node(idArray[(right + left) / 2],
		surnameArray[(right + left) / 2]);
	CreateTreeFromArray(tmp->pLeft, idArray, surnameArray, left,
		(right + left) / 2);
	CreateTreeFromArray(tmp->pRight, idArray, surnameArray,
		(right + left) / 2 + 1, right);
}

Node* Tree::SearchByKey(Node* tmp, int keyID) {
	if (tmp == NULL)
		return NULL;
	else if (tmp->GetID() == keyID)
		return tmp;

	Node* left = SearchByKey(tmp->pLeft, keyID);
	Node* right = SearchByKey(tmp->pRight, keyID);

	if (left != NULL)
		return left;
	else if (right != NULL)
		return right;
	else
		return NULL;
}

// -------------
void Tree::DeleteNode(int keyID) {
	Node *del, *prevdel, *node, *prevnode;
	del = root;
	prevdel = NULL;
	while (del->GetID() != keyID) {
		prevdel = del;
		if (keyID < del->GetID()) {
			del = del->pLeft;
		}
		else {
			del = del->pRight;
		}
	}
	if (!del) {
		return;
	}
	if (!del->pRight) {
		node = del->pLeft;
	}
	else {
		if (!del->pLeft) {
			node = del->pRight;
		}

		else {
			prevnode = del;
			node = del->pLeft;
			while (node->pRight) {
				prevnode = node;
				node = node->pRight;
			}
			if (prevnode == del) {
				node->pRight = del->pRight;
			}
			else {
				node->pRight = del->pRight;
				prevnode->pRight = node->pLeft;
				node->pLeft = prevnode;
			}
		}
	}
	if (!prevdel) {
		root = prevdel = node;
	}
	else {
		if (del->GetID() < prevdel->GetID()) {
			prevdel->pLeft = node;
		}

		else {
			prevdel->pRight = node;
		}
	}
	delete del;
}

void Tree::DirectBypass(TMemo *Memo1, Node* tmp) {
	if (tmp) {
		Memo1->Lines->Add(tmp->GetSurname());
		DirectBypass(Memo1, tmp->pLeft);
		DirectBypass(Memo1, tmp->pRight);
	}
}

void Tree::BackwardBypass(TMemo *Memo1, Node* tmp) {
	if (tmp) {
		BackwardBypass(Memo1, tmp->pLeft);
		BackwardBypass(Memo1, tmp->pRight);
		Memo1->Lines->Add(tmp->GetSurname());
	}
}

void Tree::KeyBypass(TMemo *Memo1, Node* tmp) {
	if (tmp) {
		KeyBypass(Memo1, tmp->pLeft);
		Memo1->Lines->Add(tmp->GetSurname());
		KeyBypass(Memo1, tmp->pRight);
	}
}

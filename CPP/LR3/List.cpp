// ---------------------------------------------------------------------------

#pragma hdrstop

#include "List.h"

// #include "Node.h"
void List::AddElement(int SerialNumber, String Surname, String Name,
	String Patronymic, String HomeAddress, String RegistrationDate) {
	size++;
	if (head == NULL) {
		head = new Node(SerialNumber, Surname, Name, Patronymic, HomeAddress,
			RegistrationDate);
		return;
	}

	Node* tmp = head;
	while (tmp->pNext != NULL) {
		tmp = tmp->pNext;
	}
	tmp->pNext = new Node(SerialNumber, Surname, Name, Patronymic, HomeAddress,
		RegistrationDate);
}

void List::ShowList(TMemo* Memo1) {
	Memo1->Lines->Clear();
	if (head == NULL) {
		Memo1->Lines->Add("������ ����");
		return;
	}

	int counter = 1;
	Node* tmp = head;
	while (tmp != NULL) {
		Memo1->Lines->Add(IntToStr(counter) + "-� ������");
		Memo1->Lines->Add("���������� �����: " +
			IntToStr(tmp->GetSerialNumber()));
		Memo1->Lines->Add("�������: " + tmp->GetSurname());
		Memo1->Lines->Add("���: " + tmp->GetName());
		Memo1->Lines->Add("��������: " + tmp->GetPatronymic());
		Memo1->Lines->Add("�������� �����: " + tmp->GetHomeAddress());
		Memo1->Lines->Add("���� ���������� �� ����: " +
			tmp->GetRegistrationDate());
		tmp = tmp->pNext;
		counter++;
	}
}

void List::ShowSearchList(TMemo* Memo1, int search�riteria, String searchItem) {
	Memo1->Lines->Clear();
	if (head == NULL) {
		Memo1->Lines->Add("������ ����");
		return;
	}

	int counter = 1;
	Node* tmp = head;

	switch (search�riteria) {
	case 0:
		while (tmp != NULL) {
			if (StrToInt(searchItem) == tmp->GetSerialNumber()) {
				Memo1->Lines->Add(IntToStr(counter) + "-� ������");
				Memo1->Lines->Add("���������� �����: " +
					IntToStr(tmp->GetSerialNumber()));
				Memo1->Lines->Add("�������: " + tmp->GetSurname());
				Memo1->Lines->Add("���: " + tmp->GetName());
				Memo1->Lines->Add("��������: " + tmp->GetPatronymic());
				Memo1->Lines->Add("�������� �����: " + tmp->GetHomeAddress());
				Memo1->Lines->Add("���� ���������� �� ����: " +
					tmp->GetRegistrationDate());
				counter++;
			}
			tmp = tmp->pNext;
		}
		break;
	case 1:
		while (tmp != NULL) {
			if (searchItem == tmp->GetRegistrationDate()) {
				Memo1->Lines->Add(IntToStr(counter) + "-� ������");
				Memo1->Lines->Add("���������� �����: " +
					IntToStr(tmp->GetSerialNumber()));
				Memo1->Lines->Add("�������: " + tmp->GetSurname());
				Memo1->Lines->Add("���: " + tmp->GetName());
				Memo1->Lines->Add("��������: " + tmp->GetPatronymic());
				Memo1->Lines->Add("�������� �����: " + tmp->GetHomeAddress());
				Memo1->Lines->Add("���� ���������� �� ����: " +
					tmp->GetRegistrationDate());
				counter++;
			}
			tmp = tmp->pNext;
		}
		break;
	case 2:
		while (tmp != NULL) {
			if (searchItem == tmp->GetSurname()) {
				Memo1->Lines->Add(IntToStr(counter) + "-� ������");
				Memo1->Lines->Add("���������� �����: " +
					IntToStr(tmp->GetSerialNumber()));
				Memo1->Lines->Add("�������: " + tmp->GetSurname());
				Memo1->Lines->Add("���: " + tmp->GetName());
				Memo1->Lines->Add("��������: " + tmp->GetPatronymic());
				Memo1->Lines->Add("�������� �����: " + tmp->GetHomeAddress());
				Memo1->Lines->Add("���� ���������� �� ����: " +
					tmp->GetRegistrationDate());
				counter++;
			}
			tmp = tmp->pNext;
		}
		break;
	}

	if (Memo1->Lines->Strings[0] == "") {
		Memo1->Lines->Add("������ ����");
	}
}

void List::CompleteElement(List &List1, List &List2, int comleteNumber) {
	Node* completedNode;
	Node* tmp;
	if (comleteNumber == 1) {
		completedNode = List1.head;
		List1.head = List1.head->pNext;

	}
	else {
		int counter = 1;
		tmp = List1.head;
		while (counter < comleteNumber - 1) {
			tmp = tmp->pNext;
			counter++;
		}
		completedNode = tmp->pNext;
		tmp->pNext = tmp->pNext->pNext;
	}
	List1.SetSize(List1.GetSize() - 1);
	completedNode->pNext = NULL;

	if (List2.head == NULL) {
		List2.head = completedNode;
	}
	else {
		tmp = List2.head;
		while (tmp->pNext != NULL) {
			tmp = tmp->pNext;
		}
		tmp->pNext = completedNode;
	}
	List2.SetSize(List2.GetSize() + 1);
}

void List::DeleteDuplicate() {
	if (GetSize() < 2)
		return;

	Node* i = head;
	while (i != NULL && i->pNext != NULL) {
		Node* j = i;
		while (j->pNext != NULL) {
			if (i->GetHomeAddress() == j->pNext->GetHomeAddress()
				&& i->GetSurname() == j->pNext->GetSurname()) {
				Node* deleteNode = j->pNext;
				j->pNext = j->pNext->pNext;
				delete deleteNode;
				size--;
				continue;
				
			}
			j = j->pNext;
		}
		i = i->pNext;
	}
}
// ---------------------------------------------------------------------------
#pragma package(smart_init)

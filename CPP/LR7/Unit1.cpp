// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "HashTable.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
void AddRandomKeys(int count);

TForm1 *Form1;
HashTable* hashTable = new HashTable(10);

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	AddRandomKeys(15);
	hashTable->Print(Memo1);
}

void AddRandomKeys(int count) {
	int randNum;
	for (int i = 0; i < count; i++) {
		randNum = rand() % 1000;
		hashTable->Add(randNum, "RandomStrWithNumber" + IntToStr(randNum));
	}
}

// ------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	hashTable->Add(StrToInt(Edit1->Text), Edit2->Text);
	hashTable->Print(Memo1);
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender) {
	hashTable->Delete(StrToInt(Edit1->Text), Edit2->Text);
	hashTable->Print(Memo1);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender) {
	int key1 = StrToInt(Edit3->Text);
	int key2 = StrToInt(Edit4->Text);
	if (key1 < 0 || key2 < 0) {
		ShowMessage("����� ������ ���� ����������������");
		return;
	}
	else if (key1 >= key2) {
		ShowMessage("������ ���� ������ ���� ������ �������");
		return;
	}
	hashTable->DeleteByKeysInRange(key1, key2);
	hashTable->Print(Memo1);
}
// ---------------------------------------------------------------------------

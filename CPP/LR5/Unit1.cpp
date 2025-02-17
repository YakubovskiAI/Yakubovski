// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "List.h"

TForm1 *Form1;
List list;
int min = 0, max = 0;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	// ListBox1->Items->LoadFromFile
	// ("C:\\Users\\user\\Yakubovski\\CPP\\LR5\\Unit1.cpp");
    ShowMessage("���������� � ����� �������� ���������� �����,\n�� �� ���� ��� ����� ��� ������ � ���,\n��� ��� �������� ���� Unit1.cpp\n�������� �� �������� �� �����");
	for (int i = 0; i < ListBox1->Count; i++) {
		list.PushBack(AnsiString(ListBox1->Items->Strings[i]).c_str());
	}

}

// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) {
	for (int i = 0; i < ListBox1->Count; i++) {
		if (ListBox1->Selected[i] && ((i == 0) ||
			(ListBox1->Selected[i - 1] == false))) {
			min = i;
		}
		if (ListBox1->Selected[i] && ((i == ListBox1->Count - 1) ||
			(ListBox1->Selected[i + 1] == false))) {
			max = i;
		}
	}
	ListBox1->MultiSelect = false;
	ListBox1->ItemIndex = -1;
	Button1->Enabled = false;
	Button2->Enabled = true;
	Button3->Enabled = true;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	if (ListBox1->ItemIndex == -1) {
		return;
	}
	if (ListBox1->ItemIndex >= min && ListBox1->ItemIndex <= max) {
		ShowMessage(
			"���������� ������� ������,\n�� �������� � ����� ����������� �����");
		return;
	}
	list.Move(min, max, ListBox1->ItemIndex);
	list.Refresh(ListBox1);

	ListBox1->ItemIndex = -1;
	ListBox1->MultiSelect = true;
	Button3->Enabled = false;
	Button2->Enabled = false;
	Button1->Enabled = true;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender) {
	ListBox1->ItemIndex = -1;
	ListBox1->MultiSelect = true;
	Button3->Enabled = false;
	Button2->Enabled = false;
	Button1->Enabled = true;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender) {
	OpenDialog1->Execute();
	ListBox1->Items->LoadFromFile
		(OpenDialog1->FileName);
}
// ---------------------------------------------------------------------------

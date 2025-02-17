// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "QueueTest.h"
#include "Queue.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Queue queue;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
	for (int i = ListBox1->Count - 1; i >= 0; i--) {
		queue.PushFront(AnsiString(ListBox1->Items->Strings[i]).c_str());
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	queue.PushFront(AnsiString(Edit1->Text).c_str());
	queue.Refresh(ListBox1);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender) {
	queue.PopBack();
	queue.Refresh(ListBox1);
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender) {
	ShowMessage(queue.Empty() ? "��" : "���");
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender) {
	ShowMessage(queue.Empty() ? "������� �����" : (queue.GetFront()).c_str());
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender) {
	ShowMessage(queue.Empty() ? "������� �����" : (queue.GetBack()).c_str());
}
// ---------------------------------------------------------------------------

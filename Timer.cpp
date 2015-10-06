//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Timer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm1 *Form1;
// ������ � ������
   TNotifyIconData NID;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
{
   Form1->Visible = true;
   // ������ ������ � ������
  AnsiString trey = "����� ��� ��������� �� ������";
  NID.cbSize = sizeof(TNotifyIconData);
  NID.hWnd = Handle;
  NID.uID = 1;
  NID.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
  NID.uCallbackMessage = MyTrayIcon;
  // ������ ������ ����������, �� ����� ������� ������
  NID.hIcon = Application->Icon->Handle;
  strcpy(NID.szTip,trey.c_str());
  Shell_NotifyIcon(NIM_ADD, &NID);
}
//----------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
   TDateTime n = Now();
   ClockMemo->Text = n;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  //������� ������ �� ����
  Shell_NotifyIcon(NIM_DELETE, &NID);   
}
//---------------------------------------------------------------------------




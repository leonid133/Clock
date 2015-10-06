//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
   : TForm(Owner)
{
   Form1->Visible = true;
}
//----------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
   TDateTime n = Now();
   ClockMemo->Text = n;
}
//---------------------------------------------------------------------------


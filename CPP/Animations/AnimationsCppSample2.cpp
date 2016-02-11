//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AnimationsCppSample2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Rectangle1Click(TObject *Sender)
{
	PathAnimation1->Start();
}
//---------------------------------------------------------------------------


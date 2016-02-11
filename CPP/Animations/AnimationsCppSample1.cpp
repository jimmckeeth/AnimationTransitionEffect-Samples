//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AnimationsCppSample1.h"
#include "AnimationsCppSample2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
  Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Rectangle1Click(TObject *Sender)
{
	Rectangle1->RotationAngle = 0;
	Fmx::Ani::TAnimator::AnimateFloat(Rectangle1, "RotationAngle", 90, 2);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCreate(TObject *Sender)
{
	ColorPanel1->Color = TAlphaColorRec::Lightslategray;
	Rectangle1->Fill->Color = TAlphaColorRec::Lightslategray;
}
//---------------------------------------------------------------------------


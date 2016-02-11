//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "EffectsUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm17 *Form17;
//---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm17::Layout2MouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y)
{
	SmoothMagnifyEffect1->Center = PointF(X, Y);
}
//---------------------------------------------------------------------------
void __fastcall TForm17::FormCreate(TObject *Sender)
{
	Layout2->Visible = True;

}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TransitionsUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm31 *Form31;
//---------------------------------------------------------------------------
__fastcall TForm31::TForm31(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm31::Button2Click(TObject *Sender)
{

	TransitionEffect1->Enabled = false;
	TransitionEffect1->RandomSeed = Random();

	TransitionEffect1->Parent = TabControl1->ActiveTab;

	TransitionEffect1->Enabled = true;
	FloatAnimation1->Start();
}
//---------------------------------------------------------------------------


void __fastcall TForm31::FloatAnimation1Finish(TObject *Sender)
{
  TransitionEffect1->Enabled = false;
  if (TabControl1->ActiveTab == TabItem1)
  {
	TabControl1->ActiveTab = TabItem2;
  }
  else
  {
	TabControl1->ActiveTab = TabItem1;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm31::FloatAnimation1Process(TObject *Sender)
{
	TBitmap *update = NULL;
	try
	{
		if (TabControl1->ActiveTab == TabItem1)
		{
			update = Tab2Layout->MakeScreenshot();
			TransitionEffect1->Target->Assign(update);
		}
		else
		{
			update = Tab1Layout->MakeScreenshot();
			TransitionEffect1->Target->Assign(update);
		}
	}
	__finally
	{
		update->Free();
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm31::FormShow(TObject *Sender)
{
	Randomize();

	TabControl1->ActiveTab = TabItem2;
	TabControl1->ActiveTab = TabItem1;
}
//---------------------------------------------------------------------------



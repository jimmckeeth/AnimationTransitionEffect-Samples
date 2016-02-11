//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "PageTurnUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TPageFlipform *PageFlipform;
//---------------------------------------------------------------------------
__fastcall TPageFlipform::TPageFlipform(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::FormCreate(TObject *Sender)
{
	FCurPage = 1;
	Swipe->CornerPoint = PointF(LayoutGlass->Width, 0);
	Swipe->MousePoint = PointF(LayoutGlass->Width - 5, 5);
	FillMemo(Memo1);
	FillMemo(Memo2);
	FillMemo(Memo3);
	FillMemo(Memo4);
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::FillMemo(TMemo *memo)
{
	memo->Text = EditLoremIpsum1->Text;
	PrototypeBindSource1->Next();
	for (int i = 0; i < 20; i++) {
		memo->Text = memo->Text + " Page  " + IntToStr(FCurPage) + " ";
	}
	memo->Text = memo->Text + EditLoremIpsum1->Text;
	PrototypeBindSource1->Next();
	memo->Text = memo->Text + EditLoremIpsum1->Text;
	PrototypeBindSource1->Next();
	FCurPage++;
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::FinishTurn()
{
	if (!Swipe->Enabled) return;
	if (SwipeAnimation->Enabled) return;

	SwipeAnimation->Path->Clear();
	SwipePoint->Position->Point = PointF(0, 0);
	SwipeAnimation->Path->MoveTo(Swipe->MousePoint);
	if (Swipe->MousePoint.X <= ClientWidth - ClientWidth / 4) {
		SwipeAnimation->Path->LineTo(PointF(Swipe->MousePoint.X / 2, 0));
		SwipeAnimation->Path->LineTo(PointF(0, 0));
	}
	else
	{
		SwipeAnimation->Path->LineTo(PointF(ClientWidth, 0));
	}
    SwipeAnimation->Start();
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::FormResize(TObject *Sender)
{
  Memo1->Width = ClientWidth / 2;
  Memo1->Height = ClientHeight;

  Memo2->Width = ClientWidth - Memo1->Width;
  Memo2->Position->X = Memo1->Width;
  Memo2->Height = ClientHeight;

  Memo4->Position = Memo2->Position;
  Memo4->Size->Width = Memo2->Size->Width;
  Memo4->Size->Height = Memo2->Size->Height;

  Memo3->Position = Memo1->Position;
  Memo3->Size->Width = Memo1->Size->Width;
  Memo3->Size->Height = Memo1->Size->Height;
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::LayoutGlassMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	TBitmap * vmemo;

	Swipe->MousePoint = PointF(X, Y);
	Swipe->Enabled = true;
	LayoutVirtual->BringToFront();
	vmemo = LayoutVirtual->MakeScreenshot();
	Swipe->Target->Assign(vmemo);
	vmemo->FlipHorizontal();
	Swipe->Back->Assign(vmemo);
	vmemo->Free();
	LayoutVisible->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::LayoutGlassMouseLeave(TObject *Sender)
{
	FinishTurn();
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::LayoutGlassMouseMove(TObject *Sender, TShiftState Shift,
          float X, float Y)
{
	if (Shift.Contains(ssLeft) ) {
        Swipe->MousePoint = PointF(X, Y);
	}
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::LayoutGlassMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, float X, float Y)
{
	FinishTurn();
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::SwipeAnimationFinish(TObject *Sender)
{
	SwipeAnimation->Enabled = False;
	Swipe->Enabled = False;
	if (Swipe->MousePoint.x < 1) {
		Memo1->Text = Memo3->Text;
		Memo2->Text = Memo4->Text;
		FillMemo(Memo3);
		FillMemo(Memo4);
	}
}
//---------------------------------------------------------------------------

void __fastcall TPageFlipform::SwipeAnimationProcess(TObject *Sender)
{
	Swipe->MousePoint = SwipePoint->Position->Point;
}
//---------------------------------------------------------------------------


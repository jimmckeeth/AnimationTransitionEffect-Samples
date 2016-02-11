//---------------------------------------------------------------------------

#ifndef PageTurnUnit1H
#define PageTurnUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.GenData.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <FMX.Ani.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TPageFlipform : public TForm
{
__published:	// IDE-managed Components
	TEdit *EditLoremIpsum1;
	TLayout *LayoutVirtual;
	TMemo *Memo3;
	TMemo *Memo4;
	TLayout *LayoutVisible;
	TMemo *Memo1;
	TMemo *Memo2;
	TLayout *LayoutGlass;
	TSelectionPoint *SwipePoint;
	TPathAnimation *SwipeAnimation;
	TPrototypeBindSource *PrototypeBindSource1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToFieldLoremIpsum1;
	TSwipeTransitionEffect *Swipe;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall LayoutGlassMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);
	void __fastcall LayoutGlassMouseLeave(TObject *Sender);
	void __fastcall LayoutGlassMouseMove(TObject *Sender, TShiftState Shift, float X,
          float Y);
	void __fastcall LayoutGlassMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          float X, float Y);
	void __fastcall SwipeAnimationFinish(TObject *Sender);
	void __fastcall SwipeAnimationProcess(TObject *Sender);

private:	// User declarations
	int FCurPage;
	void __fastcall TPageFlipform::FillMemo(TMemo *memo);
	void __fastcall TPageFlipform::FinishTurn();
public:		// User declarations
	__fastcall TPageFlipform(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPageFlipform *PageFlipform;
//---------------------------------------------------------------------------
#endif

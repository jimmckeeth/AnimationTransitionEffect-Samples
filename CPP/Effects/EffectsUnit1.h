//---------------------------------------------------------------------------

#ifndef EffectsUnit1H
#define EffectsUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TForm17 : public TForm
{
__published:	// IDE-managed Components
	TLayout *Layout1;
	TSmoothMagnifyEffect *SmoothMagnifyEffect1;
	TSwitch *Switch1;
	TGlowEffect *GlowEffect1;
	TShadowEffect *ShadowEffect2;
	TImage *Image1;
	TCheckBox *CheckBox1;
	TShadowEffect *ShadowEffect1;
	TLayout *Layout2;
	TCheckBox *CheckBox2;
	void __fastcall Layout2MouseMove(TObject *Sender, TShiftState Shift, float X, float Y);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall CheckBox2Change(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm17(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm17 *Form17;
//---------------------------------------------------------------------------
#endif

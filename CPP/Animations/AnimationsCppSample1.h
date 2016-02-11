//---------------------------------------------------------------------------

#ifndef AnimationsCppSample1H
#define AnimationsCppSample1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Colors.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Types.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TCheckBox *CheckBox1;
	TFloatAnimation *FloatAnimation1;
	TCheckBox *CheckBox2;
	TFloatAnimation *FloatAnimation2;
	TButton *Button1;
	TFloatAnimation *FloatAnimation3;
	TFloatAnimation *FloatAnimation4;
	TButton *Button2;
	TRectangle *Rectangle1;
	TColorPanel *ColorPanel1;
	TColorAnimation *ColorAnimation1;
	TBindingsList *BindingsList1;
	TLinkControlToProperty *LinkControlToPropertyStopValue;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Rectangle1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif

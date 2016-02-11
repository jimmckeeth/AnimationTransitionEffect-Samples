//---------------------------------------------------------------------------

#ifndef TransitionsUnit1H
#define TransitionsUnit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Effects.hpp>
#include <FMX.Filter.Effects.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.TabControl.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm31 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button2;
	TTabControl *TabControl1;
	TTabItem *TabItem1;
	TLayout *Tab1Layout;
	TButton *Button1;
	TEdit *Edit1;
	TCheckBox *CheckBox1;
	TProgressBar *ProgressBar1;
	TFloatAnimation *FloatAnimation2;
	TRotateCrumpleTransitionEffect *TransitionEffect1;
	TFloatAnimation *FloatAnimation1;
	TTabItem *TabItem2;
	TLayout *Tab2Layout;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TTrackBar *TrackBar1;
	TFloatAnimation *FloatAnimation3;
	TArcDial *ArcDial1;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FloatAnimation1Finish(TObject *Sender);
	void __fastcall FloatAnimation1Process(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm31(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm31 *Form31;
//---------------------------------------------------------------------------
#endif

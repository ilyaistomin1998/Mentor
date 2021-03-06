//---------------------------------------------------------------------------
#ifndef AngleH
#define AngleH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "quest12.h"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAngle : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TLabel *Label1;
        TEdit *Edit1;
        TLabel *Label2;
        TEdit *Edit2;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
    TGroupBox *GroupBox1;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    TLabel *Label3;
    TLabel *Label4;
    TEdit *Edit3;
    TEdit *Edit4;
    TBevel *Bevel1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
         quest12* quest;
        __fastcall TAngle(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAngle *Angle;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H


//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>

#include "WMPLib_OCX.h"
#include <ExtCtrls.hpp>
#include <OleCtrls.hpp>
#include <Dialogs.hpp>
#include <jpeg.hpp>
#include <Vcl.MPlayer.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TButton *Button2;
        TOpenDialog *OpenDialog1;
        TButton *Button3;
        TSaveDialog *SaveDialog1;
        TLabel *Label1;
        TButton *Button5;
	TWindowsMediaPlayer *WindowsMediaPlayer1;
	TImage *Image1;
	TButton *Button4;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);



private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif



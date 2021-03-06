//---------------------------------------------------------------------------

#ifndef LoginH
#define LoginH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TFLogin : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TEdit *EdtLogin;
    TLabel *Label2;
    TEdit *EdtSenha;
    TButton *BtnEntrar;
    TImage *Image1;
    TCheckBox *CkbAtenderOC;
    void __fastcall BtnEntrarClick(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TFLogin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFLogin *FLogin;
//---------------------------------------------------------------------------
extern int CDUSUARIO;
extern AnsiString NMUSUARIO;
extern AnsiString USUARIO;
extern bool ISADMINISTRADOR;
extern bool ATENDEROCORRENCIAS;

extern TColor COLOR_HEADER_FORM;
extern TColor COLOR_GRID_SELECTED_ROW;
extern TColor COLOR_GRID_ALTERNATE_ROW;
extern TColor COLOR_FIELD_FORM_FOCUS;
extern TColor COLOR_FIELD_FORM_OCORRENCIA_FOCUS;
#endif

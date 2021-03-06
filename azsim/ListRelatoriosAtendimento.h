//---------------------------------------------------------------------------

#ifndef ListRelatoriosAtendimentoH
#define ListRelatoriosAtendimentoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DB.hpp>
#include <DBClient.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>
#include <Provider.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFListRelatoriosAtendimento : public TForm
{
__published:	// IDE-managed Components
    TIBTransaction *IBTRelAtendimento;
    TIBQuery *IBQRelAtendimento;
    TDataSetProvider *DSPRelAtendimento;
    TClientDataSet *CDSRelAtendimento;
    TSpeedButton *BtnFechar;
    TPanel *pnlTituloOcorrencias;
    TSpeedButton *BtnEventos;
    TSpeedButton *BtnTotalEventosHora;
    TSpeedButton *BtnTotalEventosDia;
    TGroupBox *GroupBox2;
    TLabel *Label10;
    TLabel *Label11;
    TLabel *Label1;
    TDateTimePicker *EdtDataFinalTotais;
    TDateTimePicker *EdtDataInicialTotais;
    TGroupBox *GroupBox3;
    TLabel *Label12;
    TLabel *Label13;
    TLabel *Label14;
    TEdit *EdtCodClienteTotais;
    TEdit *EdtNomeTotais;
    TEdit *EdtCodificadorTotais;
    TGroupBox *GroupBox4;
    TLabel *Label16;
    TLabel *Label15;
    TEdit *EdtStatusDescricaoTotais;
    TEdit *EdtStatusTotais;
    TSpeedButton *BtnTotaisEventos;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall BtnFecharClick(TObject *Sender);
    void __fastcall BtnEventosClick(TObject *Sender);
    void __fastcall BtnTotalEventosHoraClick(TObject *Sender);
    void __fastcall BtnTotalEventosDiaClick(TObject *Sender);
    void __fastcall BtnTotaisEventosClick(TObject *Sender);
private:	// User declarations
    void __fastcall ConfiguraCriteriosSQL();
public:		// User declarations
    __fastcall TFListRelatoriosAtendimento(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFListRelatoriosAtendimento *FListRelatoriosAtendimento;
//---------------------------------------------------------------------------
#endif

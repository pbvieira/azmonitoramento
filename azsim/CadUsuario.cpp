//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CadUsuario.h"
#include "Login.h"
#include "DMApp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFCadUsuario *FCadUsuario;
//---------------------------------------------------------------------------
__fastcall TFCadUsuario::TFCadUsuario(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::FormCreate(TObject *Sender)
{
    try{
        DModule->CDSUsuario->Active = true;
        if(DModule->IBTUsuario->InTransaction)
            DModule->IBTUsuario->Commit();

        HabilitaBarraBotoes();
        HabilitaCamposFormulario(false);

    }catch(Exception &excecao){
        AnsiString erro = excecao.Message;
        String ErroNaConexao =
            "Ocorreu um erro ao abrir o formul�rio de usu�rio."
            "\n\nDescri��o do erro:\n" + erro;
        Application->MessageBox(ErroNaConexao.c_str(),"Aten��o",MB_ICONERROR|MB_OK);
    }

    ConfiguraEventosForm();
    ConfiguraCharCaseForm();
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::ChangeEnter(TObject *Sender)
{
    if(dynamic_cast <TDBEdit*> (Sender) != NULL){
        dynamic_cast <TDBEdit*> (Sender)->Color = COLOR_FIELD_FORM_FOCUS;

    } else if(dynamic_cast <TEdit*> (Sender) != NULL){
        dynamic_cast <TEdit*> (Sender)->Color = COLOR_FIELD_FORM_FOCUS;

    } else if(dynamic_cast <TDBLookupComboBox*> (Sender) != NULL){
        dynamic_cast <TDBLookupComboBox*> (Sender)->Color = COLOR_FIELD_FORM_FOCUS;

    } else if(dynamic_cast <TDBComboBox*> (Sender) != NULL){
        dynamic_cast <TDBComboBox*> (Sender)->Color = COLOR_FIELD_FORM_FOCUS;

    } else if(dynamic_cast <TDBMemo*> (Sender) != NULL){
        dynamic_cast <TDBMemo*> (Sender)->Color = COLOR_FIELD_FORM_FOCUS;
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::ChangeExit(TObject *Sender)
{
    if(dynamic_cast <TDBEdit*> (Sender) != NULL){
        TDBEdit *Edit = dynamic_cast <TDBEdit*> (Sender);
        Edit->Color = clWindow;

    }else if(dynamic_cast <TEdit*> (Sender) != NULL){
        TEdit *Edit = dynamic_cast <TEdit*> (Sender);
        Edit->Color = clWindow;

    } else if(dynamic_cast <TDBLookupComboBox*> (Sender) != NULL){
        TDBLookupComboBox *Combo = dynamic_cast <TDBLookupComboBox*> (Sender);
        Combo->Color = clWindow;

    } else if(dynamic_cast <TDBComboBox*> (Sender) != NULL){
        TDBComboBox *Combo = dynamic_cast <TDBComboBox*> (Sender);
        Combo->Color = clWindow;

    } else if(dynamic_cast <TDBMemo*> (Sender) != NULL){
        TDBMemo *Memo = dynamic_cast <TDBMemo*> (Sender);
        Memo->Color = clWindow;
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::HabilitaBarraBotoes(void)
{
    BtnNovo->Enabled = !(DModule->DSUsuario->State == dsInsert && DModule->DSUsuario->State == dsEdit);
    BtnGravar->Enabled = (DModule->DSUsuario->State == dsInsert || DModule->DSUsuario->State == dsEdit);
    BtnEditar->Enabled = (DModule->DSUsuario->State == dsBrowse);
    BtnDeletar->Enabled = (DModule->DSUsuario->State == dsBrowse || DModule->DSUsuario->State == dsEdit);
    BtnCancelar->Enabled = (DModule->DSUsuario->State == dsInsert || DModule->DSUsuario->State == dsEdit);
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::HabilitaCamposFormulario(bool Status)
{
    for(int i=0; i < ComponentCount; i++){
        if(dynamic_cast <TDBEdit*> (Components[i]) != NULL){
            dynamic_cast <TDBEdit*> (Components[i])->Enabled = Status;

        } else if(dynamic_cast <TEdit*> (Components[i]) != NULL){
            dynamic_cast <TEdit*> (Components[i])->Enabled = Status;

        } else if(dynamic_cast <TDBLookupComboBox*> (Components[i]) != NULL){
            dynamic_cast <TDBLookupComboBox*> (Components[i])->Enabled = Status;

        } else if(dynamic_cast <TDBComboBox*> (Components[i]) != NULL){
            dynamic_cast <TDBComboBox*> (Components[i])->Enabled = Status;

        } else if(dynamic_cast <TDBMemo*> (Components[i]) != NULL){
            dynamic_cast <TDBMemo*> (Components[i])->Enabled = Status;

        } else if(dynamic_cast <TDBCheckBox*> (Components[i]) != NULL){
            dynamic_cast <TDBCheckBox*> (Components[i])->Enabled = Status;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::ConfiguraCharCaseForm(void)
{
    for(int i=0; i < ComponentCount; i++){
        if(dynamic_cast <TDBEdit*> (Components[i]) != NULL){
            dynamic_cast <TDBEdit*> (Components[i])->CharCase = ecUpperCase;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::ConfiguraEventosForm(void)
{
    for(int i=0; i < ComponentCount; i++){
        if(dynamic_cast <TDBEdit*> (Components[i]) != NULL){
            dynamic_cast <TDBEdit*> (Components[i])->OnEnter = ChangeEnter;
            dynamic_cast <TDBEdit*> (Components[i])->OnExit = ChangeExit;
        }

         if(dynamic_cast <TEdit*> (Components[i]) != NULL){
            dynamic_cast <TEdit*> (Components[i])->OnEnter = ChangeEnter;
            dynamic_cast <TEdit*> (Components[i])->OnExit = ChangeExit;
        }

        if(dynamic_cast <TDBLookupComboBox*> (Components[i]) != NULL){
            dynamic_cast <TDBLookupComboBox*> (Components[i])->OnEnter = ChangeEnter;
            dynamic_cast <TDBLookupComboBox*> (Components[i])->OnExit = ChangeExit;
        }

        if(dynamic_cast <TDBComboBox*> (Components[i]) != NULL){
            dynamic_cast <TDBComboBox*> (Components[i])->OnEnter = ChangeEnter;
            dynamic_cast <TDBComboBox*> (Components[i])->OnExit = ChangeExit;
        }

        if(dynamic_cast <TDBMemo*> (Components[i]) != NULL){
            dynamic_cast <TDBMemo*> (Components[i])->OnEnter = ChangeEnter;
            dynamic_cast <TDBMemo*> (Components[i])->OnExit = ChangeExit;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::GeraUsuarioId(void)
{
    try{
        DModule->IBSPGenIdUsuario->ExecProc();
        int id = DModule->IBSPGenIdUsuario->ParamByName("ID")->AsInteger;
        DModule->CDSUsuarioCDUSUARIO->AsInteger = id;
        DModule->IBTGenIdUsuario->Commit();

    }catch(Exception &excecao){
        AnsiString erro = excecao.Message;
        String ErroNaConexao =
            "Ocorreu um erro ao gerar o c�digo do usu�rio."
            "\n\nDescri��o do erro:\n" + erro;
        Application->MessageBox(ErroNaConexao.c_str(),"Aten��o",MB_ICONERROR|MB_OK);
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnNovoClick(TObject *Sender)
{
    DModule->CDSUsuario->CancelUpdates();
    DModule->CDSUsuario->Append();

    HabilitaBarraBotoes();
    HabilitaCamposFormulario(true);
    EdtNmUsuario->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnGravarClick(TObject *Sender)
{
    if(DModule->CDSUsuario->State != dsEdit){
        DModule->CDSUsuario->Edit();
    }

    int Codigo = DModule->CDSUsuarioCDUSUARIO->AsInteger;
    if(Codigo == NULL){
        GeraUsuarioId();
    }

    DModule->CDSUsuario->Post();
    DModule->CDSUsuario->First();
    bool existeUmAdministrador = false;
    while(!DModule->CDSUsuario->Eof){
        if(DModule->CDSUsuarioISADMIN->AsInteger == 1){
            existeUmAdministrador = true;
        }
        DModule->CDSUsuario->Next();
    }

    if(!existeUmAdministrador){
        DModule->CDSUsuario->CancelUpdates();
        Application->MessageBox("Pelo menos um usu�rio deve possuir privil�gio de administrador!", "Aten��o", MB_ICONERROR|MB_OK);
        return;
    }

    DModule->CDSUsuario->ApplyUpdates(-1);
    Application->MessageBox("Cadastro realizado com sucesso", "Sucesso",MB_ICONINFORMATION|MB_OK);

    HabilitaBarraBotoes();
    HabilitaCamposFormulario(false);
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnEditarClick(TObject *Sender)
{
    DModule->CDSUsuario->Edit();
    HabilitaBarraBotoes();
    HabilitaCamposFormulario(true);
    EdtNmUsuario->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnCancelarClick(TObject *Sender)
{
    bool ConfirmaCancelamento = Application->MessageBox("Deseja cancelar as altera��es realizadas no cadastro?","Confirmar",
        MB_ICONINFORMATION|MB_YESNO) == IDYES;

    if(ConfirmaCancelamento){
        DModule->CDSUsuario->CancelUpdates();
        HabilitaBarraBotoes();
        HabilitaCamposFormulario(false);
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnDeletarClick(TObject *Sender)
{
    bool ConfirmaExclusao = Application->MessageBox("Deseja excluir o cadastro do usu�rio?","Confirmar",
        MB_ICONINFORMATION|MB_YESNO) == IDYES;

    if(ConfirmaExclusao){
        if(!DModule->CDSUsuario->IsEmpty()){
            int TotalUsuarios = DModule->CDSUsuario->RecordCount;
            if(TotalUsuarios == 1){
                Application->MessageBox("N�o � poss�vel excluir o �nico usu�rio do sistema!", "Aten��o", MB_ICONERROR|MB_OK);
                return;
            }

            DModule->CDSUsuario->Delete();
            DModule->CDSUsuario->ApplyUpdates(-1);
            DModule->CDSUsuario->Refresh();
            HabilitaBarraBotoes();
            HabilitaCamposFormulario(false);
        }
    }
}
//---------------------------------------------------------------------------
bool __fastcall TFCadUsuario::ValidaUsuario()
{
    try{
        String NmUsuario = DModule->CDSUsuarioNMUSUARIO->AsString;
        String Login = DModule->CDSUsuarioLOGIN->AsString;
        String Senha = DModule->CDSUsuarioSENHA->AsString;

        if(NmUsuario == "" || Login == "" || Senha == ""){
            String CamposObrigatorios =
            "Para realizar o cadastro voc� deve informar os campos "
            "obrigat�rios do usu�rio:\n"
            "Nome, Usu�rio e Senha.";

            Application->MessageBox(CamposObrigatorios.c_str(),
                "Aten��o",MB_ICONERROR|MB_OK);

            return false;
        }

        return true;

    }catch(Exception &excecao){
        AnsiString erro = excecao.Message;
        String ErroNaConexao =
            "Ocorreu um erro ao validar o cadastro do usu�rio."
            "\n\nDescri��o do erro:\n" + erro;
        Application->MessageBox(ErroNaConexao.c_str(),"Aten��o",MB_ICONERROR|MB_OK);
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    if(DModule->DSUsuario->State == dsInsert || DModule->DSUsuario->State == dsEdit) {
        Application->MessageBox("� necess�rio gravar ou cancelar antes de sair do formul�rio","",MB_ICONINFORMATION|MB_OK);
        Action = caNone;
    }else{
        try{
            DModule->CDSUsuario->Active = false;

        }catch(Exception &excecao){
            AnsiString erro = excecao.Message;
            String ErroNaConexao =
                "Ocorreu um erro ao fechar o formul�rio de usu�rios."
                "\n\nDescri��o do erro:\n" + erro;
            Application->MessageBox(ErroNaConexao.c_str(),"Aten��o",MB_ICONERROR|MB_OK);
        }
        Action = caFree;
    }
}
//---------------------------------------------------------------------------
void __fastcall TFCadUsuario::BtnFecharClick(TObject *Sender)
{
    Close();    
}
//---------------------------------------------------------------------------

void __fastcall TFCadUsuario::DBGUsuarioDrawColumnCell(TObject *Sender,
      const TRect &Rect, int DataCol, TColumn *Column,
      TGridDrawState State)
{
    if(DModule->CDSUsuario->RecNo % 2){
        (dynamic_cast <TDBGrid*> (Sender))->Canvas->Brush->Color = COLOR_GRID_ALTERNATE_ROW;
    }else{
        (dynamic_cast <TDBGrid*> (Sender))->Canvas->Brush->Color = clWindow;
    }

    if(State.Contains(gdSelected)){
        DBGUsuario->Canvas->Brush->Color = COLOR_GRID_SELECTED_ROW;
    }
    DBGUsuario->DefaultDrawColumnCell(Rect, DataCol, Column, State);
}
//---------------------------------------------------------------------------


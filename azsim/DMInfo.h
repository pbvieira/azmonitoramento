//---------------------------------------------------------------------------

#ifndef DMInfoH
#define DMInfoH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBClient.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBQuery.hpp>
#include <Provider.hpp>
//---------------------------------------------------------------------------
class TfdmInfo : public TDataModule
{
__published:	// IDE-managed Components
    TIBTransaction *IBTAlarmeAcidental;
    TIBQuery *IBQAlarmeAcidental;
    TIntegerField *IBQAlarmeAcidentalTOTAL;
    TIntegerField *IBQAlarmeAcidentalCDCLIENTE;
    TIBStringField *IBQAlarmeAcidentalNMCLIENTE;
    TIntegerField *IBQAlarmeAcidentalEQUIPAMENTO;
    TIBStringField *IBQAlarmeAcidentalDESUBTIPOOCORRENCIA;
    TIntegerField *IBQAlarmeAcidentalTOTAL_ATIVA;
    TIntegerField *IBQAlarmeAcidentalTOTAL_PENDENTE;
    TIntegerField *IBQAlarmeAcidentalTOTAL_REALIZADO;
    TDataSetProvider *DSPAlarmeAcidental;
    TClientDataSet *CDSAlarmeAcidental;
    TIntegerField *CDSAlarmeAcidentalTOTAL;
    TIntegerField *CDSAlarmeAcidentalCDCLIENTE;
    TStringField *CDSAlarmeAcidentalNMCLIENTE;
    TIntegerField *CDSAlarmeAcidentalEQUIPAMENTO;
    TStringField *CDSAlarmeAcidentalDESUBTIPOOCORRENCIA;
    TIntegerField *CDSAlarmeAcidentalTOTAL_ATIVA;
    TIntegerField *CDSAlarmeAcidentalTOTAL_PENDENTE;
    TIntegerField *CDSAlarmeAcidentalTOTAL_REALIZADO;
    TStringField *CDSAlarmeAcidentalOBSERVACAO;
    TDataSetField *CDSAlarmeAcidentalIBQCliConsLogEvento;
    TDataSetField *CDSAlarmeAcidentalIBQCliConsOcorrencia;
    TDataSetField *CDSAlarmeAcidentalIBQCliConsArmeDesarme;
    TDataSetField *CDSAlarmeAcidentalIBQCliConsOrdemServico;
    TDataSource *DSAlarmeAcidental;
    TDataSource *DSPresencaAnimais;
    TClientDataSet *CDSPresencaAnimais;
    TIntegerField *CDSPresencaAnimaisTOTAL;
    TIntegerField *CDSPresencaAnimaisCDCLIENTE;
    TStringField *CDSPresencaAnimaisNMCLIENTE;
    TIntegerField *CDSPresencaAnimaisEQUIPAMENTO;
    TStringField *CDSPresencaAnimaisDESUBTIPOOCORRENCIA;
    TIntegerField *CDSPresencaAnimaisTOTAL_ATIVA;
    TIntegerField *CDSPresencaAnimaisTOTAL_PENDENTE;
    TIntegerField *CDSPresencaAnimaisTOTAL_REALIZADO;
    TStringField *CDSPresencaAnimaisOBSERVACAO;
    TDataSetField *CDSPresencaAnimaisIBQCliConsLogEvento;
    TDataSetField *CDSPresencaAnimaisIBQCliConsOcorrencia;
    TDataSetField *CDSPresencaAnimaisIBQCliConsArmeDesarme;
    TDataSetField *CDSPresencaAnimaisIBQCliConsOrdemServico;
    TDataSetProvider *DSPPresencaAnimais;
    TIBQuery *IBQPresencaAnimais;
    TIntegerField *IBQPresencaAnimaisTOTAL;
    TIntegerField *IBQPresencaAnimaisCDCLIENTE;
    TIBStringField *IBQPresencaAnimaisNMCLIENTE;
    TIntegerField *IBQPresencaAnimaisEQUIPAMENTO;
    TIBStringField *IBQPresencaAnimaisDESUBTIPOOCORRENCIA;
    TIntegerField *IBQPresencaAnimaisTOTAL_ATIVA;
    TIntegerField *IBQPresencaAnimaisTOTAL_PENDENTE;
    TIntegerField *IBQPresencaAnimaisTOTAL_REALIZADO;
    TIBTransaction *IBTPresencaAnimais;
    TIBTransaction *IBTAgenteLocal;
    TIBQuery *IBQAgenteLocal;
    TIntegerField *IBQAgenteLocalTOTAL;
    TIntegerField *IBQAgenteLocalCDCLIENTE;
    TIBStringField *IBQAgenteLocalNMCLIENTE;
    TIntegerField *IBQAgenteLocalEQUIPAMENTO;
    TIBStringField *IBQAgenteLocalDESUBTIPOOCORRENCIA;
    TIntegerField *IBQAgenteLocalTOTAL_ATIVA;
    TIntegerField *IBQAgenteLocalTOTAL_PENDENTE;
    TIntegerField *IBQAgenteLocalTOTAL_REALIZADO;
    TDataSetProvider *DSPAgenteLocal;
    TClientDataSet *CDSAgenteLocal;
    TIntegerField *CDSAgenteLocalTOTAL;
    TIntegerField *CDSAgenteLocalCDCLIENTE;
    TStringField *CDSAgenteLocalNMCLIENTE;
    TIntegerField *CDSAgenteLocalEQUIPAMENTO;
    TStringField *CDSAgenteLocalDESUBTIPOOCORRENCIA;
    TIntegerField *CDSAgenteLocalTOTAL_ATIVA;
    TIntegerField *CDSAgenteLocalTOTAL_PENDENTE;
    TIntegerField *CDSAgenteLocalTOTAL_REALIZADO;
    TStringField *CDSAgenteLocalOBSERVACAO;
    TDataSetField *CDSAgenteLocalIBQCliConsLogEvento;
    TDataSetField *CDSAgenteLocalIBQCliConsOcorrencia;
    TDataSetField *CDSAgenteLocalIBQCliConsArmeDesarme;
    TDataSetField *CDSAgenteLocalIBQCliConsOrdemServico;
    TDataSource *DSAgenteLocal;
    TDataSource *DSSemEnergia;
    TClientDataSet *CDSSemEnergia;
    TIntegerField *CDSSemEnergiaTOTAL;
    TIntegerField *CDSSemEnergiaCDCLIENTE;
    TStringField *CDSSemEnergiaNMCLIENTE;
    TIntegerField *CDSSemEnergiaEQUIPAMENTO;
    TStringField *CDSSemEnergiaDESUBTIPOOCORRENCIA;
    TIntegerField *CDSSemEnergiaTOTAL_ATIVA;
    TIntegerField *CDSSemEnergiaTOTAL_PENDENTE;
    TIntegerField *CDSSemEnergiaTOTAL_REALIZADO;
    TDataSetField *CDSSemEnergiaIBQCliConsLogEvento;
    TDataSetField *CDSSemEnergiaIBQCliConsOcorrencia;
    TDataSetField *CDSSemEnergiaIBQCliConsArmeDesarme;
    TDataSetField *CDSSemEnergiaIBQCliConsOrdemServico;
    TStringField *CDSSemEnergiaOBSERVACAO;
    TDataSetProvider *DSPSemEnergia;
    TIBQuery *IBQSemEnergia;
    TIntegerField *IBQSemEnergiaTOTAL;
    TIntegerField *IBQSemEnergiaCDCLIENTE;
    TIBStringField *IBQSemEnergiaNMCLIENTE;
    TIntegerField *IBQSemEnergiaEQUIPAMENTO;
    TIBStringField *IBQSemEnergiaDESUBTIPOOCORRENCIA;
    TIntegerField *IBQSemEnergiaTOTAL_ATIVA;
    TIntegerField *IBQSemEnergiaTOTAL_PENDENTE;
    TIntegerField *IBQSemEnergiaTOTAL_REALIZADO;
    TIBTransaction *IBTSemEnergia;
    TIBTransaction *IBTMauContato;
    TIBQuery *IBQMauContato;
    TIntegerField *IBQMauContatoTOTAL;
    TIntegerField *IBQMauContatoCDCLIENTE;
    TIBStringField *IBQMauContatoNMCLIENTE;
    TIntegerField *IBQMauContatoEQUIPAMENTO;
    TIBStringField *IBQMauContatoDESUBTIPOOCORRENCIA;
    TIntegerField *IBQMauContatoTOTAL_ATIVA;
    TIntegerField *IBQMauContatoTOTAL_PENDENTE;
    TIntegerField *IBQMauContatoTOTAL_REALIZADO;
    TDataSetProvider *DSPMauContato;
    TClientDataSet *CDSMauContato;
    TIntegerField *CDSMauContatoTOTAL;
    TIntegerField *CDSMauContatoCDCLIENTE;
    TStringField *CDSMauContatoNMCLIENTE;
    TIntegerField *CDSMauContatoEQUIPAMENTO;
    TStringField *CDSMauContatoDESUBTIPOOCORRENCIA;
    TIntegerField *CDSMauContatoTOTAL_ATIVA;
    TIntegerField *CDSMauContatoTOTAL_PENDENTE;
    TIntegerField *CDSMauContatoTOTAL_REALIZADO;
    TStringField *CDSMauContatoOBSERVACAO;
    TDataSetField *CDSMauContatoIBQCliConsLogEvento;
    TDataSetField *CDSMauContatoIBQCliConsOcorrencia;
    TDataSetField *CDSMauContatoIBQCliConsArmeDesarme;
    TDataSetField *CDSMauContatoIBQCliConsOrdemServico;
    TDataSource *DSMauContato;
    TDataSource *DSCanalRFAberto;
    TClientDataSet *CDSCanalRFAberto;
    TIntegerField *CDSCanalRFAbertoTOTAL;
    TIntegerField *CDSCanalRFAbertoCDCLIENTE;
    TStringField *CDSCanalRFAbertoNMCLIENTE;
    TIntegerField *CDSCanalRFAbertoEQUIPAMENTO;
    TStringField *CDSCanalRFAbertoDESUBTIPOOCORRENCIA;
    TIntegerField *CDSCanalRFAbertoTOTAL_ATIVA;
    TIntegerField *CDSCanalRFAbertoTOTAL_PENDENTE;
    TIntegerField *CDSCanalRFAbertoTOTAL_REALIZADO;
    TStringField *CDSCanalRFAbertoOBSERVACAO;
    TDataSetField *CDSCanalRFAbertoIBQCliConsLogEvento;
    TDataSetField *CDSCanalRFAbertoIBQCliConsOcorrencia;
    TDataSetField *CDSCanalRFAbertoIBQCliConsArmeDesarme;
    TDataSetField *CDSCanalRFAbertoIBQCliConsOrdemServico;
    TDataSetProvider *DSPCanalRFAberto;
    TIBQuery *IBQCanalRFAberto;
    TIntegerField *IBQCanalRFAbertoTOTAL;
    TIntegerField *IBQCanalRFAbertoCDCLIENTE;
    TIBStringField *IBQCanalRFAbertoNMCLIENTE;
    TIntegerField *IBQCanalRFAbertoEQUIPAMENTO;
    TIBStringField *IBQCanalRFAbertoDESUBTIPOOCORRENCIA;
    TIntegerField *IBQCanalRFAbertoTOTAL_ATIVA;
    TIntegerField *IBQCanalRFAbertoTOTAL_PENDENTE;
    TIntegerField *IBQCanalRFAbertoTOTAL_REALIZADO;
    TIBTransaction *IBTCanalRFAberto;
    TIBTransaction *IBTRetiradaKit;
    TIBQuery *IBQRetiradaKit;
    TIntegerField *IBQRetiradaKitTOTAL;
    TIntegerField *IBQRetiradaKitCDCLIENTE;
    TIBStringField *IBQRetiradaKitNMCLIENTE;
    TIntegerField *IBQRetiradaKitEQUIPAMENTO;
    TIBStringField *IBQRetiradaKitDESUBTIPOOCORRENCIA;
    TIntegerField *IBQRetiradaKitTOTAL_ATIVA;
    TIntegerField *IBQRetiradaKitTOTAL_PENDENTE;
    TIntegerField *IBQRetiradaKitTOTAL_REALIZADO;
    TDataSetProvider *DSPRetiradaKit;
    TClientDataSet *CDSRetiradaKit;
    TIntegerField *CDSRetiradaKitTOTAL;
    TIntegerField *CDSRetiradaKitCDCLIENTE;
    TStringField *CDSRetiradaKitNMCLIENTE;
    TIntegerField *CDSRetiradaKitEQUIPAMENTO;
    TStringField *CDSRetiradaKitDESUBTIPOOCORRENCIA;
    TIntegerField *CDSRetiradaKitTOTAL_ATIVA;
    TIntegerField *CDSRetiradaKitTOTAL_PENDENTE;
    TIntegerField *CDSRetiradaKitTOTAL_REALIZADO;
    TStringField *CDSRetiradaKitOBSERVACAO;
    TDataSetField *CDSRetiradaKitIBQCliConsLogEvento;
    TDataSetField *CDSRetiradaKitIBQCliConsOcorrencia;
    TDataSetField *CDSRetiradaKitIBQCliConsArmeDesarme;
    TDataSetField *CDSRetiradaKitIBQCliConsOrdemServico;
    TDataSource *DSRetiradaKit;
    TDataSource *DSConsertoSistema;
    TClientDataSet *CDSConsertoSistema;
    TIntegerField *CDSConsertoSistemaTOTAL;
    TIntegerField *CDSConsertoSistemaCDCLIENTE;
    TStringField *CDSConsertoSistemaNMCLIENTE;
    TIntegerField *CDSConsertoSistemaEQUIPAMENTO;
    TStringField *CDSConsertoSistemaDESUBTIPOOCORRENCIA;
    TIntegerField *CDSConsertoSistemaTOTAL_ATIVA;
    TIntegerField *CDSConsertoSistemaTOTAL_PENDENTE;
    TIntegerField *CDSConsertoSistemaTOTAL_REALIZADO;
    TStringField *CDSConsertoSistemaOBSERVACAO;
    TDataSetField *CDSConsertoSistemaIBQCliConsLogEvento;
    TDataSetField *CDSConsertoSistemaIBQCliConsOcorrencia;
    TDataSetField *CDSConsertoSistemaIBQCliConsArmeDesarme;
    TDataSetField *CDSConsertoSistemaIBQCliConsOrdemServico;
    TDataSetProvider *DSPConsertoSistema;
    TIBQuery *IBQConsertoSistema;
    TIntegerField *IBQConsertoSistemaTOTAL;
    TIntegerField *IBQConsertoSistemaCDCLIENTE;
    TIBStringField *IBQConsertoSistemaNMCLIENTE;
    TIntegerField *IBQConsertoSistemaEQUIPAMENTO;
    TIBStringField *IBQConsertoSistemaDESUBTIPOOCORRENCIA;
    TIntegerField *IBQConsertoSistemaTOTAL_ATIVA;
    TIntegerField *IBQConsertoSistemaTOTAL_PENDENTE;
    TIntegerField *IBQConsertoSistemaTOTAL_REALIZADO;
    TIBTransaction *IBTConsertoSistema;
    TIBTransaction *IBTSensorIRContPreso;
    TIBQuery *IBQSensorIRContPreso;
    TIntegerField *IBQSensorIRContPresoTOTAL;
    TIntegerField *IBQSensorIRContPresoCDCLIENTE;
    TIBStringField *IBQSensorIRContPresoNMCLIENTE;
    TIntegerField *IBQSensorIRContPresoEQUIPAMENTO;
    TIBStringField *IBQSensorIRContPresoDESUBTIPOOCORRENCIA;
    TIntegerField *IBQSensorIRContPresoTOTAL_ATIVA;
    TIntegerField *IBQSensorIRContPresoTOTAL_PENDENTE;
    TIntegerField *IBQSensorIRContPresoTOTAL_REALIZADO;
    TDataSetProvider *DSPSensorIRContPreso;
    TClientDataSet *CDSSensorIRContPreso;
    TIntegerField *CDSSensorIRContPresoCDCLIENTE;
    TStringField *StringField3;
    TIntegerField *IntegerField6;
    TStringField *StringField4;
    TIntegerField *CDSSensorIRContPresoTOTAL;
    TIntegerField *CDSSensorIRContPresoTOTAL_ATIVA;
    TIntegerField *CDSSensorIRContPresoTOTAL_PENDENTE;
    TIntegerField *CDSSensorIRContPresoTOTAL_REALIZADO;
    TStringField *CDSSensorIRContPresoOBSERVACAO;
    TDataSetField *CDSSensorIRContPresoIBQCliConsLogEvento;
    TDataSetField *CDSSensorIRContPresoIBQCliConsOcorrencia;
    TDataSetField *CDSSensorIRContPresoIBQCliConsArmeDesarme;
    TDataSetField *CDSSensorIRContPresoIBQCliConsOrdemServico;
    TDataSource *DSSensorIRContPreso;
    TDataSource *DSBateriaFraca;
    TClientDataSet *CDSBateriaFraca;
    TIntegerField *CDSBateriaFracaCDCLIENTE;
    TStringField *StringField1;
    TIntegerField *IntegerField4;
    TStringField *StringField2;
    TIntegerField *CDSBateriaFracaTOTAL;
    TIntegerField *CDSBateriaFracaTOTAL_ATIVA;
    TIntegerField *CDSBateriaFracaTOTAL_PENDENTE;
    TIntegerField *CDSBateriaFracaTOTAL_REALIZADO;
    TStringField *CDSBateriaFracaOBSERVACAO;
    TDataSetField *CDSBateriaFracaIBQCliConsLogEvento;
    TDataSetField *CDSBateriaFracaIBQCliConsOcorrencia;
    TDataSetField *CDSBateriaFracaIBQCliConsArmeDesarme;
    TDataSetField *CDSBateriaFracaIBQCliConsOrdemServico;
    TDataSetProvider *DSPBateriaFraca;
    TIBQuery *IBQBateriaFraca;
    TIntegerField *IBQBateriaFracaTOTAL;
    TIntegerField *IBQBateriaFracaCDCLIENTE;
    TIBStringField *IBQBateriaFracaNMCLIENTE;
    TIntegerField *IBQBateriaFracaEQUIPAMENTO;
    TIBStringField *IBQBateriaFracaDESUBTIPOOCORRENCIA;
    TIntegerField *IBQBateriaFracaTOTAL_ATIVA;
    TIntegerField *IBQBateriaFracaTOTAL_PENDENTE;
    TIntegerField *IBQBateriaFracaTOTAL_REALIZADO;
    TIBTransaction *IBTBateriaFraca;
    TIBTransaction *IBTSetorCurto;
    TIBQuery *IBQSetorCurto;
    TIntegerField *IBQSetorCurtoCDCLIENTE;
    TIBStringField *IBQSetorCurtoNMCLIENTE;
    TIntegerField *IBQSetorCurtoEQUIPAMENTO;
    TIBStringField *IBQSetorCurtoDESUBTIPOOCORRENCIA;
    TIntegerField *IBQSetorCurtoTOTAL;
    TIntegerField *IBQSetorCurtoTOTAL_ATIVA;
    TIntegerField *IBQSetorCurtoTOTAL_PENDENTE;
    TIntegerField *IBQSetorCurtoTOTAL_REALIZADO;
    TDataSetProvider *DSPSetorCurto;
    TClientDataSet *CDSSetorCurto;
    TIntegerField *CDSSetorCurtoCDCLIENTE;
    TStringField *CDSSetorCurtoNMCLIENTE;
    TIntegerField *CDSSetorCurtoEQUIPAMENTO;
    TStringField *CDSSetorCurtoDESUBTIPOOCORRENCIA;
    TIntegerField *CDSSetorCurtoTOTAL;
    TIntegerField *CDSSetorCurtoTOTAL_ATIVA;
    TIntegerField *CDSSetorCurtoTOTAL_PENDENTE;
    TIntegerField *CDSSetorCurtoTOTAL_REALIZADO;
    TStringField *CDSSetorCurtoOBSERVACAO;
    TDataSetField *CDSSetorCurtoIBQCliConsLogEvento;
    TDataSetField *CDSSetorCurtoIBQCliConsOcorrencia;
    TDataSetField *CDSSetorCurtoIBQCliConsArmeDesarme;
    TDataSetField *CDSSetorCurtoIBQCliConsOrdemServico;
    TDataSource *DSSetorCurto;
    TDataSource *DSIdentifica;
    TClientDataSet *CDSIdentifica;
    TIntegerField *CDSIdentificaCDCLIENTE;
    TStringField *CDSIdentificaNMCLIENTE;
    TIntegerField *CDSIdentificaEQUIPAMENTO;
    TIntegerField *CDSIdentificaTOTAL;
    TStringField *CDSIdentificaPERCENTUAL;
    TIntegerField *CDSIdentificaTOTAL_ATIVA;
    TIntegerField *CDSIdentificaTOTAL_PENDENTE;
    TIntegerField *CDSIdentificaTOTAL_REALIZADO;
    TStringField *CDSIdentificaOBSERVACAO;
    TDataSetField *CDSIdentificaIBQCliConsOrdemServico;
    TDataSetField *CDSIdentificaIBQCliConsArmeDesarme;
    TDataSetField *CDSIdentificaIBQCliConsOcorrencia;
    TDataSetField *CDSIdentificaIBQCliConsLogEvento;
    TDataSetProvider *DSPIdentifica;
    TIBQuery *IBQIdentifica;
    TIntegerField *IBQIdentificaCDCLIENTE;
    TIBStringField *IBQIdentificaNMCLIENTE;
    TIntegerField *IBQIdentificaEQUIPAMENTO;
    TIntegerField *IBQIdentificaTOTAL;
    TIntegerField *IBQIdentificaTOTAL_ATIVA;
    TIntegerField *IBQIdentificaTOTAL_PENDENTE;
    TIntegerField *IBQIdentificaTOTAL_REALIZADO;
    TIBTransaction *IBTIdentifica;
    TIBTransaction *IBTIdentificaZero;
    TIBQuery *IBQIdentificaZero;
    TIntegerField *IBQIdentificaZeroCDCLIENTE;
    TIBStringField *IBQIdentificaZeroNMCLIENTE;
    TIntegerField *IBQIdentificaZeroEQUIPAMENTO;
    TIntegerField *IBQIdentificaZeroTOTAL;
    TIntegerField *IBQIdentificaZeroTOTAL_ATIVA;
    TIntegerField *IBQIdentificaZeroTOTAL_PENDENTE;
    TIntegerField *IBQIdentificaZeroTOTAL_REALIZADO;
    TDataSetProvider *DSPIdentificaZero;
    TClientDataSet *CDSIdentificaZero;
    TIntegerField *CDSIdentificaZeroCDCLIENTE;
    TStringField *CDSIdentificaZeroNMCLIENTE;
    TIntegerField *CDSIdentificaZeroEQUIPAMENTO;
    TIntegerField *CDSIdentificaZeroTOTAL;
    TStringField *CDSIdentificaZeroPERCENTUAL;
    TIntegerField *CDSIdentificaZeroTOTAL_ATIVA;
    TIntegerField *CDSIdentificaZeroTOTAL_PENDENTE;
    TIntegerField *CDSIdentificaZeroTOTAL_REALIZADO;
    TStringField *CDSIdentificaZeroOBSERVACAO;
    TDataSetField *CDSIdentificaZeroIBQCliConsArmeDesarme;
    TDataSetField *CDSIdentificaZeroIBQCliConsOrdemServico;
    TDataSetField *CDSIdentificaZeroIBQCliConsOcorrencia;
    TDataSetField *CDSIdentificaZeroIBQCliConsLogEvento;
    TDataSource *DSIdentificaZero;
    TIBTransaction *IBTSuspeitoLocal;
    TIBQuery *IBQSuspeitoLocal;
    TIntegerField *IBQSuspeitoLocalTOTAL;
    TIntegerField *IBQSuspeitoLocalCDCLIENTE;
    TIBStringField *IBQSuspeitoLocalNMCLIENTE;
    TIntegerField *IBQSuspeitoLocalEQUIPAMENTO;
    TIBStringField *IBQSuspeitoLocalDESUBTIPOOCORRENCIA;
    TIntegerField *IBQSuspeitoLocalTOTAL_ATIVA;
    TIntegerField *IBQSuspeitoLocalTOTAL_PENDENTE;
    TIntegerField *IBQSuspeitoLocalTOTAL_REALIZADO;
    TDataSetProvider *DSPSuspeitoLocal;
    TClientDataSet *CDSSuspeitoLocal;
    TIntegerField *CDSSuspeitoLocalTOTAL;
    TIntegerField *CDSSuspeitoLocalCDCLIENTE;
    TStringField *CDSSuspeitoLocalNMCLIENTE;
    TIntegerField *CDSSuspeitoLocalEQUIPAMENTO;
    TStringField *CDSSuspeitoLocalDESUBTIPOOCORRENCIA;
    TIntegerField *CDSSuspeitoLocalTOTAL_ATIVA;
    TIntegerField *CDSSuspeitoLocalTOTAL_PENDENTE;
    TIntegerField *CDSSuspeitoLocalTOTAL_REALIZADO;
    TStringField *CDSSuspeitoLocalOBSERVACAO;
    TDataSetField *CDSSuspeitoLocalIBQCliConsLogEvento;
    TDataSetField *CDSSuspeitoLocalIBQCliConsOcorrencia;
    TDataSetField *CDSSuspeitoLocalIBQCliConsArmeDesarme;
    TDataSetField *CDSSuspeitoLocalIBQCliConsOrdemServico;
    TDataSource *DSSuspeitoLocal;
    TDataSource *DSSinalArrombamento;
    TClientDataSet *CDSSinalArrombamento;
    TIntegerField *CDSSinalArrombamentoTOTAL;
    TIntegerField *CDSSinalArrombamentoCDCLIENTE;
    TStringField *CDSSinalArrombamentoNMCLIENTE;
    TIntegerField *CDSSinalArrombamentoEQUIPAMENTO;
    TStringField *CDSSinalArrombamentoDESUBTIPOOCORRENCIA;
    TIntegerField *CDSSinalArrombamentoTOTAL_ATIVA;
    TIntegerField *CDSSinalArrombamentoTOTAL_PENDENTE;
    TIntegerField *CDSSinalArrombamentoTOTAL_REALIZADO;
    TStringField *CDSSinalArrombamentoOBSERVACAO;
    TDataSetField *CDSSinalArrombamentoIBQCliConsLogEvento;
    TDataSetField *CDSSinalArrombamentoIBQCliConsOcorrencia;
    TDataSetField *CDSSinalArrombamentoIBQCliConsArmeDesarme;
    TDataSetField *CDSSinalArrombamentoIBQCliConsOrdemServico;
    TDataSetProvider *DSPSinalArrombamento;
    TIBQuery *IBQSinalArrombamento;
    TIntegerField *IntegerField1;
    TIntegerField *IntegerField2;
    TIBStringField *IBStringField1;
    TIntegerField *IntegerField3;
    TIBStringField *IBStringField2;
    TIntegerField *IntegerField5;
    TIntegerField *IntegerField7;
    TIntegerField *IntegerField8;
    TIBTransaction *IBTSinalArrombamento;
    TIBTransaction *IBTJanelaMalFechada;
    TIBQuery *IBQJanelaMalFechada;
    TIntegerField *IntegerField9;
    TIntegerField *IntegerField10;
    TIBStringField *IBStringField3;
    TIntegerField *IntegerField11;
    TIBStringField *IBStringField4;
    TIntegerField *IntegerField12;
    TIntegerField *IntegerField13;
    TIntegerField *IntegerField14;
    TDataSetProvider *DSPJanelaMalFechada;
    TClientDataSet *CDSJanelaMalFechada;
    TIntegerField *CDSJanelaMalFechadaTOTAL;
    TIntegerField *CDSJanelaMalFechadaCDCLIENTE;
    TStringField *CDSJanelaMalFechadaNMCLIENTE;
    TIntegerField *CDSJanelaMalFechadaEQUIPAMENTO;
    TStringField *CDSJanelaMalFechadaDESUBTIPOOCORRENCIA;
    TIntegerField *CDSJanelaMalFechadaTOTAL_ATIVA;
    TIntegerField *CDSJanelaMalFechadaTOTAL_PENDENTE;
    TIntegerField *CDSJanelaMalFechadaTOTAL_REALIZADO;
    TStringField *CDSJanelaMalFechadaOBSERVACAO;
    TDataSetField *CDSJanelaMalFechadaIBQCliConsLogEvento;
    TDataSetField *CDSJanelaMalFechadaIBQCliConsOcorrencia;
    TDataSetField *CDSJanelaMalFechadaIBQCliConsArmeDesarme;
    TDataSetField *CDSJanelaMalFechadaIBQCliConsOrdemServico;
    TDataSource *DSJanelaMalFechada;
    TDataSource *DSSinalIndesejado;
    TClientDataSet *CDSSinalIndesejado;
    TIntegerField *CDSSinalIndesejadoTOTAL;
    TIntegerField *CDSSinalIndesejadoCDCLIENTE;
    TStringField *CDSSinalIndesejadoNMCLIENTE;
    TIntegerField *CDSSinalIndesejadoEQUIPAMENTO;
    TStringField *CDSSinalIndesejadoDESUBTIPOOCORRENCIA;
    TIntegerField *CDSSinalIndesejadoTOTAL_ATIVA;
    TIntegerField *CDSSinalIndesejadoTOTAL_PENDENTE;
    TIntegerField *CDSSinalIndesejadoTOTAL_REALIZADO;
    TStringField *CDSSinalIndesejadoOBSERVACAO;
    TDataSetField *CDSSinalIndesejadoIBQCliConsLogEvento;
    TDataSetField *CDSSinalIndesejadoIBQCliConsOcorrencia;
    TDataSetField *CDSSinalIndesejadoIBQCliConsArmeDesarme;
    TDataSetField *CDSSinalIndesejadoIBQCliConsOrdemServico;
    TDataSetProvider *DSPSinalIndesejado;
    TIBQuery *IBQSinalIndesejado;
    TIntegerField *IBQSinalIndesejadoTOTAL;
    TIntegerField *IBQSinalIndesejadoCDCLIENTE;
    TIBStringField *IBQSinalIndesejadoNMCLIENTE;
    TIntegerField *IBQSinalIndesejadoEQUIPAMENTO;
    TIBStringField *IBQSinalIndesejadoDESUBTIPOOCORRENCIA;
    TIntegerField *IBQSinalIndesejadoTOTAL_ATIVA;
    TIntegerField *IBQSinalIndesejadoTOTAL_PENDENTE;
    TIntegerField *IBQSinalIndesejadoTOTAL_REALIZADO;
    TIBTransaction *IBTSinalIndesejado;
    TDataSource *DSMasterCliConsOrdemServico;
    TIBQuery *IBQCliConsOrdemServico;
    TIBStringField *IBQCliConsOrdemServicoSITUACAO;
    TIntegerField *IBQCliConsOrdemServicoCDORDEMSERVICO;
    TIntegerField *IBQCliConsOrdemServicoCDCLIENTE;
    TIBStringField *IBQCliConsOrdemServicoNMCLIENTE;
    TDateTimeField *IBQCliConsOrdemServicoDATACADASTRO;
    TIBStringField *IBQCliConsOrdemServicoDEORDEMSERVICO;
    TIntegerField *IBQCliConsOrdemServicoEQUIPAMENTO;
    TIBQuery *IBQCliConsArmeDesarme;
    TDateTimeField *IBQCliConsArmeDesarmeDATAEVENTO;
    TIntegerField *IBQCliConsArmeDesarmeCTX;
    TIntegerField *IBQCliConsArmeDesarmePORTACOM;
    TIntegerField *IBQCliConsArmeDesarmeEQUIPAMENTO;
    TIBStringField *IBQCliConsArmeDesarmeSTATUS;
    TIBStringField *IBQCliConsArmeDesarmeDESTATUS;
    TIntegerField *IBQCliConsArmeDesarmeCDCLIENTE;
    TIBStringField *IBQCliConsArmeDesarmeNMCLIENTE;
    TIBStringField *IBQCliConsArmeDesarmeENDERECO;
    TIBStringField *IBQCliConsArmeDesarmeCIDADE;
    TDataSource *DSMasterCliConsArmeDesarme;
    TClientDataSet *CDSCliConsArmeDesarme;
    TClientDataSet *CDSCliConsOrdemServico;
    TStringField *CDSCliConsOrdemServicoSITUACAO;
    TIntegerField *CDSCliConsOrdemServicoCDORDEMSERVICO;
    TIntegerField *CDSCliConsOrdemServicoCDCLIENTE;
    TStringField *CDSCliConsOrdemServicoNMCLIENTE;
    TDateTimeField *CDSCliConsOrdemServicoDATACADASTRO;
    TStringField *CDSCliConsOrdemServicoDEORDEMSERVICO;
    TIntegerField *CDSCliConsOrdemServicoEQUIPAMENTO;
    TDataSource *DSCliConsOrdemServico;
    TDataSource *DSCliConsArmeDesarme;
    TDataSource *DSMasterCliConsOcorrencia;
    TIBQuery *IBQCliConsOcorrencia;
    TIntegerField *IBQCliConsOcorrenciaCDOCORRENCIA;
    TDateTimeField *IBQCliConsOcorrenciaDATAEVENTO;
    TIntegerField *IBQCliConsOcorrenciaCTX;
    TIntegerField *IBQCliConsOcorrenciaPORTACOM;
    TIntegerField *IBQCliConsOcorrenciaEQUIPAMENTO;
    TIntegerField *IBQCliConsOcorrenciaCDCLIENTE;
    TIBStringField *IBQCliConsOcorrenciaNMCLIENTE;
    TIBStringField *IBQCliConsOcorrenciaENDERECO;
    TIBStringField *IBQCliConsOcorrenciaCIDADE;
    TIBStringField *IBQCliConsOcorrenciaSTATUS;
    TIBStringField *IBQCliConsOcorrenciaDESTATUS;
    TIBStringField *IBQCliConsOcorrenciaLOCAL;
    TIBStringField *IBQCliConsOcorrenciaRESUMO;
    TIBStringField *IBQCliConsOcorrenciaOPERADORABERTURA;
    TIBStringField *IBQCliConsOcorrenciaOPERADORENCERRAMENTO;
    TIBStringField *IBQCliConsOcorrenciaAGENTE;
    TIBBCDField *IBQCliConsOcorrenciaKMTOTALPERCORRIDO;
    TIBQuery *IBQCliConsLogEvento;
    TDateTimeField *IBQCliConsLogEventoDATAEVENTO;
    TIntegerField *IBQCliConsLogEventoCTX;
    TIntegerField *IBQCliConsLogEventoPORTACOM;
    TIntegerField *IBQCliConsLogEventoEQUIPAMENTO;
    TIBStringField *IBQCliConsLogEventoSTATUS;
    TIBStringField *IBQCliConsLogEventoDESTATUS;
    TIntegerField *IBQCliConsLogEventoCDCLIENTE;
    TIBStringField *IBQCliConsLogEventoNMCLIENTE;
    TIBStringField *IBQCliConsLogEventoENDERECO;
    TIBStringField *IBQCliConsLogEventoCIDADE;
    TDataSource *DSMasterCliConsLogEvento;
    TClientDataSet *CDSCliConsLogEvento;
    TDateTimeField *CDSCliConsLogEventoDATAEVENTO;
    TIntegerField *CDSCliConsLogEventoCTX;
    TIntegerField *CDSCliConsLogEventoPORTACOM;
    TIntegerField *CDSCliConsLogEventoEQUIPAMENTO;
    TStringField *CDSCliConsLogEventoSTATUS;
    TStringField *CDSCliConsLogEventoDESTATUS;
    TIntegerField *CDSCliConsLogEventoCDCLIENTE;
    TStringField *CDSCliConsLogEventoNMCLIENTE;
    TStringField *CDSCliConsLogEventoENDERECO;
    TStringField *CDSCliConsLogEventoCIDADE;
    TClientDataSet *CDSCliConsOcorrencia;
    TIntegerField *CDSCliConsOcorrenciaCDOCORRENCIA;
    TDateTimeField *CDSCliConsOcorrenciaDATAEVENTO;
    TIntegerField *CDSCliConsOcorrenciaCTX;
    TIntegerField *CDSCliConsOcorrenciaPORTACOM;
    TIntegerField *CDSCliConsOcorrenciaEQUIPAMENTO;
    TIntegerField *CDSCliConsOcorrenciaCDCLIENTE;
    TStringField *CDSCliConsOcorrenciaNMCLIENTE;
    TStringField *CDSCliConsOcorrenciaENDERECO;
    TStringField *CDSCliConsOcorrenciaCIDADE;
    TStringField *CDSCliConsOcorrenciaSTATUS;
    TStringField *CDSCliConsOcorrenciaDESTATUS;
    TStringField *CDSCliConsOcorrenciaLOCAL;
    TStringField *CDSCliConsOcorrenciaRESUMO;
    TStringField *CDSCliConsOcorrenciaOPERADORABERTURA;
    TStringField *CDSCliConsOcorrenciaOPERADORENCERRAMENTO;
    TStringField *CDSCliConsOcorrenciaAGENTE;
    TBCDField *CDSCliConsOcorrenciaKMTOTALPERCORRIDO;
    TDataSource *DSCliConsOcorrencia;
    TDataSource *DSCliConsLogEvento;
private:	// User declarations
public:		// User declarations
    __fastcall TfdmInfo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfdmInfo *fdmInfo;
//---------------------------------------------------------------------------
#endif

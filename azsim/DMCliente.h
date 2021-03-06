//---------------------------------------------------------------------------

#ifndef DMClienteH
#define DMClienteH
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
#include <IBStoredProc.hpp>
#include <Provider.hpp>
//---------------------------------------------------------------------------
class TDModuleCliente : public TDataModule
{
__published:	// IDE-managed Components
    TIBQuery *IBQContato;
    TIntegerField *IBQContatoCDCLIENTECONTATO;
    TIntegerField *IBQContatoCDCLIENTE;
    TIBStringField *IBQContatoNMCONTATO;
    TIntegerField *IBQContatoCDTIPOCONTATO;
    TIBStringField *IBQContatoPARENTESCO;
    TIBStringField *IBQContatoENDERECO;
    TIBStringField *IBQContatoBAIRRO;
    TIBStringField *IBQContatoCIDADE;
    TIBStringField *IBQContatoUF;
    TIBStringField *IBQContatoCEP;
    TIBStringField *IBQContatoOBSERVACAO;
    TIBStringField *IBQContatoFONE1;
    TIBStringField *IBQContatoFONE1OBS;
    TIBStringField *IBQContatoFONE2;
    TIBStringField *IBQContatoFONE2OBS;
    TIBStringField *IBQContatoFONE3;
    TIBStringField *IBQContatoFONE3OBS;
    TIBStringField *IBQContatoFONE4;
    TIBStringField *IBQContatoFONE4OBS;
    TIBStringField *IBQContatoSENHA;
    TIBStringField *IBQContatoCONTRASENHA;
    TDateField *IBQContatoDATANASCIMENTO;
    TClientDataSet *CDSContato;
    TIntegerField *CDSContatoCDCLIENTECONTATO;
    TIntegerField *CDSContatoCDCLIENTE;
    TStringField *CDSContatoNMCONTATO;
    TStringField *CDSContatoSENHA;
    TStringField *CDSContatoCONTRASENHA;
    TDateField *CDSContatoDATANASCIMENTO;
    TDataSource *DSContato;
    TIBTransaction *IBTGenIdContato;
    TIBStoredProc *IBSPGenIdContato;
    TIBQuery *IBQCliente;
    TIntegerField *IBQClienteCDCLIENTE;
    TIntegerField *IBQClienteCDFILIAL;
    TIBStringField *IBQClienteBAIRRO;
    TIBStringField *IBQClienteCEP;
    TIBStringField *IBQClienteCIDADE;
    TIBStringField *IBQClienteDOCUMENTO;
    TIBStringField *IBQClienteENDERECO;
    TIBStringField *IBQClienteINSCMUNICIPAL;
    TIBStringField *IBQClienteNMCLIENTE;
    TIBStringField *IBQClienteTPPESSOA;
    TIBStringField *IBQClienteUF;
    TIBStringField *IBQClientePROCEDIMENTOS;
    TIBStringField *IBQClientePONTOREF;
    TDateTimeField *IBQClienteDATACADASTRO;
    TDateTimeField *IBQClienteDATAALTERACAO;
    TIBBCDField *IBQClienteKMBASE;
    TIBTransaction *IBTCliente;
    TDataSetProvider *DSPCliente;
    TClientDataSet *CDSCliente;
    TIntegerField *CDSClienteCDCLIENTE;
    TIntegerField *CDSClienteCDFILIAL;
    TStringField *CDSClienteTPPESSOA;
    TStringField *CDSClienteDOCUMENTO;
    TStringField *CDSClienteINSCMUNICIPAL;
    TStringField *CDSClienteNMCLIENTE;
    TStringField *CDSClienteENDERECO;
    TStringField *CDSClienteBAIRRO;
    TStringField *CDSClienteCIDADE;
    TStringField *CDSClienteUF;
    TStringField *CDSClienteCEP;
    TStringField *CDSClientePROCEDIMENTOS;
    TStringField *CDSClientePONTOREF;
    TStringField *CDSClienteNMFILIAL;
    TDataSetField *CDSClienteIBQContato;
    TDateTimeField *CDSClienteDATACADASTRO;
    TDateTimeField *CDSClienteDATAALTERACAO;
    TBCDField *CDSClienteKMBASE;
    TDataSource *DSCliente;
    TIBTransaction *IBTGenIdCliente;
    TDataSource *DSLinkCliente;
    TIBStoredProc *IBSPGenIdCliente;
    TIBTransaction *IBTContrato;
    TIBQuery *IBQContrato;
    TDataSetProvider *DSPContrato;
    TClientDataSet *CDSContrato;
    TStringField *CDSContratoDETIPOCONTRATO;
    TStringField *CDSContratoDERECEITA;
    TStringField *CDSContratoDETIPOCOBRANCA;
    TStringField *CDSContratoDEMOTIVOCANCEL;
    TIntegerField *CDSContratoCDCLIENTE;
    TIntegerField *CDSContratoCDCODIFICADOR;
    TIntegerField *CDSContratoCDCONTRATO;
    TIntegerField *CDSContratoCDMOTIVOCANCEL;
    TIntegerField *CDSContratoCDRECEITA;
    TIntegerField *CDSContratoCDRECEITAITEM;
    TIntegerField *CDSContratoCDTIPOCOBRANCA;
    TIntegerField *CDSContratoCDTIPOCONTRATO;
    TStringField *CDSContratoCHAVE;
    TStringField *CDSContratoCONFCHAVE;
    TStringField *CDSContratoCONFLOCACAO;
    TDateTimeField *CDSContratoDATAALTERACAO;
    TDateField *CDSContratoDATAATIVACAO;
    TDateTimeField *CDSContratoDATACADASTRO;
    TDateField *CDSContratoDATAFINAL;
    TDateField *CDSContratoDATAINICIAL;
    TIntegerField *CDSContratoDIAREVISAO;
    TIntegerField *CDSContratoDIAVENCIMENTO;
    TStringField *CDSContratoINATIVO;
    TIntegerField *CDSContratoQTDPARCELAS;
    TIntegerField *CDSContratoTOLERANCIA;
    TBCDField *CDSContratoVALORATUAL;
    TBCDField *CDSContratoVALORINICIAL;
    TDataSource *DSContrato;
    TIBTransaction *IBTGenIdContrato;
    TIBStoredProc *IBSPGenIdContrato;
    TIBTransaction *IBTTipoContrato;
    TIBQuery *IBQTipoContrato;
    TIntegerField *IBQTipoContratoCDTIPOCONTRATO;
    TIBStringField *IBQTipoContratoDETIPOCONTRATO;
    TDataSetProvider *DSPTipoContrato;
    TClientDataSet *CDSTipoContrato;
    TIntegerField *CDSTipoContratoCDTIPOCONTRATO;
    TStringField *CDSTipoContratoDETIPOCONTRATO;
    TIBTransaction *IBTReceita;
    TIBQuery *IBQReceita;
    TIntegerField *IBQReceitaCDCONTRATORECEITA;
    TIBStringField *IBQReceitaDERECEITA;
    TDataSetProvider *DSPReceita;
    TClientDataSet *CDSReceita;
    TIntegerField *CDSReceitaCDCONTRATORECEITA;
    TStringField *CDSReceitaDERECEITA;
    TIBTransaction *IBTTipoCobranca;
    TIBQuery *IBQTipoCobranca;
    TIntegerField *IBQTipoCobrancaCDTIPOCOBRANCA;
    TIBStringField *IBQTipoCobrancaDETIPOCOBRANCA;
    TDataSetProvider *DSPTipoCobranca;
    TClientDataSet *CDSTipoCobranca;
    TIntegerField *CDSTipoCobrancaCDTIPOCOBRANCA;
    TStringField *CDSTipoCobrancaDETIPOCOBRANCA;
    TIBTransaction *IBTTipoContato;
    TIBQuery *IBQTipoContato;
    TIntegerField *IBQTipoContatoCDTIPOCONTATO;
    TIBStringField *IBQTipoContatoDETIPOCONTATO;
    TDataSetProvider *DSPTipoContato;
    TClientDataSet *CDSTipoContato;
    TIBStoredProc *IBSPProcedimento;
    TIBTransaction *IBTProcedimento;
    TIBQuery *IBQProcedimento;
    TIntegerField *IBQProcedimentoCDPROCEDIMENTO;
    TIBStringField *IBQProcedimentoDEPROCEDIMENTO;
    TDataSetProvider *DSPProcedimento;
    TDataSource *DSProcedimento;
    TIBTransaction *IBTGenIdProcedimento;
    TIBQuery *IBQSetor;
    TClientDataSet *CDSSetor;
    TDataSource *DSSetor;
    TIBQuery *IBQConsCliente;
    TDataSource *DSConsCliente;
    TIBTransaction *IBTConsCliente;
    TClientDataSet *CDSConsCliente;
    TDataSetProvider *DSPConsCliente;
    TIBQuery *IBQConsContrato;
    TDataSource *DSLinkConsCliente;
    TDataSource *DSConsContrato;
    TClientDataSet *CDSConsContrato;
    TIBQuery *IBQTipoCliente;
    TIntegerField *IBQTipoClienteCDTIPOCLIENTE;
    TIBStringField *IBQTipoClienteDETIPOCLIENTE;
    TIBTransaction *IBTTipoCliente;
    TDataSetProvider *DSPTipoCliente;
    TClientDataSet *CDSTipoCliente;
    TIntegerField *CDSTipoClienteCDTIPOCLIENTE;
    TStringField *CDSTipoClienteDETIPOCLIENTE;
    TIBTransaction *IBTMotivoCancel;
    TIBQuery *IBQMotivoCancel;
    TIntegerField *IBQMotivoCancelCDMOTIVOCANCEL;
    TIBStringField *IBQMotivoCancelDEMOTIVOCANCEL;
    TDataSetProvider *DSPMotivoCancel;
    TClientDataSet *CDSMotivoCancel;
    TIntegerField *CDSMotivoCancelCDMOTIVOCANCEL;
    TStringField *CDSMotivoCancelDEMOTIVOCANCEL;
    TClientDataSet *CDSProcedimento;
    TIntegerField *CDSProcedimentoCDPROCEDIMENTO;
    TStringField *CDSProcedimentoDEPROCEDIMENTO;
    TIBStringField *IBQClienteOBSERVACAO;
    TStringField *CDSClienteOBSERVACAO;
    TIBStringField *IBQClienteFONE1;
    TIBStringField *IBQClienteFONEOBS1;
    TIBStringField *IBQClienteFONE2;
    TIBStringField *IBQClienteFONEOBS2;
    TIBStringField *IBQClienteFONE3;
    TIBStringField *IBQClienteFONEOBS3;
    TIBStringField *IBQClienteFONE4;
    TIBStringField *IBQClienteFONEOBS4;
    TIBStringField *IBQClienteFONE5;
    TIBStringField *IBQClienteFONEOBS5;
    TIBStringField *IBQClienteFONE6;
    TIBStringField *IBQClienteFONEOBS6;
    TStringField *CDSClienteFONE1;
    TStringField *CDSClienteFONEOBS1;
    TStringField *CDSClienteFONE2;
    TStringField *CDSClienteFONEOBS2;
    TStringField *CDSClienteFONE3;
    TStringField *CDSClienteFONEOBS3;
    TStringField *CDSClienteFONE4;
    TStringField *CDSClienteFONEOBS4;
    TStringField *CDSClienteFONE5;
    TStringField *CDSClienteFONEOBS5;
    TStringField *CDSClienteFONE6;
    TStringField *CDSClienteFONEOBS6;
    TIBStringField *IBQContratoBAIRRO_MON;
    TIntegerField *IBQContratoCDCLIENTE;
    TIntegerField *IBQContratoCDCODIFICADOR;
    TIntegerField *IBQContratoCDCONTRATO;
    TIntegerField *IBQContratoCDMOTIVOCANCEL;
    TIntegerField *IBQContratoCDRECEITA;
    TIntegerField *IBQContratoCDRECEITAITEM;
    TIntegerField *IBQContratoCDTIPOCOBRANCA;
    TIntegerField *IBQContratoCDTIPOCONTRATO;
    TIBStringField *IBQContratoCEP_MON;
    TIBStringField *IBQContratoCHAVE;
    TIBStringField *IBQContratoCIDADE_MON;
    TIBStringField *IBQContratoCONFCHAVE;
    TIBStringField *IBQContratoCONFLOCACAO;
    TDateTimeField *IBQContratoDATAALTERACAO;
    TDateField *IBQContratoDATAATIVACAO;
    TDateTimeField *IBQContratoDATACADASTRO;
    TDateField *IBQContratoDATAFINAL;
    TDateField *IBQContratoDATAINICIAL;
    TIntegerField *IBQContratoDIAREVISAO;
    TIntegerField *IBQContratoDIAVENCIMENTO;
    TIBStringField *IBQContratoENDERECO_MON;
    TIBStringField *IBQContratoINATIVO;
    TIntegerField *IBQContratoQTDPARCELAS;
    TIntegerField *IBQContratoTOLERANCIA;
    TIBStringField *IBQContratoUF_MON;
    TIBBCDField *IBQContratoVALORATUAL;
    TIBBCDField *IBQContratoVALORINICIAL;
    TStringField *CDSContratoBAIRRO_MON;
    TStringField *CDSContratoCEP_MON;
    TStringField *CDSContratoCIDADE_MON;
    TStringField *CDSContratoENDERECO_MON;
    TStringField *CDSContratoUF_MON;
    TIBStringField *IBQConsContratoBAIRRO_MON;
    TIntegerField *IBQConsContratoCDCLIENTE;
    TIntegerField *IBQConsContratoCDCODIFICADOR;
    TIntegerField *IBQConsContratoCDCONTRATO;
    TIntegerField *IBQConsContratoCDMOTIVOCANCEL;
    TIntegerField *IBQConsContratoCDRECEITA;
    TIntegerField *IBQConsContratoCDRECEITAITEM;
    TIntegerField *IBQConsContratoCDTIPOCOBRANCA;
    TIntegerField *IBQConsContratoCDTIPOCONTRATO;
    TIBStringField *IBQConsContratoCEP_MON;
    TIBStringField *IBQConsContratoCHAVE;
    TIBStringField *IBQConsContratoCIDADE_MON;
    TIBStringField *IBQConsContratoCONFCHAVE;
    TIBStringField *IBQConsContratoCONFLOCACAO;
    TDateTimeField *IBQConsContratoDATAALTERACAO;
    TDateField *IBQConsContratoDATAATIVACAO;
    TDateTimeField *IBQConsContratoDATACADASTRO;
    TDateField *IBQConsContratoDATAFINAL;
    TDateField *IBQConsContratoDATAINICIAL;
    TIntegerField *IBQConsContratoDIAREVISAO;
    TIntegerField *IBQConsContratoDIAVENCIMENTO;
    TIBStringField *IBQConsContratoENDERECO_MON;
    TIBStringField *IBQConsContratoINATIVO;
    TIntegerField *IBQConsContratoQTDPARCELAS;
    TIntegerField *IBQConsContratoTOLERANCIA;
    TIBStringField *IBQConsContratoUF_MON;
    TIBBCDField *IBQConsContratoVALORATUAL;
    TIBBCDField *IBQConsContratoVALORINICIAL;
    TIntegerField *CDSConsContratoCDCODIFICADOR;
    TIntegerField *CDSConsContratoCDCONTRATO;
    TDataSource *DSLinkContrato;
    TIBStringField *IBQContratoMODELOCENTRAL;
    TIBStringField *IBQContratoLOCALINSTALCENTRAL;
    TIBStringField *IBQContratoOBSCENTRAL;
    TStringField *CDSContratoMODELOCENTRAL;
    TStringField *CDSContratoLOCALINSTALCENTRAL;
    TStringField *CDSContratoOBSCENTRAL;
    TDataSetField *CDSContratoIBQSetor;
    TIntegerField *IBQSetorCDCONTRATO;
    TIBStringField *IBQSetorLOCAL;
    TIntegerField *CDSSetorCDCONTRATO;
    TStringField *CDSSetorLOCAL;
    TIBTransaction *IBTConsOrdemServico;
    TIBQuery *IBQConsOrdemServico;
    TDataSetProvider *DSPConsOrdemServico;
    TDataSource *DSConsOrdemServico;
    TClientDataSet *CDSConsOrdemServico;
    TIntegerField *IBQSetorNUMSETOR;
    TIntegerField *CDSSetorNUMSETOR;
    TIntegerField *IBQConsOrdemServicoCDORDEMSERVICO;
    TIntegerField *IBQConsOrdemServicoCDCLIENTE;
    TIBStringField *IBQConsOrdemServicoNMCLIENTE;
    TDateTimeField *IBQConsOrdemServicoDATACADASTRO;
    TIBStringField *IBQConsOrdemServicoDEORDEMSERVICO;
    TIntegerField *CDSConsOrdemServicoCDORDEMSERVICO;
    TIntegerField *CDSConsOrdemServicoCDCLIENTE;
    TStringField *CDSConsOrdemServicoNMCLIENTE;
    TDateTimeField *CDSConsOrdemServicoDATACADASTRO;
    TStringField *CDSConsOrdemServicoDEORDEMSERVICO;
    TIBTransaction *IBTRelOrdemServico;
    TIBQuery *IBQRelOrdemServico;
    TDataSetProvider *DSPRelOrdemServico;
    TDataSource *DSRelOrdemServico;
    TClientDataSet *CDSRelOrdemServico;
    TIntegerField *IBQConsOrdemServicoEQUIPAMENTO;
    TIntegerField *CDSConsOrdemServicoEQUIPAMENTO;
    TIBStringField *IBQConsContratoMODELOCENTRAL;
    TIBStringField *IBQConsContratoLOCALINSTALCENTRAL;
    TStringField *CDSConsContratoMODELOCENTRAL;
    TStringField *CDSConsContratoLOCALINSTALCENTRAL;
    TIntegerField *IBQConsClienteCDCLIENTE;
    TIBStringField *IBQConsClienteNMCLIENTE;
    TIBStringField *IBQConsClienteCIDADE;
    TIBStringField *IBQConsClienteENDERECO;
    TIntegerField *CDSConsClienteCDCLIENTE;
    TStringField *CDSConsClienteNMCLIENTE;
    TStringField *CDSConsClienteCIDADE;
    TStringField *CDSConsClienteENDERECO;
    TDataSetField *CDSConsClienteIBQConsContrato;
        TIBStringField *IBQClienteFONE7;
        TIBStringField *IBQClienteFONEOBS7;
        TIBStringField *IBQClienteFONE8;
        TIBStringField *IBQClienteFONEOBS8;
        TStringField *CDSClienteFONE7;
        TStringField *CDSClienteFONEOBS7;
        TStringField *CDSClienteFONE8;
        TStringField *CDSClienteFONEOBS8;
        TIBStringField *IBQClienteNMFANTASIA;
        TStringField *CDSClienteNMFANTASIA;
        TIntegerField *IBQConsClienteCDFILIAL;
        TIBStringField *IBQConsClienteTPPESSOA;
        TIBStringField *IBQConsClienteNMFANTASIA;
        TIBStringField *IBQConsClienteDOCUMENTO;
        TIBStringField *IBQConsClienteINSCMUNICIPAL;
        TIBStringField *IBQConsClienteBAIRRO;
        TIBStringField *IBQConsClienteUF;
        TIBStringField *IBQConsClienteCEP;
        TIBStringField *IBQConsClientePONTOREF;
        TIBStringField *IBQConsClienteCHAVE;
        TIBBCDField *IBQConsClienteKMBASE;
        TIBStringField *IBQConsClienteOBSERVACAO;
        TIBStringField *IBQConsClientePROCEDIMENTOS;
        TDateTimeField *IBQConsClienteDATACADASTRO;
        TDateTimeField *IBQConsClienteDATAALTERACAO;
        TIBStringField *IBQConsClienteFONE1;
        TIBStringField *IBQConsClienteFONEOBS1;
        TIBStringField *IBQConsClienteFONE2;
        TIBStringField *IBQConsClienteFONEOBS2;
        TIBStringField *IBQConsClienteFONE3;
        TIBStringField *IBQConsClienteFONEOBS3;
        TIBStringField *IBQConsClienteFONE4;
        TIBStringField *IBQConsClienteFONEOBS4;
        TIBStringField *IBQConsClienteFONE5;
        TIBStringField *IBQConsClienteFONEOBS5;
        TIBStringField *IBQConsClienteFONE6;
        TIBStringField *IBQConsClienteFONEOBS6;
        TIBStringField *IBQConsClienteFONE7;
        TIBStringField *IBQConsClienteFONEOBS7;
        TIBStringField *IBQConsClienteFONE8;
        TIBStringField *IBQConsClienteFONEOBS8;
        TIntegerField *IBQConsClienteCDCONTRATO;
        TIntegerField *IBQConsClienteCDCODIFICADOR;
        TIBStringField *IBQConsClienteLOCALINSTALCENTRAL;
        TIBStringField *IBQConsClienteMODELOCENTRAL;
        TIntegerField *CDSConsClienteCDFILIAL;
        TStringField *CDSConsClienteTPPESSOA;
        TStringField *CDSConsClienteNMFANTASIA;
        TStringField *CDSConsClienteDOCUMENTO;
        TStringField *CDSConsClienteINSCMUNICIPAL;
        TStringField *CDSConsClienteBAIRRO;
        TStringField *CDSConsClienteUF;
        TStringField *CDSConsClienteCEP;
        TStringField *CDSConsClientePONTOREF;
        TStringField *CDSConsClienteCHAVE;
        TBCDField *CDSConsClienteKMBASE;
        TStringField *CDSConsClienteOBSERVACAO;
        TStringField *CDSConsClientePROCEDIMENTOS;
        TDateTimeField *CDSConsClienteDATACADASTRO;
        TDateTimeField *CDSConsClienteDATAALTERACAO;
        TIntegerField *CDSConsClienteCDCONTRATO;
        TIntegerField *CDSConsClienteCDCODIFICADOR;
        TStringField *CDSConsClienteLOCALINSTALCENTRAL;
        TStringField *CDSConsClienteMODELOCENTRAL;
    TIBStringField *IBQConsClienteNOME;
    TStringField *CDSConsClienteNOME;
    TDataSource *DSConsContato;
    TClientDataSet *CDSConsContato;
    TIBQuery *IBQConsContato;
    TIntegerField *IBQConsContatoCDCLIENTECONTATO;
    TIntegerField *IBQConsContatoCDCLIENTE;
    TIBStringField *IBQConsContatoNMCONTATO;
    TIntegerField *IBQConsContatoCDTIPOCONTATO;
    TIBStringField *IBQConsContatoPARENTESCO;
    TIBStringField *IBQConsContatoENDERECO;
    TIBStringField *IBQConsContatoBAIRRO;
    TIBStringField *IBQConsContatoCIDADE;
    TIBStringField *IBQConsContatoUF;
    TIBStringField *IBQConsContatoCEP;
    TIBStringField *IBQConsContatoFONE1;
    TIBStringField *IBQConsContatoFONE1OBS;
    TIBStringField *IBQConsContatoFONE2;
    TIBStringField *IBQConsContatoFONE2OBS;
    TIBStringField *IBQConsContatoFONE3;
    TIBStringField *IBQConsContatoFONE3OBS;
    TIBStringField *IBQConsContatoFONE4;
    TIBStringField *IBQConsContatoFONE4OBS;
    TIBStringField *IBQConsContatoOBSERVACAO;
    TIBStringField *IBQConsContatoSENHA;
    TIBStringField *IBQConsContatoCONTRASENHA;
    TDateField *IBQConsContatoDATANASCIMENTO;
    TDataSetField *CDSConsClienteIBQConsContato;
    TIntegerField *CDSConsContatoCDCLIENTECONTATO;
    TIntegerField *CDSConsContatoCDCLIENTE;
    TStringField *CDSConsContatoNMCONTATO;
    TIntegerField *CDSConsContatoCDTIPOCONTATO;
    TStringField *CDSConsContatoPARENTESCO;
    TStringField *CDSConsContatoENDERECO;
    TStringField *CDSConsContatoBAIRRO;
    TStringField *CDSConsContatoCIDADE;
    TStringField *CDSConsContatoUF;
    TStringField *CDSConsContatoCEP;
    TStringField *CDSConsContatoFONE1;
    TStringField *CDSConsContatoFONE1OBS;
    TStringField *CDSConsContatoFONE2;
    TStringField *CDSConsContatoFONE2OBS;
    TStringField *CDSConsContatoFONE3;
    TStringField *CDSConsContatoFONE3OBS;
    TStringField *CDSConsContatoFONE4;
    TStringField *CDSConsContatoFONE4OBS;
    TStringField *CDSConsContatoOBSERVACAO;
    TStringField *CDSConsContatoSENHA;
    TStringField *CDSConsContatoCONTRASENHA;
    TDateField *CDSConsContatoDATANASCIMENTO;
    TDataSource *DSConsSetores;
    TClientDataSet *CDSConsSetores;
    TIBQuery *IBQConsSetores;
    TIntegerField *IBQConsSetoresNUMSETOR;
    TIBStringField *IBQConsSetoresLOCAL;
    TIBStringField *IBQConsSetoresMODELOCENTRAL;
    TIBStringField *IBQConsSetoresLOCALINSTALCENTRAL;
    TIntegerField *CDSConsSetoresNUMSETOR;
    TStringField *CDSConsSetoresLOCAL;
    TStringField *CDSConsSetoresMODELOCENTRAL;
    TStringField *CDSConsSetoresLOCALINSTALCENTRAL;
    TDataSetField *CDSConsClienteIBQConsSetores;
    TStringField *CDSConsClienteFONE1;
    TStringField *CDSConsClienteFONEOBS1;
    TStringField *CDSConsClienteFONE2;
    TStringField *CDSConsClienteFONEOBS2;
    TStringField *CDSConsClienteFONE3;
    TStringField *CDSConsClienteFONEOBS3;
    TStringField *CDSConsClienteFONE4;
    TStringField *CDSConsClienteFONEOBS4;
    TStringField *CDSConsClienteFONE5;
    TStringField *CDSConsClienteFONEOBS5;
    TStringField *CDSConsClienteFONE6;
    TStringField *CDSConsClienteFONEOBS6;
    TStringField *CDSConsClienteFONE7;
    TStringField *CDSConsClienteFONEOBS7;
    TStringField *CDSConsClienteFONE8;
    TStringField *CDSConsClienteFONEOBS8;
    TIntegerField *IBQRelOrdemServicoCDORDEMSERVICO;
    TIntegerField *IBQRelOrdemServicoCDCLIENTE;
    TIBStringField *IBQRelOrdemServicoNMCLIENTE;
    TIntegerField *IBQRelOrdemServicoEQUIPAMENTO;
    TDateTimeField *IBQRelOrdemServicoDATACADASTRO;
    TIBStringField *IBQRelOrdemServicoDEORDEMSERVICO;
    TIntegerField *IBQRelOrdemServicoISRETRABALHO;
    TIBStringField *IBQRelOrdemServicoOBSERVACAO;
    TIBStringField *IBQRelOrdemServicoENDERECO;
    TIBStringField *IBQRelOrdemServicoBAIRRO;
    TIBStringField *IBQRelOrdemServicoCIDADE;
    TIBStringField *IBQRelOrdemServicoFONE1;
    TIBStringField *IBQRelOrdemServicoFONEOBS1;
    TIBStringField *IBQRelOrdemServicoFONE2;
    TIBStringField *IBQRelOrdemServicoFONEOBS2;
    TIBStringField *IBQRelOrdemServicoFONE3;
    TIBStringField *IBQRelOrdemServicoFONEOBS3;
    TIBStringField *IBQRelOrdemServicoFONE4;
    TIBStringField *IBQRelOrdemServicoFONEOBS4;
    TIBStringField *IBQRelOrdemServicoFONE5;
    TIBStringField *IBQRelOrdemServicoFONEOBS5;
    TIBStringField *IBQRelOrdemServicoFONE6;
    TIBStringField *IBQRelOrdemServicoFONEOBS6;
    TIBStringField *IBQRelOrdemServicoFONE7;
    TIBStringField *IBQRelOrdemServicoFONEOBS7;
    TIBStringField *IBQRelOrdemServicoFONE8;
    TIBStringField *IBQRelOrdemServicoFONEOBS8;
    TIntegerField *IBQRelOrdemServicoISORDEMENCERRADA;
    TIBStringField *IBQRelOrdemServicoMODELOCENTRAL;
    TIBStringField *IBQRelOrdemServicoLOCALINSTALCENTRAL;
    TIBStringField *IBQRelOrdemServicoOBSCENTRAL;
    TIntegerField *IBQRelOrdemServicoNUMSETOR;
    TIBStringField *IBQRelOrdemServicoLOCAL;
    TIntegerField *CDSRelOrdemServicoCDORDEMSERVICO;
    TIntegerField *CDSRelOrdemServicoCDCLIENTE;
    TStringField *CDSRelOrdemServicoNMCLIENTE;
    TIntegerField *CDSRelOrdemServicoEQUIPAMENTO;
    TDateTimeField *CDSRelOrdemServicoDATACADASTRO;
    TStringField *CDSRelOrdemServicoDEORDEMSERVICO;
    TIntegerField *CDSRelOrdemServicoISRETRABALHO;
    TStringField *CDSRelOrdemServicoOBSERVACAO;
    TStringField *CDSRelOrdemServicoENDERECO;
    TStringField *CDSRelOrdemServicoBAIRRO;
    TStringField *CDSRelOrdemServicoCIDADE;
    TStringField *CDSRelOrdemServicoFONE1;
    TStringField *CDSRelOrdemServicoFONEOBS1;
    TStringField *CDSRelOrdemServicoFONE2;
    TStringField *CDSRelOrdemServicoFONEOBS2;
    TStringField *CDSRelOrdemServicoFONE3;
    TStringField *CDSRelOrdemServicoFONEOBS3;
    TStringField *CDSRelOrdemServicoFONE4;
    TStringField *CDSRelOrdemServicoFONEOBS4;
    TStringField *CDSRelOrdemServicoFONE5;
    TStringField *CDSRelOrdemServicoFONEOBS5;
    TStringField *CDSRelOrdemServicoFONE6;
    TStringField *CDSRelOrdemServicoFONEOBS6;
    TStringField *CDSRelOrdemServicoFONE7;
    TStringField *CDSRelOrdemServicoFONEOBS7;
    TStringField *CDSRelOrdemServicoFONE8;
    TStringField *CDSRelOrdemServicoFONEOBS8;
    TIntegerField *CDSRelOrdemServicoISORDEMENCERRADA;
    TStringField *CDSRelOrdemServicoMODELOCENTRAL;
    TStringField *CDSRelOrdemServicoLOCALINSTALCENTRAL;
    TStringField *CDSRelOrdemServicoOBSCENTRAL;
    TIntegerField *CDSRelOrdemServicoNUMSETOR;
    TStringField *CDSRelOrdemServicoLOCAL;
    TIBBCDField *IBQClienteCDHABIL;
    TIBBCDField *IBQClienteCDCONDOR;
    TBCDField *CDSClienteCDHABIL;
    TBCDField *CDSClienteCDCONDOR;
    TIBBCDField *IBQConsClienteCDHABIL;
    TIBBCDField *IBQConsClienteCDCONDOR;
    TBCDField *CDSConsClienteCDHABIL;
    TBCDField *CDSConsClienteCDCONDOR;
    TIBTransaction *IBTRelNaoIdentificados;
    TDataSetProvider *DSPRelNaoIdentificados;
    TClientDataSet *CDSRelNaoIdentificados;
    TDataSource *DSRelNaoIdentificados;
    TIntegerField *CDSRelNaoIdentificadosCDCLIENTE;
    TStringField *CDSRelNaoIdentificadosNMCLIENTE;
    TIntegerField *CDSRelNaoIdentificadosCDCODIFICADOR;
    TDateTimeField *CDSRelNaoIdentificadosDATAULTIMOEVENTO;
    TStringField *CDSRelNaoIdentificadosULTIMOEVENTO;
    TIBQuery *IBQRelNaoIdentificados;
    void __fastcall CDSProcedimentoBeforePost(TDataSet *DataSet);
    void __fastcall CDSClienteBeforePost(TDataSet *DataSet);
    void __fastcall CDSContatoBeforePost(TDataSet *DataSet);
    void __fastcall CDSContratoBeforePost(TDataSet *DataSet);
    void __fastcall CDSContratoCDCLIENTEChange(TField *Sender);

private:	// User declarations
    void __fastcall GeraProcedimentoId(void);
    void __fastcall GeraClienteId(void);
    void __fastcall GeraContratoId(void);
    void __fastcall GeraContatoId(void);
    void __fastcall GeraCentralId(void);

public:		// User declarations
    __fastcall TDModuleCliente(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TDModuleCliente *DModuleCliente;
//---------------------------------------------------------------------------
#endif

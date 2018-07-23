//---------------------------------------------------------------------------

#ifndef DMOcorrenciaH
#define DMOcorrenciaH
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
#include <IBStoredProc.hpp>
//---------------------------------------------------------------------------
class TfdmOcorrencia : public TDataModule
{
__published:	// IDE-managed Components
    TDataSource *DSLinkCliente;
    TIBTransaction *IBTCliente;
    TDataSource *DSContato;
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
    TStringField *CDSContatoNMCONTATO;
    TIntegerField *CDSContatoCDTIPOCONTATO;
    TStringField *CDSContatoPARENTESCO;
    TStringField *CDSContatoFONE1;
    TStringField *CDSContatoFONE1OBS;
    TStringField *CDSContatoFONE2;
    TStringField *CDSContatoFONE2OBS;
    TStringField *CDSContatoFONE3;
    TStringField *CDSContatoFONE3OBS;
    TStringField *CDSContatoFONE4;
    TStringField *CDSContatoFONE4OBS;
    TStringField *CDSContatoSENHA;
    TStringField *CDSContatoCONTRASENHA;
    TDateField *CDSContatoDATANASCIMENTO;
    TDataSource *DSCliente;
    TIBQuery *IBQCliente;
    TIntegerField *IBQClienteCDCLIENTE;
    TIBStringField *IBQClienteNMCLIENTE;
    TIBStringField *IBQClienteENDERECO;
    TIBStringField *IBQClienteBAIRRO;
    TIBStringField *IBQClienteCIDADE;
    TIBStringField *IBQClientePONTOREF;
    TIBStringField *IBQClienteNMFANTASIA;
    TDataSetProvider *DSPCliente;
    TClientDataSet *CDSCliente;
    TIntegerField *CDSClienteCDCLIENTE;
    TStringField *CDSClienteNMCLIENTE;
    TStringField *CDSClienteENDERECO;
    TStringField *CDSClienteBAIRRO;
    TStringField *CDSClienteCIDADE;
    TStringField *CDSClientePONTOREF;
    TStringField *CDSClienteOBSERVACAO;
    TDataSetField *CDSClienteIBQContato;
    TStringField *CDSClienteNMFANTASIA;
    TClientDataSet *CDSAgente;
    TIntegerField *CDSAgenteCDUSUARIO;
    TStringField *CDSAgenteLOGIN;
    TDataSetProvider *DSPAgente;
    TIBQuery *IBQAgente;
    TIntegerField *IBQAgenteCDUSUARIO;
    TIBStringField *IBQAgenteLOGIN;
    TIBTransaction *IBTAgente;
    TIBTransaction *IBTOperador;
    TIBQuery *IBQOperador;
    TIntegerField *IntegerField9;
    TIBStringField *IBQOperadorLOGIN;
    TDataSetProvider *DSPOperador;
    TClientDataSet *CDSOperador;
    TIntegerField *IntegerField10;
    TStringField *CDSOperadorLOGIN;
    TIBTransaction *IBTSetores;
    TIBTransaction *IBTOcorrencia;
    TDataSource *DSSetores;
    TDataSource *DSOcorrencia;
    TIBQuery *IBQOcorrencia;
    TIntegerField *IBQOcorrenciaCDOCORRENCIA;
    TIntegerField *IBQOcorrenciaCDOCORRENCIAPAI;
    TIntegerField *IBQOcorrenciaPORTACOM;
    TIntegerField *IBQOcorrenciaNREVENTO;
    TIBStringField *IBQOcorrenciaTIPOCTX;
    TIntegerField *IBQOcorrenciaCTX;
    TIntegerField *IBQOcorrenciaEQUIPAMENTO;
    TIBStringField *IBQOcorrenciaSTATUS;
    TIBStringField *IBQOcorrenciaDESTATUS;
    TIntegerField *IBQOcorrenciaNUMSETOR;
    TIBStringField *IBQOcorrenciaLOCAL;
    TIntegerField *IBQOcorrenciaCDCLIENTE;
    TIntegerField *IBQOcorrenciaCDORDEMSERVICO;
    TDateTimeField *IBQOcorrenciaDATACADASTRO;
    TDateTimeField *IBQOcorrenciaDATAEVENTO;
    TDateTimeField *IBQOcorrenciaDATAATENDIMENTO;
    TIntegerField *IBQOcorrenciaCDAGENTE;
    TIntegerField *IBQOcorrenciaCDOPERADORABERTURA;
    TIntegerField *IBQOcorrenciaCDOPERADORENCERRAMENTO;
    TTimeField *IBQOcorrenciaHORASAIDAEMP;
    TTimeField *IBQOcorrenciaHORASAIDALOCAL;
    TTimeField *IBQOcorrenciaHORAABERTURALACRE;
    TIBBCDField *IBQOcorrenciaKMSAIDA;
    TTimeField *IBQOcorrenciaHORACHEGADALOCAL;
    TTimeField *IBQOcorrenciaHORACHEGADAEMP;
    TIBStringField *IBQOcorrenciaLACRE;
    TIBBCDField *IBQOcorrenciaKMRETORNO;
    TTimeField *IBQOcorrenciaTEMPODESOLOCAMENTO;
    TTimeField *IBQOcorrenciaTEMPORETORNO;
    TTimeField *IBQOcorrenciaTEMPOATENDIMENTO;
    TIBBCDField *IBQOcorrenciaKMTOTALPERCORRIDO;
    TIBStringField *IBQOcorrenciaRESUMO;
    TIntegerField *IBQOcorrenciaCDTIPOOCORRENCIA;
    TIntegerField *IBQOcorrenciaCDSUBTIPOOCORRENCIA;
    TIBStringField *IBQOcorrenciaOCORRENCIAPOLICIAL;
    TIntegerField *IBQOcorrenciaISOCORRENCIAPOLICIAL;
    TDateTimeField *IBQOcorrenciaDATAENCERRAMENTO;
    TIntegerField *IBQOcorrenciaISOCORRENCIAENCERRADA;
    TIBStringField *IBQOcorrenciaCHAVE;
    TIBQuery *IBQSetores;
    TIBStringField *IBQSetoresLOCAL;
    TIntegerField *IBQSetoresNUMSETOR;
    TDataSetProvider *DSPSetores;
    TDataSetProvider *DSPOcorrencia;
    TClientDataSet *CDSOcorrencia;
    TIntegerField *CDSOcorrenciaCDOCORRENCIA;
    TIntegerField *CDSOcorrenciaCDOCORRENCIAPAI;
    TIntegerField *CDSOcorrenciaPORTACOM;
    TIntegerField *CDSOcorrenciaNREVENTO;
    TStringField *CDSOcorrenciaTIPOCTX;
    TIntegerField *CDSOcorrenciaCTX;
    TIntegerField *CDSOcorrenciaEQUIPAMENTO;
    TStringField *CDSOcorrenciaSTATUS;
    TStringField *CDSOcorrenciaDESTATUS;
    TIntegerField *CDSOcorrenciaNUMSETOR;
    TStringField *CDSOcorrenciaLOCAL;
    TIntegerField *CDSOcorrenciaCDCLIENTE;
    TIntegerField *CDSOcorrenciaCDORDEMSERVICO;
    TDateTimeField *CDSOcorrenciaDATACADASTRO;
    TDateTimeField *CDSOcorrenciaDATAEVENTO;
    TDateTimeField *CDSOcorrenciaDATAATENDIMENTO;
    TIntegerField *CDSOcorrenciaCDAGENTE;
    TIntegerField *CDSOcorrenciaCDOPERADORABERTURA;
    TIntegerField *CDSOcorrenciaCDOPERADORENCERRAMENTO;
    TTimeField *CDSOcorrenciaHORASAIDAEMP;
    TTimeField *CDSOcorrenciaHORASAIDALOCAL;
    TTimeField *CDSOcorrenciaHORAABERTURALACRE;
    TBCDField *CDSOcorrenciaKMSAIDA;
    TTimeField *CDSOcorrenciaHORACHEGADALOCAL;
    TTimeField *CDSOcorrenciaHORACHEGADAEMP;
    TStringField *CDSOcorrenciaLACRE;
    TBCDField *CDSOcorrenciaKMRETORNO;
    TTimeField *CDSOcorrenciaTEMPODESOLOCAMENTO;
    TTimeField *CDSOcorrenciaTEMPORETORNO;
    TTimeField *CDSOcorrenciaTEMPOATENDIMENTO;
    TBCDField *CDSOcorrenciaKMTOTALPERCORRIDO;
    TStringField *CDSOcorrenciaRESUMO;
    TIntegerField *CDSOcorrenciaCDTIPOOCORRENCIA;
    TIntegerField *CDSOcorrenciaCDSUBTIPOOCORRENCIA;
    TStringField *CDSOcorrenciaOCORRENCIAPOLICIAL;
    TIntegerField *CDSOcorrenciaISOCORRENCIAPOLICIAL;
    TDateTimeField *CDSOcorrenciaDATAENCERRAMENTO;
    TIntegerField *CDSOcorrenciaISOCORRENCIAENCERRADA;
    TStringField *CDSOcorrenciaCHAVE;
    TStringField *CDSOcorrenciaNMAGENTE;
    TStringField *CDSOcorrenciaNMOPERADORA;
    TStringField *CDSOcorrenciaDETIPOOCORRENCIA;
    TStringField *CDSOcorrenciaDESUBTIPOOCORRENCIA;
    TClientDataSet *CDSSetores;
    TStringField *CDSSetoresLOCAL;
    TIntegerField *CDSSetoresNUMSETOR;
    TIBStoredProc *IBSPGenIdOcorrencia;
    TIBTransaction *IBTGenIdOcorrencia;
    TIBTransaction *IBTSubTipoOcorrencia;
    TIBTransaction *IBTTipoOcorrencia;
    TIBQuery *IBQTipoOcorrencia;
    TIntegerField *IBQTipoOcorrenciaCDTIPOOCORRENCIA;
    TIBStringField *IBQTipoOcorrenciaDETIPOOCORRENCIA;
    TIBQuery *IBQSubTipoOcorrencia;
    TIntegerField *IBQSubTipoOcorrenciaCDSUBTIPOOCORRENCIA;
    TIntegerField *IBQSubTipoOcorrenciaCDTIPOOCORRENCIA;
    TIBStringField *IBQSubTipoOcorrenciaDESUBTIPOOCORRENCIA;
    TDataSetProvider *DSPSubTipoOcorrencia;
    TDataSetProvider *DSPTipoOcorrencia;
    TClientDataSet *CDSTipoOcorrencia;
    TIntegerField *CDSTipoOcorrenciaCDTIPOOCORRENCIA;
    TStringField *CDSTipoOcorrenciaDETIPOOCORRENCIA;
    TClientDataSet *CDSSubTipoOcorrencia;
    TIntegerField *CDSSubTipoOcorrenciaCDSUBTIPOOCORRENCIA;
    TIntegerField *CDSSubTipoOcorrenciaCDTIPOOCORRENCIA;
    TStringField *CDSSubTipoOcorrenciaDESUBTIPOOCORRENCIA;
    TDataSource *DSProcedimeto;
    TIBTransaction *IBTProcedimento;
    TIBQuery *IBQProcedimeto;
    TIntegerField *IBQProcedimetoCDCLIENTE;
    TIBStringField *IBQProcedimetoPROCEDIMENTOS;
    TDataSetProvider *DSPProcedimento;
    TClientDataSet *CDSProcedimento;
    TIntegerField *CDSProcedimentoCDCLIENTE;
    TStringField *CDSProcedimentoPROCEDIMENTOS;
    TIBStringField *IBQSetoresMODELOCENTRAL;
    TIBStringField *IBQSetoresLOCALINSTALCENTRAL;
    TStringField *CDSSetoresMODELOCENTRAL;
    TStringField *CDSSetoresLOCALINSTALCENTRAL;
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
    TIBStringField *IBQClienteFONE7;
    TIBStringField *IBQClienteFONEOBS7;
    TIBStringField *IBQClienteFONE8;
    TIBStringField *IBQClienteFONEOBS8;
    TIBStringField *IBQClienteOBSERVACAO;
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
    TStringField *CDSClienteFONE7;
    TStringField *CDSClienteFONEOBS7;
    TStringField *CDSClienteFONE8;
    TStringField *CDSClienteFONEOBS8;
    void __fastcall DSPOcorrenciaGetTableName(TObject *Sender,
          TDataSet *DataSet, AnsiString &TableName);
private:	// User declarations
public:		// User declarations
    __fastcall TfdmOcorrencia(TComponent* Owner);
    
};
//---------------------------------------------------------------------------
extern PACKAGE TfdmOcorrencia *fdmOcorrencia;
//---------------------------------------------------------------------------
#endif

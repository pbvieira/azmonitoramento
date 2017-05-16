//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Home.cpp", FHome);
USEFORM("DMApp.cpp", DModule); /* TDataModule: File Type */
USEFORM("CadCliente.cpp", FCadCliente);
USEFORM("CadContrato.cpp", FCadContrato);
USEFORM("ConsCliente.cpp", FConsCliente);
USEFORM("Ocorrencia.cpp", FOcorrencia);
USEFORM("CadProcedimento.cpp", FCadProcedimento);
USEFORM("CadFilial.cpp", FCadFilial);
USEFORM("CadUsuario.cpp", FCadUsuario);
USEFORM("Login.cpp", FLogin);
USEFORM("CadMonitoramento.cpp", FCadMonitoramento);
USEFORM("DMCliente.cpp", DModuleCliente); /* TDataModule: File Type */
USEFORM("CadSenhas.cpp", FCadSenha);
USEFORM("CadClienteProcedimento.cpp", FCadClienteProcedimento);
USEFORM("CadContratoBasico.cpp", FCadContratoBasico);
USEFORM("FaltaComunicacaoCTX.cpp", FAvisoFaltaComunicacaoCTX);
USEFORM("RelTopEventos.cpp", QRPTopEventos); /* TQuickRep: File Type */
USEFORM("ListRelatoriosAtendimento.cpp", FListRelatoriosAtendimento);
USEFORM("RelTopEventosClienteHora.cpp", QRPTopEventosClienteHora); /* TQuickRep: File Type */
USEFORM("RelTopEventosClienteData.cpp", QRPTopEventosClienteData); /* TQuickRep: File Type */
USEFORM("RelEventosClienteDataHora.cpp", QRPEventosClienteDataHora); /* TQuickRep: File Type */
USEFORM("BufferResumoOcorrencias.cpp", FBufferResumoOcorrencias);
USEFORM("RelOcorrenciasEncerradas.cpp", QRPOcorrenciasEncerradas); /* TQuickRep: File Type */
USEFORM("CadOrdemServico.cpp", FCadOrdemServico);
USEFORM("ConsOrdemServico.cpp", FConsOrdemServico);
USEFORM("RelOrdemServicos.cpp", QRPOrdemServicos); /* TQuickRep: File Type */
USEFORM("CadBase.cpp", FCadBase);
USEFORM("CadCodificadores.cpp", FCadCodificadores);
USEFORM("RelClientes.cpp", QRPClientes); /* TQuickRep: File Type */
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->Title = "AZSIM - Sistema Integrado de Monitoramento - Vers�o 1.0.0.33";
         Application->CreateForm(__classid(TFLogin), &FLogin);
         Application->CreateForm(__classid(TDModule), &DModule);
         Application->CreateForm(__classid(TDModuleCliente), &DModuleCliente);
         Application->Run();
   }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    catch (...)
    {
         try
         {
             throw Exception("");
         }
         catch (Exception &exception)
         {
             Application->ShowException(&exception);
         }
    }
    return 0;
}
//---------------------------------------------------------------------------

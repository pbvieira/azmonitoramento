object FCadContratoBasico: TFCadContratoBasico
  Left = 859
  Top = 134
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'AZSIM'
  ClientHeight = 563
  ClientWidth = 499
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PMenu: TPanel
    Left = 0
    Top = 526
    Width = 499
    Height = 37
    Align = alBottom
    BevelOuter = bvNone
    TabOrder = 0
    object POperacoes: TPanel
      Left = 0
      Top = 0
      Width = 500
      Height = 37
      Align = alLeft
      BevelOuter = bvNone
      TabOrder = 0
      object TBOperacoes: TToolBar
        Left = 0
        Top = 0
        Width = 500
        Height = 36
        AutoSize = True
        ButtonHeight = 36
        ButtonWidth = 55
        Caption = 'TBOperacoes'
        EdgeInner = esNone
        EdgeOuter = esNone
        Flat = True
        Images = DModule.ILForm12
        ShowCaptions = True
        TabOrder = 0
        object BtnNovo: TToolButton
          Left = 0
          Top = 0
          Caption = '&Novo'
          ImageIndex = 0
          OnClick = BtnNovoClick
        end
        object BtnGravar: TToolButton
          Left = 55
          Top = 0
          Caption = '&Gravar'
          ImageIndex = 1
          OnClick = BtnGravarClick
        end
        object BtnEditar: TToolButton
          Left = 110
          Top = 0
          Caption = '&Editar'
          ImageIndex = 2
          OnClick = BtnEditarClick
        end
        object BtnCancelar: TToolButton
          Left = 165
          Top = 0
          Caption = 'C&ancelar'
          ImageIndex = 3
          OnClick = BtnCancelarClick
        end
        object BtnDeletar: TToolButton
          Left = 220
          Top = 0
          Caption = 'E&xcluir'
          ImageIndex = 4
          OnClick = BtnDeletarClick
        end
        object BtnVoltar: TToolButton
          Left = 275
          Top = 0
          Caption = 'Voltar'
          ImageIndex = 6
          OnClick = BtnVoltarClick
        end
        object BtnAvancar: TToolButton
          Left = 330
          Top = 0
          Caption = 'Avan'#231'ar'
          ImageIndex = 7
          OnClick = BtnAvancarClick
        end
      end
    end
    object PFechar: TPanel
      Left = 442
      Top = 0
      Width = 57
      Height = 37
      Align = alRight
      BevelOuter = bvNone
      TabOrder = 1
      object BtnFechar: TSpeedButton
        Left = 8
        Top = 1
        Width = 49
        Height = 36
        Flat = True
        Glyph.Data = {
          36030000424D3603000000000000360000002800000010000000100000000100
          1800000000000003000000000000000000000000000000000000FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAD6B2CE1A53CE7C690F3E1C4F9F1
          E3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE5CEBBB6
          B7BA975C1ADF9C1FCC891BCD8A1BCD8A1BD7A24AE6BF74E5CEB8FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFB36624121019804A09E39C20CB891CCD8A1CCD8A
          1CCC891CD6941CAC641DFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC77C2D13
          111A864F09E49A21CD8A1DCF8B1DCF8B1DCE8A1DD8941BB4702BFFFFFFFFFFFF
          FFFFFFFEFEFF2121CBFFFFFFD7924114111B8A530BE69E22CE8C1FCF8D1FCF8D
          1FCE8C1FD6941DB77430FFFFFFFFFFFFFFFFFFFFFFFF1614D9242AF5AE6E4125
          1A008E530ED89220CF8C1FD08F23D08F22CF8E22D79620BB79343039E81D2AE8
          232CE8222EEB2430EF2032FF1B25F900002FAA6F06E4EAF1BC7418D69324D292
          27D29127D89925BF7E36616EF0152EF4223AF42137F42338F2273AEF213CFF2B
          3FFF895645FAD273D29A3DD6982ED39229D4932BDA9C2DC383396B7BF54565F7
          4A67F64E69F6425CF31F3CF25E7FFF1F28B9A46820F0BA4DDEAE56DFAF58DBA7
          49D59A36DB9F31C6893E5A61F0656FF1636DF16670F0495FF1638AFF8667B40D
          0300AA7628F2C46DE0B05DE0B25EE2B462E2B261E1AE4BCB8C3FFFFFFFFFFFFF
          FFFFFFFFFFFF3B40F05461FFEAA94F22180BA8793AF5CA77E2B768E3B869E3B8
          69E4B86AEAC377D2994DFFFFFFFFFFFFFFFFFFFBFBFF2222FFFFFFFFF7B64D1C
          1014B2803FF8D284E6BF73E7C074E7C074E7BF73ECCB80D69E53FFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFF6B2451D1212B98949FDD991EAC681EAC581EAC5
          81EAC581F0D08FD9A458FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE7AC5C18
          0D0EC49957FFF2AFFFE09DFFE4A0F8DB9AF3D495F5DEA3DEAC5DFFFFFFFFFFFF
          FFFFFFFFFFFFFFFFFFFFFFFFECB15C301F1B231F206E5A449E8663BBA77CDDC1
          8CF1D399FEEBBAE3B265FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEAB968DC
          A851D09D4EC59447BA8A41B38239CF9A48DFAC54E9B964E4B360}
        Layout = blGlyphTop
        OnClick = BtnFecharClick
      end
    end
  end
  object PgcContrato: TPageControl
    Left = 5
    Top = 40
    Width = 489
    Height = 481
    ActivePage = TbsContrato
    Style = tsFlatButtons
    TabIndex = 0
    TabOrder = 1
    object TbsContrato: TTabSheet
      Caption = 'Contrato'
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 481
        Height = 450
        Align = alClient
        TabOrder = 0
        object Label4: TLabel
          Left = 11
          Top = 16
          Width = 55
          Height = 13
          Caption = 'N'#186' Contrato'
        end
        object Label6: TLabel
          Left = 12
          Top = 54
          Width = 62
          Height = 13
          Caption = 'N'#186' do Cliente'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label9: TLabel
          Left = 77
          Top = 16
          Width = 53
          Height = 13
          Caption = 'Codificador'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label19: TLabel
          Left = 11
          Top = 93
          Width = 134
          Height = 13
          Caption = 'Endere'#231'o de Monitoramento'
        end
        object Label18: TLabel
          Left = 322
          Top = 93
          Width = 27
          Height = 13
          Caption = 'Bairro'
        end
        object Label16: TLabel
          Left = 11
          Top = 133
          Width = 33
          Height = 13
          Caption = 'Cidade'
        end
        object Label20: TLabel
          Left = 330
          Top = 133
          Width = 14
          Height = 13
          Caption = 'UF'
        end
        object Label21: TLabel
          Left = 385
          Top = 133
          Width = 19
          Height = 13
          Caption = 'Cep'
        end
        object Label15: TLabel
          Left = 180
          Top = 16
          Width = 31
          Height = 13
          Caption = 'Chave'
        end
        object BtnLocalizarCliente: TSpeedButton
          Left = 444
          Top = 70
          Width = 23
          Height = 22
          Flat = True
          Glyph.Data = {
            C6040000424DC60400000000000036040000280000000C0000000C0000000100
            0800000000009000000000000000000000000001000000000000AC650000FCF1
            DD00B36D0000BE770000A35E0000FCF2E000F3CE8A00FDF7EB00CA871200DAA0
            3C00BA730000B56E0000C27B0000EABB6400A5600000F0C57500AA6500009F5A
            0000FEFBF500AF6A0000FFFEFB00FAE6C300F6DAA600FAEACC00C37C0000F8E4
            BD00BB740000A05B0000FFFFFF00FFFFFF000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            0000000000000000000000000000000000000000000000000000000000000000
            00000000000000000000000000000000000000000000000000001C1C1C1C1C1C
            1C1C1C1C04041C1C1C1C1C1C1C1C1C0008001C1C1C1C1C1C1C1C0209021C1C1C
            1C1C1C1C1C1A0D1A1C1C1C1C1B1B111B1A0F0C1C1C1C1C0E191919191A1A1C1C
            1C1C101717060617171B1C1C1C1C130116161616011B1C1C1C1C0B0715151515
            071B1C1C1C1C0A1414050512141B1C1C1C1C1C031C1C1C1C031C1C1C1C1C1C1C
            181818181C1C1C1C1C1C}
          Transparent = False
          OnClick = BtnLocalizarClienteClick
        end
        object Label17: TLabel
          Left = 10
          Top = 211
          Width = 56
          Height = 13
          Caption = 'Dt Ativa'#231#227'o'
        end
        object Label7: TLabel
          Left = 82
          Top = 211
          Width = 41
          Height = 13
          Caption = 'Dt Inicial'
        end
        object Label8: TLabel
          Left = 152
          Top = 211
          Width = 36
          Height = 13
          Caption = 'Dt Final'
        end
        object Label10: TLabel
          Left = 221
          Top = 211
          Width = 58
          Height = 13
          Caption = 'Dia Revis'#227'o'
        end
        object Label11: TLabel
          Left = 11
          Top = 172
          Width = 37
          Height = 13
          Caption = 'Receita'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label12: TLabel
          Left = 251
          Top = 172
          Width = 20
          Height = 13
          Caption = 'Item'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
          Visible = False
        end
        object Label13: TLabel
          Left = 290
          Top = 211
          Width = 54
          Height = 13
          Caption = 'Valor Inicial'
        end
        object Label14: TLabel
          Left = 386
          Top = 211
          Width = 51
          Height = 13
          Caption = 'Valor Atual'
        end
        object Label28: TLabel
          Left = 11
          Top = 250
          Width = 85
          Height = 13
          Caption = 'Tipo de Cobran'#231'a'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object Label29: TLabel
          Left = 10
          Top = 290
          Width = 62
          Height = 13
          Caption = 'Dia do Venc.'
        end
        object Label30: TLabel
          Left = 84
          Top = 290
          Width = 50
          Height = 13
          Caption = 'Toler'#226'ncia'
        end
        object Label31: TLabel
          Left = 156
          Top = 290
          Width = 79
          Height = 13
          Caption = 'Qtd. de Parcelas'
        end
        object Label32: TLabel
          Left = 13
          Top = 353
          Width = 118
          Height = 13
          Caption = 'Motivo do Cancelamento'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentFont = False
        end
        object EdtCodigo: TDBEdit
          Left = 10
          Top = 32
          Width = 63
          Height = 21
          DataField = 'CDCONTRATO'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 0
        end
        object EdtCodCodificador: TDBEdit
          Left = 76
          Top = 32
          Width = 102
          Height = 21
          DataField = 'CDCODIFICADOR'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 1
        end
        object EdtCodCliente: TDBEdit
          Left = 10
          Top = 70
          Width = 63
          Height = 21
          DataField = 'CDCLIENTE'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 5
        end
        object EdtNomeCliente: TEdit
          Left = 76
          Top = 70
          Width = 364
          Height = 21
          ReadOnly = True
          TabOrder = 6
          OnEnter = EdtNomeClienteEnter
        end
        object EdtEnderecoMon: TDBEdit
          Left = 10
          Top = 109
          Width = 309
          Height = 21
          DataField = 'ENDERECO_MON'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 7
        end
        object EdtBairroMon: TDBEdit
          Left = 322
          Top = 109
          Width = 145
          Height = 21
          DataField = 'BAIRRO_MON'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 8
        end
        object EdtCidadeMon: TDBEdit
          Left = 10
          Top = 147
          Width = 309
          Height = 21
          DataField = 'CIDADE_MON'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 9
        end
        object EdtUfMon: TDBEdit
          Left = 322
          Top = 147
          Width = 58
          Height = 21
          DataField = 'UF_MON'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 10
        end
        object EdtCepMon: TDBEdit
          Left = 383
          Top = 147
          Width = 84
          Height = 21
          DataField = 'CEP_MON'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 11
        end
        object EdtChave: TDBEdit
          Left = 180
          Top = 32
          Width = 102
          Height = 21
          DataField = 'CHAVE'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 2
        end
        object EdtDataAtivacao: TDBEdit
          Left = 10
          Top = 227
          Width = 69
          Height = 21
          DataField = 'DATAATIVACAO'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 14
        end
        object EdtDataInicial: TDBEdit
          Left = 82
          Top = 227
          Width = 67
          Height = 21
          DataField = 'DATAINICIAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 15
        end
        object EdtDataFinal: TDBEdit
          Left = 152
          Top = 227
          Width = 66
          Height = 21
          DataField = 'DATAFINAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 16
        end
        object EdtDiaRevisao: TDBEdit
          Left = 221
          Top = 227
          Width = 66
          Height = 21
          DataField = 'DIAREVISAO'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 17
        end
        object CmbReceita: TDBLookupComboBox
          Left = 10
          Top = 188
          Width = 235
          Height = 21
          DataField = 'DERECEITA'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 12
        end
        object CmbItem: TDBLookupComboBox
          Left = 248
          Top = 188
          Width = 218
          Height = 21
          DataSource = DModuleCliente.DSContrato
          TabOrder = 13
          Visible = False
        end
        object EdtValorInicial: TDBEdit
          Left = 290
          Top = 227
          Width = 87
          Height = 21
          DataField = 'VALORINICIAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 18
        end
        object EdtValorAtual: TDBEdit
          Left = 380
          Top = 227
          Width = 85
          Height = 21
          DataField = 'VALORATUAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 19
        end
        object CmbTipoCobranca: TDBLookupComboBox
          Left = 11
          Top = 266
          Width = 199
          Height = 21
          DataField = 'DETIPOCOBRANCA'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 20
        end
        object EdtDiaVenc: TDBEdit
          Left = 10
          Top = 306
          Width = 71
          Height = 21
          DataField = 'DIAVENCIMENTO'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 21
        end
        object EdtTolerancia: TDBEdit
          Left = 84
          Top = 306
          Width = 69
          Height = 21
          DataField = 'TOLERANCIA'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 22
        end
        object EdtQtdParcelas: TDBEdit
          Left = 156
          Top = 306
          Width = 69
          Height = 21
          DataField = 'QTDPARCELAS'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 23
        end
        object CkbConfChave: TDBCheckBox
          Left = 289
          Top = 32
          Width = 81
          Height = 17
          Caption = 'Conf.Chave'
          DataField = 'CONFCHAVE'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 3
          ValueChecked = '1'
          ValueUnchecked = '0'
        end
        object CkbLocacao: TDBCheckBox
          Left = 377
          Top = 32
          Width = 65
          Height = 17
          Caption = 'Loca'#231#227'o'
          DataField = 'CONFLOCACAO'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 4
          ValueChecked = '1'
          ValueUnchecked = '0'
        end
        object CmbMotivoCancelamento: TDBLookupComboBox
          Left = 12
          Top = 370
          Width = 269
          Height = 21
          DataField = 'DEMOTIVOCANCEL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 25
        end
        object CkbInativo: TDBCheckBox
          Left = 16
          Top = 332
          Width = 121
          Height = 17
          Caption = 'Contrato Inativo'
          DataField = 'INATIVO'
          DataSource = DModuleCliente.DSContrato
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'MS Sans Serif'
          Font.Style = [fsBold]
          ParentFont = False
          TabOrder = 24
          ValueChecked = '1'
          ValueUnchecked = '0'
        end
      end
    end
    object TbsSetor: TTabSheet
      Caption = 'Setoriza'#231#227'o'
      ImageIndex = 1
      object Panel3: TPanel
        Left = 0
        Top = 0
        Width = 481
        Height = 450
        Align = alClient
        TabOrder = 0
        object Label1: TLabel
          Left = 10
          Top = 90
          Width = 63
          Height = 13
          Caption = 'Observa'#231#245'es'
        end
        object Label3: TLabel
          Left = 10
          Top = 54
          Width = 93
          Height = 13
          Caption = 'Local da Instala'#231#227'o'
        end
        object Label5: TLabel
          Left = 10
          Top = 16
          Width = 86
          Height = 13
          Caption = 'Modelo da Central'
        end
        object Label2: TLabel
          Left = 11
          Top = 148
          Width = 63
          Height = 13
          Caption = 'Observa'#231#245'es'
        end
        object Label23: TLabel
          Left = 44
          Top = 412
          Width = 409
          Height = 16
          Caption = 
            'Para excluir um setor clique na linha do setor e pressione CTRL+' +
            'DEL'
          Color = clBtnFace
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clRed
          Font.Height = -13
          Font.Name = 'MS Sans Serif'
          Font.Style = []
          ParentColor = False
          ParentFont = False
        end
        object Image1: TImage
          Left = 8
          Top = 408
          Width = 32
          Height = 32
          AutoSize = True
          Picture.Data = {
            055449636F6E0000010001002020100000000000E80200001600000028000000
            2000000040000000010004000000000080020000000000000000000000000000
            0000000000000000000080000080000000808000800000008000800080800000
            C0C0C000808080000000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000
            FFFFFF0000000000000000008000000000000000000000000000000888000000
            0000000000000000000000888880000000000000000000000000088808880000
            000000000000000000008880E088800000000000000000000008880EFE088800
            0000000000000000008880EFEFE08880000000000000000008880EFEFEFE0888
            00000000000000008880EFE000EFE0888000000000000008880EFE00000EFE08
            880000000000008880EFE88F7700EFE088800000000008880EFEF8F00070FEFE
            0888000000000080EFEF880F77000FEFE08000000000000EFEFE8FF000770EFE
            FE000000000000EFEFEF800333000FEFEFE000000000008EFEFE033BBB330EFE
            FE00000000000008EFE03BBBBBBB30EFE0000000000000008EF03BBFBFBF30FE
            00000000000000000803BBB808BBB3000000000000000000003BBFB000BFBF30
            000000000000000000BBBBF808FBBB3000000000000000003BBFBFBFBFBFBFB3
            00000000000000003BBBFBFB0BFBFBB300000000000000003FBFFFFF0FBFBFB3
            00000000000000003BFFFFF808FBFBB300000000000000003BFFFFF000BFBFB3
            000000000000000003FFFFF000FBFBB0000000000000000003BFFFF000BFBFB0
            0000000000000000003BFFF808FBBB0000000000000000000003BFBFBFBFB300
            0000000000000000000033BBBBB3300000000000000000000000003333300000
            00000000FFFF7FFFFFFE3FFFFFFC1FFFFFF80FFFFFF007FFFFE003FFFFC001FF
            FF8000FFFF00007FFE00003FFC00001FF800000FFC00001FFC00001FF800000F
            FC00001FFE00003FFF00007FFF8000FFFF8000FFFF8000FFFF00007FFF00007F
            FF00007FFF00007FFF00007FFF8000FFFF8000FFFFC001FFFFE003FFFFF007FF
            FFFC1FFF}
          Stretch = True
        end
        object EdtInfoComercial: TDBMemo
          Left = 10
          Top = 105
          Width = 455
          Height = 41
          DataField = 'OBSCENTRAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 2
        end
        object EdtLocalInstalacao: TDBEdit
          Left = 10
          Top = 69
          Width = 455
          Height = 21
          DataField = 'LOCALINSTALCENTRAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 1
        end
        object EdtInfoTecnica: TDBEdit
          Left = 10
          Top = 32
          Width = 455
          Height = 21
          DataField = 'MODELOCENTRAL'
          DataSource = DModuleCliente.DSContrato
          TabOrder = 0
        end
        object DBGSetor: TDBGrid
          Left = 11
          Top = 164
          Width = 454
          Height = 237
          DataSource = DModuleCliente.DSSetor
          Options = [dgEditing, dgTitles, dgIndicator, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 3
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          OnDrawColumnCell = DBGSetorDrawColumnCell
          Columns = <
            item
              Expanded = False
              FieldName = 'NUMSETOR'
              Title.Caption = 'Setor'
              Width = 35
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'LOCAL'
              Title.Caption = 'Localiza'#231#227'o'
              Width = 380
              Visible = True
            end>
        end
      end
    end
  end
  object pnlTituloForm: TPanel
    Left = 0
    Top = 0
    Width = 499
    Height = 30
    Align = alTop
    Alignment = taLeftJustify
    BevelOuter = bvNone
    Caption = ' Cadastro de contratos simplificado'
    Color = clPurple
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
end

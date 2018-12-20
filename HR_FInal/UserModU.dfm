object UserModF: TUserModF
  Left = 0
  Top = 0
  Caption = #51064#49324#49688#51221
  ClientHeight = 421
  ClientWidth = 304
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 60
    Top = 24
    Width = 27
    Height = 16
    Alignment = taRightJustify
    Caption = #51060#47492':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 60
    Top = 64
    Width = 27
    Height = 16
    Alignment = taRightJustify
    Caption = #49457#48324':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 60
    Top = 104
    Width = 27
    Height = 16
    Alignment = taRightJustify
    Caption = #48512#49436':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 60
    Top = 144
    Width = 27
    Height = 16
    Alignment = taRightJustify
    Caption = #51649#44553':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 38
    Top = 192
    Width = 49
    Height = 16
    Alignment = taRightJustify
    Caption = #49373#45380#50900#51068':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 38
    Top = 240
    Width = 49
    Height = 16
    Alignment = taRightJustify
    Caption = #51204#54868#48264#54840':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 60
    Top = 288
    Width = 27
    Height = 16
    Alignment = taRightJustify
    Caption = #51452#49548':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object edName: TEdit
    Left = 93
    Top = 23
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object edBirth: TEdit
    Left = 93
    Top = 191
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object edPhone: TEdit
    Left = 93
    Top = 239
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object edAddress: TEdit
    Left = 93
    Top = 287
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object cbDepart: TComboBox
    Left = 93
    Top = 103
    Width = 121
    Height = 21
    TabOrder = 4
    Items.Strings = (
      #44060#48156#48512
      #49324#50629#48512
      #50689#50629#48512
      #44592#49696#51648#50896)
  end
  object cbGrade: TComboBox
    Left = 93
    Top = 143
    Width = 121
    Height = 21
    TabOrder = 5
    Items.Strings = (
      #49324#50896
      #45824#47532
      #44284#51109
      #52264#51109
      #48512#51109
      #51060#49324
      #45824#54364)
  end
  object Panel1: TPanel
    Left = 93
    Top = 50
    Width = 121
    Height = 41
    BevelOuter = bvNone
    TabOrder = 6
    object rdMan: TRadioButton
      Left = 7
      Top = 14
      Width = 113
      Height = 17
      Caption = #45224#51088
      TabOrder = 0
    end
    object rdWoman: TRadioButton
      Left = 47
      Top = 14
      Width = 113
      Height = 17
      Caption = #50668#51088
      TabOrder = 1
    end
  end
  object btSave: TcxButton
    Left = 60
    Top = 352
    Width = 75
    Height = 25
    Caption = #51200#51109
    ModalResult = 1
    TabOrder = 7
    OnClick = btSaveClick
  end
  object btCancel: TcxButton
    Left = 156
    Top = 352
    Width = 75
    Height = 25
    Caption = #52712#49548
    ModalResult = 2
    TabOrder = 8
  end
end

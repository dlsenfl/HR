object UserMainF: TUserMainF
  Left = 0
  Top = 0
  Caption = #51064#49324#44288#47532
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 635
    Height = 57
    Align = alTop
    TabOrder = 0
    object btAdd: TcxButton
      Left = 24
      Top = 17
      Width = 75
      Height = 25
      Caption = #52628#44032
      TabOrder = 0
      OnClick = btAddClick
    end
    object btRevise: TcxButton
      Left = 128
      Top = 17
      Width = 75
      Height = 25
      Caption = #49688#51221
      TabOrder = 1
      OnClick = btReviseClick
    end
    object btFind: TcxButton
      Left = 544
      Top = 17
      Width = 75
      Height = 25
      Caption = 'Find'
      TabOrder = 2
      OnClick = btFindClick
    end
    object edFind: TEdit
      Left = 408
      Top = 19
      Width = 121
      Height = 21
      TabOrder = 3
    end
    object btDelete: TcxButton
      Left = 240
      Top = 17
      Width = 75
      Height = 25
      Caption = #49325#51228
      TabOrder = 4
      OnClick = btDeleteClick
    end
  end
  object mmDisplay: TMemo
    Left = 0
    Top = 57
    Width = 635
    Height = 242
    Align = alClient
    TabOrder = 1
    ExplicitTop = 63
  end
end

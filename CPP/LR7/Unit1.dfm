object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 365
  ClientWidth = 558
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 297
    Height = 241
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 311
    Top = 8
    Width = 218
    Height = 121
    TabOrder = 1
    object Label1: TLabel
      Left = 48
      Top = 3
      Width = 120
      Height = 13
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077'/'#1059#1076#1072#1083#1077#1085#1080#1077':'
    end
    object Label2: TLabel
      Left = 8
      Top = 22
      Width = 32
      Height = 13
      Caption = #1050#1083#1102#1095':'
    end
    object Label3: TLabel
      Left = 8
      Top = 54
      Width = 52
      Height = 13
      Caption = #1047#1085#1072#1095#1077#1085#1080#1077':'
    end
    object Edit1: TEdit
      Left = 66
      Top = 22
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 66
      Top = 54
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object Button1: TButton
      Left = 8
      Top = 88
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 2
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 136
      Top = 88
      Width = 75
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 3
      OnClick = Button2Click
    end
  end
  object Panel2: TPanel
    Left = 311
    Top = 135
    Width = 218
    Height = 74
    TabOrder = 2
    object Label4: TLabel
      Left = 40
      Top = 0
      Width = 154
      Height = 13
      Caption = #1059#1076#1072#1083#1077#1085#1080#1077' '#1084#1085#1086#1078#1077#1089#1090#1074#1072' '#1082#1083#1102#1095#1077#1081':'
    end
    object Label5: TLabel
      Left = 87
      Top = 19
      Width = 43
      Height = 19
      Caption = '< K <'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit3: TEdit
      Left = 24
      Top = 19
      Width = 57
      Height = 21
      TabOrder = 0
    end
    object Edit4: TEdit
      Left = 136
      Top = 19
      Width = 57
      Height = 21
      TabOrder = 1
    end
    object Button3: TButton
      Left = 184
      Top = 46
      Width = 33
      Height = 25
      Caption = 'OK'
      TabOrder = 2
      OnClick = Button3Click
    end
  end
end

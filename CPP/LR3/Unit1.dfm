object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 491
  ClientWidth = 700
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 321
    Height = 209
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Button1: TButton
    Left = 248
    Top = 223
    Width = 81
    Height = 34
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 1
    OnClick = Button1Click
  end
  object Panel1: TPanel
    Left = 335
    Top = 8
    Width = 362
    Height = 265
    TabOrder = 2
    Visible = False
    object Label1: TLabel
      Left = 105
      Top = 0
      Width = 167
      Height = 19
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1101#1083#1077#1084#1077#1085#1090#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 11
      Top = 25
      Width = 129
      Height = 16
      Caption = '1)'#1055#1086#1088#1103#1076#1082#1086#1074#1099#1081' '#1085#1086#1084#1077#1088':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 11
      Top = 60
      Width = 70
      Height = 16
      Caption = '2)'#1060#1072#1084#1080#1083#1080#1103':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 11
      Top = 95
      Width = 40
      Height = 16
      Caption = '3)'#1048#1084#1103':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 11
      Top = 130
      Width = 72
      Height = 16
      Caption = '4)'#1054#1090#1095#1077#1089#1090#1074#1086':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 11
      Top = 165
      Width = 117
      Height = 16
      Caption = '5)'#1044#1086#1084#1072#1096#1085#1080#1081' '#1072#1076#1088#1077#1089':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 11
      Top = 200
      Width = 165
      Height = 16
      Caption = '6)'#1044#1072#1090#1072' '#1087#1086#1089#1090#1072#1085#1086#1074#1082#1080' '#1085#1072' '#1091#1095#1105#1090':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 200
      Top = 25
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 200
      Top = 60
      Width = 121
      Height = 21
      TabOrder = 1
    end
    object Edit3: TEdit
      Left = 200
      Top = 95
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object Edit5: TEdit
      Left = 200
      Top = 165
      Width = 121
      Height = 21
      TabOrder = 3
    end
    object Edit6: TEdit
      Left = 200
      Top = 200
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object Edit4: TEdit
      Left = 200
      Top = 130
      Width = 121
      Height = 21
      TabOrder = 5
    end
    object Button2: TButton
      Left = 11
      Top = 235
      Width = 75
      Height = 25
      Caption = #1054#1082
      TabOrder = 6
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 104
      Top = 235
      Width = 75
      Height = 25
      Caption = #1047#1072#1082#1088#1099#1090#1100
      TabOrder = 7
      OnClick = Button3Click
    end
  end
  object RadioGroup1: TRadioGroup
    Left = 8
    Top = 223
    Width = 153
    Height = 65
    Caption = #1057#1087#1080#1089#1086#1082':'
    Items.Strings = (
      #1054#1078#1080#1076#1072#1102#1097#1080#1093' '#1079#1072#1082#1072#1079#1086#1074
      #1042#1099#1087#1086#1083#1085#1077#1085#1085#1099#1093' '#1079#1072#1082#1072#1079#1086#1074)
    TabOrder = 3
    OnClick = RadioGroup1Click
  end
  object Panel2: TPanel
    Left = 440
    Top = 279
    Width = 257
    Height = 200
    TabOrder = 4
    Visible = False
    object Label8: TLabel
      Left = 65
      Top = 0
      Width = 112
      Height = 19
      Caption = #1055#1086#1080#1089#1082' '#1079#1072#1087#1080#1089#1077#1081':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 8
      Top = 24
      Width = 46
      Height = 16
      Caption = #1057#1087#1080#1089#1086#1082':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label10: TLabel
      Left = 8
      Top = 52
      Width = 60
      Height = 16
      Caption = #1050#1088#1080#1090#1077#1088#1080#1081':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object ComboBox1: TComboBox
      Left = 74
      Top = 25
      Width = 175
      Height = 21
      ItemIndex = 0
      TabOrder = 0
      Text = #1054#1078#1080#1076#1072#1102#1097#1080#1093' '#1079#1072#1082#1072#1079#1086#1074
      Items.Strings = (
        #1054#1078#1080#1076#1072#1102#1097#1080#1093' '#1079#1072#1082#1072#1079#1086#1074
        #1042#1099#1087#1086#1083#1085#1077#1085#1085#1099#1093' '#1079#1072#1082#1072#1079#1086#1074)
    end
    object ComboBox2: TComboBox
      Left = 74
      Top = 52
      Width = 175
      Height = 21
      ItemIndex = 0
      TabOrder = 1
      Text = #1055#1086' '#1087#1086#1088#1103#1076#1082#1086#1074#1086#1084#1091' '#1085#1086#1084#1077#1088#1091
      Items.Strings = (
        #1055#1086' '#1087#1086#1088#1103#1076#1082#1086#1074#1086#1084#1091' '#1085#1086#1084#1077#1088#1091
        #1055#1086' '#1076#1072#1090#1077' '#1087#1086#1089#1090#1072#1085#1086#1074#1082#1080' '#1085#1072' '#1091#1095#1077#1090
        #1055#1086' '#1092#1072#1084#1080#1083#1080#1080)
    end
    object Memo2: TMemo
      Left = 8
      Top = 103
      Width = 241
      Height = 90
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 2
    end
    object Button5: TButton
      Left = 174
      Top = 75
      Width = 75
      Height = 25
      Caption = #1048#1089#1082#1072#1090#1100
      TabOrder = 3
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 232
      Top = 2
      Width = 17
      Height = 17
      Caption = 'x'
      TabOrder = 4
      OnClick = Button6Click
    end
    object Edit7: TEdit
      Left = 8
      Top = 76
      Width = 160
      Height = 21
      TabOrder = 5
    end
  end
  object Button4: TButton
    Left = 167
    Top = 223
    Width = 81
    Height = 34
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 5
    OnClick = Button4Click
  end
  object Panel3: TPanel
    Left = 8
    Top = 294
    Width = 153
    Height = 50
    TabOrder = 6
    Visible = False
    object Label11: TLabel
      Left = 11
      Top = 4
      Width = 126
      Height = 13
      Caption = #1055#1086#1084#1077#1090#1080#1090#1100' '#1074#1099#1087#1086#1083#1085#1077#1085#1085#1099#1081':'
    end
    object Button7: TButton
      Left = 44
      Top = 23
      Width = 31
      Height = 25
      Caption = #1054#1082
      TabOrder = 0
      OnClick = Button7Click
    end
    object Edit8: TEdit
      Left = 7
      Top = 23
      Width = 31
      Height = 21
      TabOrder = 1
    end
  end
  object Button8: TButton
    Left = 167
    Top = 263
    Width = 162
    Height = 25
    Caption = #1060#1086#1088#1084#1072#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 7
    OnClick = Button8Click
  end
end

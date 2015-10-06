object Form1: TForm1
  Left = 389
  Top = 149
  Hint = 'lenin133@yandex.ru'
  AlphaBlend = True
  AlphaBlendValue = 150
  AutoSize = True
  BorderIcons = []
  BorderStyle = bsNone
  Caption = 'Clock'
  ClientHeight = 90
  ClientWidth = 200
  Color = clBlack
  DefaultMonitor = dmMainForm
  DockSite = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clYellow
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDefault
  ShowHint = True
  PixelsPerInch = 120
  TextHeight = 16
  object ClockMemo: TMemo
    Left = 0
    Top = 0
    Width = 200
    Height = 90
    Hint = 'Created by lenin133@yandex.ru'
    Color = clBlack
    DragMode = dmAutomatic
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clYellow
    Font.Height = -30
    Font.Name = 'Arial'
    Font.Style = [fsBold]
    OEMConvert = True
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ShowHint = True
    TabOrder = 0
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 16
    Top = 16
  end
end

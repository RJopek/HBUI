---
layout: page
title: hbui.ch
---

# hbui.ch

## uiForEach

uiForEach represents the return value from one of libui's various ForEach functions.

``` c

   uiForEachContinue               0
   uiForEachStop                   1

```

## uiWindowResizeEdge

``` c

   uiWindowResizeEdgeLeft          0
   uiWindowResizeEdgeTop           1
   uiWindowResizeEdgeRight         2
   uiWindowResizeEdgeBottom        3
   uiWindowResizeEdgeTopLeft       4
   uiWindowResizeEdgeTopRight      5
   uiWindowResizeEdgeBottomLeft    6
   uiWindowResizeEdgeBottomRight   7

```

## uiDrawBrushType

``` c

   uiDrawBrushTypeSolid            0
   uiDrawBrushTypeLinearGradient   1
   uiDrawBrushTypeRadialGradient   2
   uiDrawBrushTypeImage            3

```

## uiDrawLineCap

``` c

   uiDrawLineCapFlat               0
   uiDrawLineCapRound              1
   uiDrawLineCapSquare             2

```

## uiDrawLineJoin

``` c

   uiDrawLineJoinMiter             0
   uiDrawLineJoinRound             1
   uiDrawLineJoinBevel             2

```

## uiDrawFillMode

``` c

   uiDrawFillModeWinding           0
   uiDrawFillModeAlternate         1

```

## uiAttributeType

``` c

   uiAttributeTypeFamily           0
   uiAttributeTypeSize             1
   uiAttributeTypeWeight           2
   uiAttributeTypeItalic           3
   uiAttributeTypeStretch          4
   uiAttributeTypeColor            5
   uiAttributeTypeBackground       6
   uiAttributeTypeUnderline        7
   uiAttributeTypeUnderlineColor   8
   uiAttributeTypeFeatures         9

```

## uiTextWeight

``` c

   uiTextWeightMinimum             0
   uiTextWeightThin                100
   uiTextWeightUltraLight          200
   uiTextWeightLight               300
   uiTextWeightBook                350
   uiTextWeightNormal              400
   uiTextWeightMedium              500
   uiTextWeightSemiBold            600
   uiTextWeightBold                700
   uiTextWeightUltraBold           800
   uiTextWeightHeavy               900
   uiTextWeightUltraHeavy          950
   uiTextWeightMaximum             1000

```

## uiTextItalic

``` c

   uiTextItalicNormal              0
   uiTextItalicOblique             1
   uiTextItalicItalic              2

```

## uiTextStretch

``` c

   uiTextStretchUltraCondensed     0
   uiTextStretchExtraCondensed     1
   uiTextStretchCondensed          2
   uiTextStretchSemiCondensed      3
   uiTextStretchNormal             4
   uiTextStretchSemiExpanded       5
   uiTextStretchExpanded           6
   uiTextStretchExtraExpanded      7
   uiTextStretchUltraExpanded      8

```

## uiUnderline

``` c

   uiUnderlineNone                 0
   uiUnderlineSingle               1
   uiUnderlineDouble               2
   uiUnderlineSuggestion           3

```

## uiUnderlineColor

``` c

   uiUnderlineColorCustom          0
   uiUnderlineColorSpelling        1
   uiUnderlineColorGrammar         2
   uiUnderlineColorAuxiliary       3

```

## uiDrawTextAlign

``` c

   uiDrawTextAlignLeft             0
   uiDrawTextAlignCenter           1
   uiDrawTextAlignRight            2

```

## uiModifiers

``` c

```

## uiExtKey

``` c

   uiExtKeyEscape                  1
   uiExtKeyInsert                  2
   uiExtKeyDelete                  3
   uiExtKeyHome                    4
   uiExtKeyEnd                     5
   uiExtKeyPageUp                  6
   uiExtKeyPageDown                7
   uiExtKeyUp                      8
   uiExtKeyDown                    9
   uiExtKeyLeft                    10
   uiExtKeyRight                   11
   uiExtKeyF1                      12
   uiExtKeyF2                      13
   uiExtKeyF3                      14
   uiExtKeyF4                      15
   uiExtKeyF5                      16
   uiExtKeyF6                      17
   uiExtKeyF7                      18
   uiExtKeyF8                      19
   uiExtKeyF9                      20
   uiExtKeyF10                     21
   uiExtKeyF11                     22
   uiExtKeyF12                     23
   uiExtKeyN0                      24
   uiExtKeyN1                      25
   uiExtKeyN2                      26
   uiExtKeyN3                      27
   uiExtKeyN4                      28
   uiExtKeyN5                      29
   uiExtKeyN6                      30
   uiExtKeyN7                      31
   uiExtKeyN8                      32
   uiExtKeyN9                      33
   uiExtKeyNDot                    34
   uiExtKeyNEnter                  35
   uiExtKeyNAdd                    36
   uiExtKeyNSubtract               37
   uiExtKeyNMultiply               38
   uiExtKeyNDivide                 39

```

## uiAlign

``` c

   uiAlignFill                     0
   uiAlignStart                    1
   uiAlignCenter                   2
   uiAlignEnd                      3

```

## uiAt

``` c

   uiAtLeading                     0
   uiAtTop                         1
   uiAtTrailing                    2
   uiAtBottom                      3

```

## uiTableValueType

``` c

   uiTableValueTypeString          0
   uiTableValueTypeImage           1
   uiTableValueTypeInt             2
   uiTableValueTypeColor           3

```

## uiTableModelColumnNeverEditable and uiTableModelColumnAlwaysEditable

uiTableModelColumnNeverEditable and uiTableModelColumnAlwaysEditable are the value of an editable model column parameter to one of the uiTable create column
functions; if used, that jparticular uiTable colum is not editable by the user and always editable by the user, respectively.

``` c

   uiTableModelColumnNeverEditable  -1
   uiTableModelColumnAlwaysEditable -2

```


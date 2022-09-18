/*

*/

#ifndef _HBUI_CH_
#define _HBUI_CH_

/* uiForEach */
#define uiForEachContinue               0
#define uiForEachStop                   1


/* uiWindowResizeEdge */
#define uiWindowResizeEdgeLeft          0
#define uiWindowResizeEdgeTop           1
#define uiWindowResizeEdgeRight         2
#define uiWindowResizeEdgeBottom        3
#define uiWindowResizeEdgeTopLeft       4
#define uiWindowResizeEdgeTopRight      5
#define uiWindowResizeEdgeBottomLeft    6
#define uiWindowResizeEdgeBottomRight   7


/* uiDrawBrushType */
#define uiDrawBrushTypeSolid            0
#define uiDrawBrushTypeLinearGradient   1
#define uiDrawBrushTypeRadialGradient   2
#define uiDrawBrushTypeImage            3


/* uiDrawLineCap */
#define uiDrawLineCapFlat               0
#define uiDrawLineCapRound              1
#define uiDrawLineCapSquare             2


/* uiDrawLineJoin */
#define uiDrawLineJoinMiter             0
#define uiDrawLineJoinRound             1
#define uiDrawLineJoinBevel             2


/* uiDrawFillMode */
#define uiDrawFillModeWinding           0
#define uiDrawFillModeAlternate         1


/* uiAttributeType */
#define uiAttributeTypeFamily           0
#define uiAttributeTypeSize             1
#define uiAttributeTypeWeight           2
#define uiAttributeTypeItalic           3
#define uiAttributeTypeStretch          4
#define uiAttributeTypeColor            5
#define uiAttributeTypeBackground       6
#define uiAttributeTypeUnderline        7
#define uiAttributeTypeUnderlineColor   8
#define uiAttributeTypeFeatures         9


/* uiTextWeight */
#define uiTextWeightMinimum             0
#define uiTextWeightThin                100
#define uiTextWeightUltraLight          200
#define uiTextWeightLight               300
#define uiTextWeightBook                350
#define uiTextWeightNormal              400
#define uiTextWeightMedium              500
#define uiTextWeightSemiBold            600
#define uiTextWeightBold                700
#define uiTextWeightUltraBold           800
#define uiTextWeightHeavy               900
#define uiTextWeightUltraHeavy          950
#define uiTextWeightMaximum             1000


/* uiTextItalic */
#define uiTextItalicNormal              0
#define uiTextItalicOblique             1
#define uiTextItalicItalic              2


/* uiTextStretch */
#define uiTextStretchUltraCondensed     0
#define uiTextStretchExtraCondensed     1
#define uiTextStretchCondensed          2
#define uiTextStretchSemiCondensed      3
#define uiTextStretchNormal             4
#define uiTextStretchSemiExpanded       5
#define uiTextStretchExpanded           6
#define uiTextStretchExtraExpanded      7
#define uiTextStretchUltraExpanded      8


/* uiUnderline */
#define uiUnderlineNone                 0
#define uiUnderlineSingle               1
#define uiUnderlineDouble               2
#define uiUnderlineSuggestion           3


/* uiUnderlineColor */
#define uiUnderlineColorCustom          0
#define uiUnderlineColorSpelling        1
#define uiUnderlineColorGrammar         2
#define uiUnderlineColorAuxiliary       3


/* uiDrawTextAlign */
#define uiDrawTextAlignLeft             0
#define uiDrawTextAlignCenter           1
#define uiDrawTextAlignRight            2


/* uiModifiers */
/*
#define uiModifierCtrl                  1 << 0
#define uiModifierAlt                   1 << 1
#define uiModifierShift                 1 << 2
#define uiModifierSuper                 1 << 3
*/


/* uiExtKey */
#define uiExtKeyEscape                  1
#define uiExtKeyInsert                  2
#define uiExtKeyDelete                  3
#define uiExtKeyHome                    4
#define uiExtKeyEnd                     5
#define uiExtKeyPageUp                  6
#define uiExtKeyPageDown                7
#define uiExtKeyUp                      8
#define uiExtKeyDown                    9
#define uiExtKeyLeft                    10
#define uiExtKeyRight                   11
#define uiExtKeyF1                      12
#define uiExtKeyF2                      13
#define uiExtKeyF3                      14
#define uiExtKeyF4                      15
#define uiExtKeyF5                      16
#define uiExtKeyF6                      17
#define uiExtKeyF7                      18
#define uiExtKeyF8                      19
#define uiExtKeyF9                      20
#define uiExtKeyF10                     21
#define uiExtKeyF11                     22
#define uiExtKeyF12                     23
#define uiExtKeyN0                      24
#define uiExtKeyN1                      25
#define uiExtKeyN2                      26
#define uiExtKeyN3                      27
#define uiExtKeyN4                      28
#define uiExtKeyN5                      29
#define uiExtKeyN6                      30
#define uiExtKeyN7                      31
#define uiExtKeyN8                      32
#define uiExtKeyN9                      33
#define uiExtKeyNDot                    34
#define uiExtKeyNEnter                  35
#define uiExtKeyNAdd                    36
#define uiExtKeyNSubtract               37
#define uiExtKeyNMultiply               38
#define uiExtKeyNDivide                 39


/* uiAlign */
#define uiAlignFill                     0
#define uiAlignStart                    1
#define uiAlignCenter                   2
#define uiAlignEnd                      3


/* uiAt */
#define uiAtLeading                     0
#define uiAtTop                         1
#define uiAtTrailing                    2
#define uiAtBottom                      3


/* uiTableValueType */
#define uiTableValueTypeString          0
#define uiTableValueTypeImage           1
#define uiTableValueTypeInt             2
#define uiTableValueTypeColor           3


#define uiTableModelColumnNeverEditable  -1
#define uiTableModelColumnAlwaysEditable -2

#endif /* _HBUI_CH_ */

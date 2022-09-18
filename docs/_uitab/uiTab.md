---
layout: page
title: uiTab
---

# uiTab

#### Description

uiTab is a Control that holds tabbed pages of Controls. Each tab has a label. The user can click on the tabs themselves to switch pages. Individual pages can also have margins.uiTab provide a way to present related information on separate labeled pages.

#### Functions

> * uiNewTab()
> * uiTabAppend( `pTab` , `cName` , `pControl` )
> * uiTabDelete( `pTab` , `nIndex` )
> * uiTabInsertAt( `pTab` , `cName` , `nBefore` , `pControl` )
> * uiTabMargined( `pTab` , `nPage` )
> * uiTabNumPages( `pTab` )
> * uiTabSetMargined( `pTab` , `nPage` , `lMargined` )

### uiNewTab()

#### Returns

uiNewTab() returns pointer.

#### Description

uiNewTab() creates a new Tab.

#### Example

``` c

pTab := uiNewTab()

```

### uiTabAppend( pTab, cName, pControl )

#### Arguments

* `pTab` 
* `cName` 
* `pControl` 

#### Returns

uiTabAppend() has no return value.

#### Description

uiTabAppend() adds the given page to the end of the Tab.

#### Example

``` c

```

### uiTabDelete( pTab, nIndex )

#### Arguments

* `pTab` 
* `nIndex` 

#### Returns

uiTabDelete() has no return value.

#### Description

uiTabDelete() delete deletes the nth page of the Tab.

#### Example

``` c

```

### uiTabInsertAt( pTab, cName, nBefore, pControl )

#### Arguments

* `pTab` 
* `cName` 
* `nBefore` 
* `pControl` 

#### Returns

uiTabInsertAt() has no return value.

#### Description

uiTabInsertAt() adds the given page to the Tab such that it is the nth page of the Tab (starting at 0).

#### Example

``` c

```

### uiTabMargined( pTab, nPage )

#### Arguments

* `pTab` 
* `nPage` 

#### Returns

uiTabMargined() a logical return value `.T.` or `.F.`

#### Description

uiTabMargined() margined returns whether page n (starting at 0) of the Tab has margins around its child.

#### Example

``` c

```

### uiTabNumPages( pTab )

#### Arguments

* `pTab` 

#### Returns

uiTabNumPages() numeric return value using an integer.

#### Description

NumPages returns the number of pages in the Tab.

#### Example

``` c

```

### uiTabSetMargined( pTab, nPage, lMargined )

#### Arguments

* `pTab` 
* `nPage` 
* `lMargined` 

#### Returns

uiTabSetMargined() has no return value.

#### Description

uiTabSetMargined() controls whether page n (starting at 0) of the Tab has margins around its child. The size of the margins are determined by the OS and its best practices.

#### Example

``` c

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pTab

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Tab example", 500, 500, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pTab := uiNewTab()

   uiTabAppend( pTab, "Label", Label() )
   uiTabSetMargined( pTab, 0, .T. )

   uiTabAppend( pTab, "Button", Button() )
   uiTabSetMargined( pTab, 1, .T. )

   uiTabAppend( pTab, "Checkbox", Checkbox() )
   uiTabSetMargined( pTab, 2, .T. )

   uiTabAppend( pTab, "Radiobuttons", Radiobuttons() )
   uiTabSetMargined( pTab, 3, .T. )

   uiTabAppend( pTab, "What day is today", WhatDayIsToday() )
   uiTabSetMargined( pTab, 4, .T. )

   uiWindowSetChild( pWindow, pTab )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION Label()

   LOCAL pLabel
   LOCAL pGrid

   pLabel := uiNewLabel( Version() + hb_eol() + ;
                                     hb_eol() + ;
                     hb_Compiler() + hb_eol() + ;
                                     hb_eol() + ;
                     OS()          + hb_eol() + ;
                                     hb_eol() + ;
                     "HBUI 0.00"  )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pLabel, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

   RETURN pGrid

FUNCTION Button()

   LOCAL pButton
   LOCAL pGrid

      pButton := uiNewButton( "Open" )

      pGrid := uiNewGrid()
      uiGridSetPadded( pGrid, .T. )
      uiGridAppend( pGrid, pButton, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

      RETURN pGrid

FUNCTION Checkbox()

   LOCAL pCheckbox
   LOCAL pGrid

   pCheckbox := uiNewCheckbox( "GitHub" )
   uiCheckboxSetChecked( pCheckbox, .T. )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pCheckbox, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)

RETURN pGrid

FUNCTION Radiobuttons()

   LOCAL pRadiobuttons
   LOCAL pGrid

   pRadiobuttons := uiNewRadioButtons()
   uiRadioButtonsAppend( pRadiobuttons, "Choose me 1" )
   uiRadioButtonsAppend( pRadiobuttons, "Choose me 2" )
   uiRadioButtonsAppend( pRadiobuttons, "Choose me 3" )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pRadiobuttons, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

   RETURN pGrid

FUNCTION WhatDayIsToday()

   LOCAL pLabel
   LOCAL pGrid
   LOCAL cText := "Today is "

   cText += CDoW( Date() ) + ", "
   cText += LTrim( Str( Day( Date() ) ) ) + ". "
   cText += CMonth( Date() ) + " "
   cText += LTrim( Str( Year( Date() ) ) )

   pLabel := uiNewLabel( cText )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pLabel, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

   RETURN pGrid

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/tab_01.png "With family Linux Ubuntu desktop")


---
layout: page
title: uiSeparator
---

# uiSeparator

#### Description

uiSeparator is a Control that represents a horizontal line that visually separates controls.

#### Functions

> * uiNewHorizontalSeparator()
> * uiNewVerticalSeparator()

### uiNewHorizontalSeparator()

#### Returns

uiNewHorizontalSeparator() returns pointer.

#### Description

#### Example

``` c

```

### uiNewVerticalSeparator()

#### Returns

uiNewVerticalSeparator() returns pointer.

#### Description

#### Example

``` c

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pButton
   LOCAL pVerticalBox

   IF ! HB_ISNULL( cError :=  uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Horizontal Separator example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pVerticalBox, pButton, .F. )
   uiBoxAppend( pVerticalBox, uiNewHorizontalSeparator(), .F. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/horizontalseparator_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pButton
   LOCAL pHorizontalBox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Vertical separator example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, 1 )

   pButton := uiNewButton( "Open" )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pHorizontalBox, pButton, .F. )
   uiBoxAppend( pHorizontalBox, uiNewVerticalSeparator(), .F. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/verticalseparator_01.png "With family Linux Ubuntu desktop")


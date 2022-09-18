---
layout: page
title: uiButton
---

# uiButton

#### Description

uiButton is a Control that represents a button that the user can click to perform an action. A Button has a text label that should describe what the button does.
uiButton allow users to perform an immediate action.

#### Functions

> * uiButtonOnClicked( `pButton` , `UserFunction( pButton, data )` , `data` )
> * uiButtonSetText( `pButton` , `cText` )
> * uiButtonText( `pButton` )
> * uiNewButton( `cText` )

## uiButtonOnClicked( pButton, UserFunction( pButton, data ), data )

#### Arguments

* `pButton`
* `UserFunction( pButton, data )` is the name of a user-defined function.
* `data`

#### Returns

* uiButtonOnClicked() has no return value.

#### Description

#### Example

``` c

```

## uiButtonSetText( pButton, cText )

#### Arguments

* `pButton` 
* `cText` 

#### Returns

uiButtonSetText() has no return value.

#### Description

SetText sets the Button's text to text.

#### Example

``` c

uiButtonSetText( pButton, "New Open " )

```

## uiButtonText( pButton )

#### Arguments

* `pButton` 

#### Returns

uiButtonText() a character return value.

#### Description

#### Example

``` c 

cButtonText := uiButtonText( pButton )

``` 

## uiNewButton( cText )

#### Arguments

* `cText` 

#### Returns

uiNewButton() returns pointer.

#### Description

uiNewButton() creates a new Button with the given text as its label.

#### Example(s)

``` c

pButton := uiNewButton( "Open" )

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pButton

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Button example", 300, 300, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   uiWindowSetChild( pWindow, pButton )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/button_01.png "With family Linux Ubuntu desktop")

#### Sample source code

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

   pWindow := uiNewWindow( "Button example", 300, 300, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pHorizontalBox, pButton, .F. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/button_02.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pButton
   LOCAL pVerticalBox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN NIL
   ENDIF

   pWindow := uiNewWindow( "Button example", 300, 300, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pVerticalBox, pButton, .F. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN NIL

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/button_03.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pButton
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Button example", 300, 300, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pButton, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/button_04.png "With family Linux Ubuntu desktop")


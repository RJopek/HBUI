---
layout: page
title: uiColorButton
---

# uiColorButton

ColorButton is a Control that represents a button that the user can click to select a color.

#### Description

#### Functions

> * uiColorButtonColor( `pColorButton` , `nR` , `nG` , `nBl` , `nA` )
> * uiColorButtonOnChanged( `pColorButton` , `UserFunction( pColorButton, NIL )` , `data` )
> * uiColorButtonSetColor( `pColorButton` , `nR` , `nG` , `nBl` , `nA` )
> * uiNewColorButton()

### uiColorButtonColor( pColorButton, nR, nG, nBl, nA )

#### Arguments

* `pColorButton` 
* `nR` 
* `nG` 
* `nBl` 
* `nA` 

#### Returns

uiColorButtonColor() has no return value.

#### Description

#### Example

``` C

```

### uiColorButtonOnChanged( pColorButton, UserFunction( pColorButton, NIL ), data )

#### Arguments

* `pColorButton` 
* `UserFunction( uiColorButton, NIL )` 
* `data` 

#### Returns

uiColorButtonOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiColorButtonSetColor( pColorButton, nR, nG, nBl, nA )

#### Arguments

* `pColorButton` 
* `nR` 
* `nG` 
* `nBl` 
* `nA` 

#### Returns

uiColorButtonSetColor() has no return value.

#### Description

#### Example

``` c

```

### uiNewColorButton()

#### Arguments

#### Returns

uiNewColorButton() returns pointer.

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
   LOCAL pColorButton

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Color button example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, .T. )

   pColorButton := uiNewColorButton()

   uiWindowSetChild( pWindow, pColorButton )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/colorbutton_01.png "With family Linux Ubuntu desktop")

## Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pColorButton
   LOCAL pHorizontalBox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Color button example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, .T. )

   pColorButton := uiNewColorButton()
   uiColorButtonSetColor( pColorButton, 250, 0, 0, 1 )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pHorizontalBox, pColorButton, .F. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/colorbutton_02.png "With family Linux Ubuntu desktop")

## Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pColorButton
   LOCAL pVerticalBox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Color button example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, .T. )

   pColorButton := uiNewColorButton()
   uiColorButtonSetColor( pColorButton, 0, 250, 0, 1 )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pVerticalBox, pColorButton, .F. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/colorbutton_03.png "With family Linux Ubuntu desktop")

## Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pColorButton
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Button example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pColorButton := uiNewColorButton()
   uiColorButtonSetColor( pColorButton, 0, 0, 250, 1 )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pColorButton, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/colorbutton_04.png "With family Linux Ubuntu desktop")

---


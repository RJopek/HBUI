---
layout: page
title: uiRadioButtons
---

# uiRadioButtons

uiRadioButtons is a Control that represents a set of checkable buttons from which exactly one may be chosen by the user.uiRadiobuttons allow users to make a choice among a set of mutually exclusive, related choices.

#### Description

#### Functions

> * uiNewRadioButtons()
> * uiRadioButtonsAppend( `pRadioButtons` , `cText` )
> * uiRadioButtonsOnSelected( `pRadioButtons` , `UserFunction( pRadioButtons, NIL )` , `data` )
> * uiRadioButtonsSelected( `pRadioButtons` )
> * uiRadioButtonsSetSelected( `pRadioButtons` , `nN` )

### uiNewRadioButtons()

#### Returns

uiNewRadioButtons() returns pointer.

#### Description

#### Example

``` c

```

### uiRadioButtonsAppend( pRadioButtons, cText )

#### Arguments

* `pRadioButtons` 
* `cText` 

#### Returns

uiRadioButtonsAppend() has no return value.

#### Description

#### Example

``` c

```

### uiRadioButtonsOnSelected( pRadioButtons, UserFunction( pRadioButtons, NIL ), data )

#### Arguments

* `pRadioButtons` 
* `UserFunction( pRadioButtons, NIL )` 
* `data` 

#### Returns

uiRadioButtonsOnSelected() has no return value.

#### Description

#### Example

``` c

```

### uiRadioButtonsSelected( pRadioButtons )

#### Arguments

* `pRadioButtons` 

#### Returns

uiRadioButtonsSelected() numeric return value using an integer.

#### Description

#### Example

``` c

```

### uiRadioButtonsSetSelected( pRadioButtons, nN )

#### Arguments

- `pRadioButtons`
- `nN`

#### Returns

uiRadioButtonsSetSelected() has no return value.

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
   LOCAL pRadioButtons
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Radio buttons example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pRadioButtons := uiNewRadioButtons()
   uiRadioButtonsAppend( pRadioButtons, "Choose me 1" )
   uiRadioButtonsAppend( pRadioButtons, "Choose me 2" )
   uiRadioButtonsAppend( pRadioButtons, "Choose me 3" )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pRadioButtons, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/radiobuttons_01.png "With family Linux Ubuntu desktop")


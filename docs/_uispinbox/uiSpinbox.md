---
layout: page
title: uiSpinbox
---

# uiSpinbox

#### Description

uiSpinbox is a Control that represents a space where the user can enter integers. The space also comes with buttons to add or subtract 1 from the integer.
uiSpinbox allow users to change incrementally the value within its associated numeric text box.

#### Functions

> * uiNewSpinbox( `nMin` , `nMax` )
> * uiSpinboxOnChanged( `pSpinbox` , `UserFunction( pSpinbox, data )` , `data` )
> * uiSpinboxSetValue( `pSpinbox` , `nValue` )
> * uiSpinboxValue( `pSpinbox` )

### uiNewSpinbox( nMin, nMax )

#### Arguments

- `nMin`
- `nMax`

#### Returns

uiNewSpinbox() returns pointer.

#### Description

#### Example

``` c

```

### uiSpinboxOnChanged( pSpinbox, UserFunction( pSpinbox, data ), data )

#### Arguments

- `pSpinbox`
- `UserFunction( pSpinbox, data )`
- `data`

#### Returns

uiSpinboxOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiSpinboxSetValue( pSpinbox, nValue )

#### Arguments

- `pSpinbox`
- `nValue`

#### Returns

uiSpinboxSetValue() has no return value.

#### Description

#### Example

``` c

```

### uiSpinboxValue( pSpinbox )

#### Arguments

- `pSpinbox`

#### Returns

uiSpinboxValue() numeric return value using an integer.

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
   LOCAL pHorizontalBox
   LOCAL pGroup
   LOCAL pVerticalBox
   LOCAL pSpinbox
   
   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Spin box example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiGroupSetChild( pGroup, pVerticalBox )

   pSpinbox := uiNewSpinbox( 0, 100 )

   uiBoxAppend( pVerticalBox, pSpinbox, .F. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/spinbox_01.png "With family Linux Ubuntu desktop")


---
layout: page
title: uiSlider
---

# uiSlider

#### Description

uiSlider is a Control that represents a horizontal bar that represents a range of integers. The user can drag a pointer on the bar to select an integer.
uiSlider allow users to choose from a continuous range of values.

#### Functions

> * uiNewSlider( `nMin` , `nMax` )
> * uiSliderOnChanged( `pSlider` , `UserFunction( pSlider, data )` , `data` )
> * uiSliderSetValue( `pSlider` , `nValue` )
> * uiSliderValue( `pSlider` )

### uiNewSlider( nMin, nMax )

#### Arguments

* `nMin` 
* `nMax` 

#### Returns

uiNewSlider() returns pointer.

#### Description

#### Example

``` c

```

### uiSliderOnChanged( pSlider, UserFunction( pSlider, data ), data )

#### Arguments

* `pSlider` 
* `UserFunction( pSlider, data )` 
* `data` 

#### Returns

uiSliderOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiSliderSetValue( pSlider, nValue )

#### Arguments

* `pSlider` 
* `nValue` 

#### Returns

uiSliderSetValue() has no return value.

#### Description

#### Example

``` c

```

### uiSliderValue( pSlider )

#### Arguments

* `pSlider` 

#### Returns

uiSliderValue() numeric return value using an integer.

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
   LOCAL pSlider
   
   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Slider example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, 1 )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiGroupSetChild( pGroup, pVerticalBox )

   pSlider := uiNewSlider( 0, 100 )

   uiBoxAppend( pVerticalBox, pSlider, .F. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

![Linux]({{ site.baseurl }}/assets/img/slider_01.png "With family Linux Ubuntu desktop")


---
layout: page
title: uiProgressBar
---

# uiProgressBar

#### Description

uiProgressBar is a Control that represents a horizontal bar that is filled in progressively over time as a process completes.uiProgressbar allow users to follow the progress of a lengthy operation.

#### Functions

> * uiNewProgressBar()
> * uiProgressBarSetValue( `pProgressBar` , `nN` )
> * uiProgressBarValue( `pProgressBar` )

### uiNewProgressBar()

#### Returns

uiNewProgressBar() returns pointer.

#### Description

#### Example

``` c

```

### uiProgressBarSetValue( pProgressBar, nN )

#### Arguments

* `pProgressBar` 
* `nN` 

#### Returns

uiProgressBarSetValue() has no return value.

#### Description

#### Example

``` c

```

### uiProgressBarValue( pProgressBar )

#### Arguments

* `pProgressBar` 

#### Returns

uiProgressBarValue() numeric return value using an integer.

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
   LOCAL pVerticalBox
   LOCAL pProgressBar

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Progress bar example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pProgressBar := uiNewProgressBar()
   uiProgressBarSetValue( pProgressBar, -1 )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pVerticalBox, pProgressBar, .F. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/progressbar_01.png "With family Linux Ubuntu desktop")


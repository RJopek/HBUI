---
layout: page
title: uiLabel
---

# uiLabel

#### Description

uiLabel is a Control that represents a line of text that cannot be interacted with.

#### Functions

> * uiLabelText( `pLabel` )
> * uiLabelSetText( `pLabel` , `cText` )
> * uiNewLabel( `cText` )

## uiLabelText( pLabel )

#### Arguments

* `pLabel` 

#### Returns

uiLabelText() a character return value.

#### Description

#### Example(s)

``` c

cLabelText := uiLabelText( pLabel )

```

## uiLabelSetText( pLabel, cText )

#### Arguments

* `pLabel` 
* `cText` 

#### Returns

uiLabelSetText() has no return value.

#### Description

#### Example(s)

``` c

uiLabelSetText( pLabel, "If you are going through hell, keep going!" )

```

## uiNewLabel( cText )

#### Arguments

* `cText` 

#### Returns

uiNewLabel() returns pointer.

#### Description

Creates a new label with the given text.

#### Example(s)

``` c

pLabel := uiNewLabel( "Good morning" )

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pLabel

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Label example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pLabel := uiNewLabel( "Each day is dri­ve through his­to­ry." )

   uiWindowSetChild( pWindow, pLabel )

   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/label_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pLabel

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Label example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pLabel := uiNewLabel( Version() + hb_eol() + ;
                                     hb_eol() + ;
                     hb_Compiler() + hb_eol() + ;
                                     hb_eol() + ;
                     OS()          + hb_eol() + ;
                                     hb_eol() + ;
                     "hbui 0.00"  )

   uiWindowSetChild( pWindow, pLabel )

   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/label_02.png "With family Linux Ubuntu desktop")


---
layout: page
title: uiMultilineEntry
---

# uiMultilineEntry

#### Description

uiMultilineEntry, unconstrained text box used to enter or edit long strings.

#### Functions

> * uiMultilineEntryAppend( `pMultilineEntry` , `cText` )
> * uiMultilineEntryOnChanged( `pMultilineEntry` , `UserFunction( pMultilineEntry, data )` , `data` )
> * uiMultilineEntryReadOnly( `pMultilineEntry` )
> * uiMultilineEntrySetReadOnly( `pMultilineEntry` , `readonly` )
> * uiMultilineEntrySetText( `pMultilineEntry` , `cText` )
> * uiMultilineEntryText( `pMultilineEntry` )
> * uiNewMultilineEntry()
> * uiNewNonWrappingMultilineEntry()

### uiMultilineEntryAppend( pMultilineEntry, cText )

#### Arguments

* `pMultilineEntry` 
* `cText` 

#### Returns

uiMultilineEntryAppend() has no return value.

#### Description

#### Example

``` c

```

### uiMultilineEntryOnChanged( pMultilineEntry, UserFunction( pMultilineEntry, data ), data )

#### Arguments

* `pMultilineEntry` 
* `UserFunction( pMultilineEntry, data )` 
* `data` 

#### Returns

uiMultilineEntryOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiMultilineEntryReadOnly( pMultilineEntry )

#### Arguments

* `pMultilineEntry` 

#### Returns

uiMultilineEntryReadOnly() numeric return value using an integer.

#### Description

#### Example

``` c

```

### uiMultilineEntrySetReadOnly( pMultilineEntry, readonly )

#### Arguments

* `pMultilineEntry` 
* `readonly` 

#### Returns

uiMultilineEntrySetReadOnly() has no return value.

#### Description

#### Example

``` c

```

### uiMultilineEntrySetText( pMultilineEntry, cText )

#### Arguments

* `pMultilineEntry` 
* `cText` 

#### Returns

uiMultilineEntrySetText() has no return value.

#### Description

#### Example

``` c

```

### uiMultilineEntryText( pMultilineEntry )

#### Arguments

* `pMultilineEntry` 

#### Returns

uiMultilineEntryText() a character return value.

#### Description

#### Example

``` c

```

### uiNewMultilineEntry()

#### Returns

uiNewMultilineEntry() returns pointer.

#### Description

#### Example

``` c

```

### uiNewNonWrappingMultilineEntry()

#### Returns

uiNewNonWrappingMultilineEntry() returns pointer.

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
   LOCAL pGroup
   LOCAL pForm
   LOCAL pMultilineEntry

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Multi line entry", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, .T. )

   pForm := uiNewForm()
   uiFormSetPadded( pForm, .T. )
   uiGroupSetChild( pGroup, pForm )

   pMultilineEntry := uiNewMultilineEntry()

   uiFormAppend( pForm, "Multi line entry", pMultilineEntry, .T. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/multilineentry_01.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pGroup
   LOCAL pForm
   LOCAL pMultilineEntry
   LOCAL cText := MemoRead( "test.prg" ) /* test.prg this example */  

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Multi line entry", 700, 660, .T. )
   uiWindowSetMargined( pWindow, 1 )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, 1)

   pForm := uiNewForm()
   uiFormSetPadded( pForm, 1 )
   uiGroupSetChild( pGroup, pForm )

   pMultilineEntry := uiNewMultilineEntry()
   uiMultilineEntryAppend( pMultilineEntry, cText )  

   uiFormAppend( pForm, "Multi line entry", pMultilineEntry, .T. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/multilineentry_02.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pGroup
   LOCAL pForm
   LOCAL pWrappingMultilineEntry

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Wrapping multi line entry", 300, 300, .T. )
   uiWindowSetMargined( pWindow, 1 )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, 1)

   pForm := uiNewForm()
   uiFormSetPadded( pForm, 1 )
   uiGroupSetChild( pGroup, pForm )

   pWrappingMultilineEntry := uiNewNonWrappingMultilineEntry()

   uiFormAppend( pForm, "Wrapping multi" + hb_eol() + "line entry", pWrappingMultilineEntry, .T. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/wrappingmultilineentry_01.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pGroup
   LOCAL pForm
   LOCAL pWrappingMultilineEntry
   LOCAL cText := MemoRead( "test.prg" ) /* test.prg = this example */  

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Wrapping multi line entry", 300, 300, .T. )
   uiWindowSetMargined( pWindow, 1 )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, 1)

   pForm := uiNewForm()
   uiFormSetPadded( pForm, 1 )
   uiGroupSetChild( pGroup, pForm )

   pWrappingMultilineEntry := uiNewNonWrappingMultilineEntry()
   uiMultilineEntryAppend( pWrappingMultilineEntry, cText )  

   uiFormAppend( pForm, "Wrapping multi" + hb_eol() + "line entry", pWrappingMultilineEntry, .T. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/wrappingmultilineentry_02.png "With family Linux Ubuntu desktop")


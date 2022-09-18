---
layout: page
title: uiEntry
---

# uiEntry

#### Description

uiEntry is a Control that represents a space that the user can type a single line of text into.uiEntry is a flexible control with several possible use.

#### Functions

> * uiEntryOnChanged( `pEntry` , `UserFunction( pEntry, data )` , `data` )
> * uiEntryReadOnly( `pEntry` )
> * uiEntrySetReadOnly( `pEntry` , `lReadonly` )
> * uiEntrySetText( `pEntry` , `cText` )
> * uiEntryText( `pEntry` )
> * uiNewEntry()
> * uiNewPasswordEntry()
> * uiNewSearchEntry()

### uiEntryOnChanged( pEntry, UserFunction( pEntry, data ), data )

#### Arguments

* `pEntry` 
* `UserFunction( pEntry, data )` 
* `data` 

#### Returns

uiEntryOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiEntryReadOnly( pEntry )

#### Arguments

* `pEntry` 

#### Returns

uiEntryReadOnly() a logical return value `.T.` or `.F.` 

#### Description

Returns whether the entry is read only or not.

#### Example

``` c

```

### uiEntrySetReadOnly( pEntry, lReadonly )

#### Arguments

* `pEntry` 
* `lReadonly` 

#### Returns

uiEntrySetReadOnly() has no return value.

#### Description

Sets whether the entry is read only or not.

#### Example

``` c

uiEntrySetReadOnly( pEntry, 1 )

```

### uiEntrySetText( pEntry, cText )

#### Arguments

* `pEntry` 
* `cText` 

#### Returns

uiEntrySetText() has no return value.

#### Description

#### Example

``` c

```

### uiEntryText( pEntry )

#### Arguments

* `pEntry` 

#### Returns

uiEntryText() a character return value.

#### Description

#### Example

``` c

```

### uiNewEntry()

#### Arguments

#### Returns

uiNewEntry() returns pointer.

#### Description

#### Example

``` c

pEntry := uiNewEntry()

```

### uiNewPasswordEntry()

#### Arguments

#### Returns

uiNewPasswordEntry() returns pointer.

#### Description

#### Example

``` c

pEntry := uiNewPasswordEntry()

```

### uiNewSearchEntry()

#### Arguments

#### Returns

uiNewSearchEntry() returns pointer.

#### Description

#### Example

``` c

pEntry := uiNewSearchEntry()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pGroup
   LOCAL pForm
   LOCAL pEntry, pPasswordEntry, pSearchEntry

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Entry example", 300, -1, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pGroup := uiNewGroup("")
   uiGroupSetMargined( pGroup, .T. )

   pForm := uiNewForm()
   uiFormSetPadded( pForm, .T. )
   uiGroupSetChild( pGroup, pForm )

   pEntry         := uiNewEntry()
   pPasswordEntry := uiNewPasswordEntry()
   pSearchEntry   := uiNewSearchEntry()

   uiFormAppend( pForm, "Username", pEntry, .F. )
   uiFormAppend( pForm, "Email address", pPasswordEntry, .F. )
   uiFormAppend( pForm, "Password", pSearchEntry, .F. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/entry_01.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

STATIC pEntry

PROCEDURE Main()

   LOCAL error
   LOCAL pButton
   LOCAL pVerticalBox
   LOCAL pWindow

   IF ! HB_ISNULL( error := uiInit() )
      Alert( "Failed to initialize libui... " + error )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Hello", 300, 200, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pEntry := uiNewEntry()
   pButton := uiNewButton( "Greet" )
   pVerticalBox := uiNewVerticalBox()

   uiBoxAppend( pVerticalBox, uiNewLabel( "Enter your name:" ), .F. )
   uiBoxAppend( pVerticalBox, pEntry, .F. )
   uiBoxAppend( pVerticalBox, pButton, .F. )

   uiButtonOnClicked( pButton, @OnClicked(), NIL )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )
   uiMain()
   uiUninit()

   RETURN

STATIC PROCEDURE OnClicked( b, DATA )

   HB_SYMBOL_UNUSED( DATA )

   uiButtonSetText( b, "Hello! " )
   uiEntrySetText( pEntry, hb_UserName() )

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/entry_02.png "With family Linux Ubuntu desktop")


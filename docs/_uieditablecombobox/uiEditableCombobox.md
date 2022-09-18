---
layout: page
title: uiEditableCombobox
---

# uiEditableCombobox

#### Description

#### Functions

> * uiEditableComboboxAppend( `pEditableCombobox` , `cText` )
> * uiEditableComboboxOnChanged( `pEditableCombobox` , `UserFunction( pEditableCombobox, data )` , `data` )
> * uiEditableComboboxSetText( `pEditableCombobox` , `cText` )
> * uiEditableComboboxText( `pEditableCombobox` )
> * uiNewEditableCombobox()

### uiEditableComboboxAppend( pEditableCombobox, cText )

#### Arguments

* `pEditableCombobox` 
* `cText` 

#### Returns

uiEditableComboboxAppend() has no return value.

#### Description

#### Example

``` c

uiEditableComboboxAppend( pEditableCombobox, "Hello!" )

```

### uiEditableComboboxOnChanged( pEditableCombobox, UserFunction( pEditableCombobox, data ), data )

#### Arguments

* `pEditableCombobox` 
* `UserFunction( uiEditableCombobox, data )` 
* `data` 

#### Returns

uiEditableComboboxOnChanged() has no return value.

#### Description

#### Example

``` c

uiEditableComboboxOnChanged( pEditableCombobox, UserFunction( pEditableCombobox, data ), data )

```

### uiEditableComboboxSetText( pEditableCombobox, cText )

#### Arguments

* `pEditableCombobox` 
* `cText` 

#### Returns

uiEditableComboboxSetText() has no return value.

#### Description

#### Example

``` c

uiEditableComboboxSetText( pEditableCombobox, "New text" )

```

### uiEditableComboboxText( pEditableCombobox )

#### Arguments

* uiEditableCombobox

#### Returns

uiEditableComboboxText() a character return value.

#### Description

#### Example

``` c

cEditableComboboxText := uiEditableComboboxText( pEditableCombobox )

```

### uiNewEditableCombobox()

#### Returns

uiNewEditableCombobox() returns pointer.

#### Description

#### Example

``` c

pEditableCombobox := uiNewEditableCombobox()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pEditableCombobox
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Editable combobox", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )
   
   pEditableCombobox := uiNewEditableCombobox()
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 1")
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 2")
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 3")

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pEditableCombobox, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/editablecombo_01.png "With family Linux Ubuntu desktop")


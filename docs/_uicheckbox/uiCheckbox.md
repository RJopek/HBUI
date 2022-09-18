---
layout: page
title: uiCheckbox
---

# uiCheckbox

#### Description

uiCheckbox is a Control that represents a box with a text label at its side. When the user clicks the checkbox, a check mark will appear in the box, clicking it again removes the check.uiCheckbox allow users to make a decision between two or more clearly differing choices.

#### Functions

> * uiCheckboxText( `pCheckbox` )
> * uiCheckboxSetText( `pCheckbox` , `cText` )
> * uiCheckboxOnToggled( `pCheckbox` , `UserFunction( pCheckbox, data )` , `data` )
> * uiCheckboxChecked( `pCheckbox` )
> * uiCheckboxSetChecked( `pCheckbox` , `lChecked` )
> * uiNewCheckbox( cText )

### uiCheckboxText( pCheckbox )

#### Arguments

* `pCheckbox` 

#### Returns

uiCheckboxText() a character return value.

#### Description

Text returns the Checkbox's text.

#### Example

``` c

cCheckboxText := uiCheckboxText( pCheckbox )

```

### uiCheckboxSetText( pCheckbox, cText )

#### Arguments

* `pCheckbox` 
* `cText` the text of the checkbox.

#### Returns

uiCheckboxSetText() has no return value.

#### Description

Sets the text of the checkbox.

#### Example

``` c

uiCheckboxSetText( pCheckbox, "it's free" )

```

### uiCheckboxOnToggled( pCheckbox, UserFunction( pCheckbox, data ), data )

#### Arguments

* `pCheckbox` 
* `UserFunction( uiCheckbox, data )` is the name of a user-defined function.
* data

#### Returns

uiCheckboxOnToggled() has no return value.

#### Description

#### Example

``` c

uiCheckboxOnToggled( pCheckbox, UserFunction( pCheckbox, data ), NIL )

```

### uiCheckboxChecked( pCheckbox )

#### Arguments

* `pCheckbox` 

#### Returns

uiCheckboxChecked() a logical return value `.T.` or `.F.`

#### Description

Sets whether the checkbox is checked or not.

#### Example

``` c

lCheckbox := uiCheckboxChecked( pCheckbox )

/* or */

IF uiCheckboxChecked( pCheckbox )

   ...

ELSE

   ...

ENDIF

```

### uiCheckboxSetChecked( pCheckbox, lChecked )

#### Arguments

* `pCheckbox` 
* `lChecked` sets whether the Checkbox is checked `.T.` or `.F.`

#### Returns

uiCheckboxSetChecked() has no return value.

#### Description

Sets whether the checkbox is checked or not.

#### Example

``` c

uiCheckboxSetChecked( pCheckbox, .T. )

```

### uiNewCheckbox( cText )

#### Arguments

* `cText` 

#### Returns

uiNewCheckbox() returns pointer.

#### Description

uiNewCheckbox() creates a new Checkbox with the given text as its label.

#### Example

``` c

pCheckbox := uiNewCheckbox( "GitHub" )

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pCheckbox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Check box example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, .T. )

   pCheckbox := uiNewCheckbox( "GitHub" )
   uiCheckboxSetChecked( pCheckbox, .T. )

   uiWindowSetChild( pWindow, pCheckbox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/checkbox_01.png "With family Linux Ubuntu desktop")

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pCheckbox
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Check box example", 300, 300, .T. )
   uiWindowSetMargined( pWindow, .T. )

   pCheckbox := uiNewCheckbox( "GitHub" )
   uiCheckboxSetChecked( pCheckbox, .T. )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pCheckbox, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/checkbox_02.png "With family Linux Ubuntu desktop")

---


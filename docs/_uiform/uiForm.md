---
layout: page
title: uiForm
---

# uiForm

#### Description

uiForm is a Control that holds a group of Controls vertically with labels next to each. By default, each control has its preferred height; if a control is marked "stretchy", it will take whatever space is left over. If multiple controls are marked stretchy, they will be given equal shares of the leftover space. There can also be space between each control ("padding").

#### Functions

> * uiFormAppend( `pForm` , `cLabel` , `pControl` , `lStretchy` )
> * uiFormDelete( `pForm` , `nIndex` )
> * uiFormPadded( `pForm` )
> * uiFormSetPadded( `pForm` , `lPadded` )
> * uiNewForm()

### uiFormAppend( pForm, cLabel, pControl, lStretchy )

#### Arguments

* `pForm` 
* `cLabel` 
* `pControl` 
* `lStretchy` 

#### Returns

uiFormAppend() has no return value.

#### Description

uiFormAppend() adds the given control to the end of the Form.

#### Example

``` c

```

### uiFormDelete( pForm, nIndex )

#### Arguments

* `pForm` 
* `nIndex` 

#### Returns

uiFormDelete() has no return value.

#### Description

uiFormDelete() deletes the nth control of the Form.

#### Example

``` c

```

### uiFormPadded( pForm )

#### Arguments

* `pForm` 

#### Returns

uiFormPadded() numeric return value using an integer.

#### Description

#### Example

``` c

```

### uiFormSetPadded( pForm, lPadded )

#### Arguments

* `pForm` 
* `lPadded` 

#### Returns

uiFormSetPadded() has no return value.

#### Description

#### Example

``` c

```

### uiNewForm()

#### Returns

uiNewForm() returns pointer.

#### Description

uiNewForm() creates a new horizontal Form.

#### Example

``` c

pForm := uiNewForm()

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

   pWindow := uiNewWindow( "Form example", 300, 300, .T. )
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

![Linux]({{ site.baseurl }}/assets/img/form_01.png "With family Linux Ubuntu desktop")


---
layout: page
title: Standard Dialogs
---

# Standard Dialogs

#### Description

#### Functions

> * uiMsgBox( `pWindow` , `cTitle` , `cDescription` )
> * uiMsgBoxError( `pWindow` , `cTitle` , `cDescription` )
> * uiOpenFile( `pWindow` )
> * uiSaveFile( `pWindow` )

### uiMsgBox( pWindow, cTitle, cDescription )

#### Arguments

* `pWindow` 
* `cTitle` 
* `cDescription` 

#### Returns

uiMsgBox() has no return value.

#### Description

uiMsgBox() function provides a modal dialog for informing the user or for asking the user a question and receiving an answer.

#### Example

``` c

uiMsgBox( pWindow, "This is a normal message box.", "More detailed information can be shown here." )

```

### uiMsgBoxError( pWindow, cTitle, cDescription )

#### Arguments

* `pWindow` 
* `cTitle` 
* `cDescription` 

#### Returns

uiMsgBoxError() has no return value.

#### Description

An error message alerts users of a problem that has already occurred. By contrast, a warning message alerts users of a condition that might cause a problem in the future. Error messages can be presented using modal dialog boxes, in-place messages, notifications, or balloons.

#### Example

``` c

uiMsgBoxError( pWindow, "This message box describes an error.", "More detailed information can be shown here." )

```

### uiOpenFile( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiOpenFile() a character return value.

#### Description

#### Example

``` c

cOpenFile := uiOpenFile( pWindow )

```

### uiSaveFile( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiSaveFile() a character return value.

#### Description

#### Example

``` c

cSaveFile := uiSaveFile( pWindow )

```

#### Sample source code

##### Output:


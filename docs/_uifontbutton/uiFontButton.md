---
layout: page
title: uiFontButton
---

# uiFontButton

#### Description

uiFontButton is a button that allows users to choose a font when they click on it.

#### Functions

> * uiFontButtonFont( `pFontButton` , `pFontDescriptor` )
> * uiFontButtonOnChanged( `pFontButton` , `UserFunction( pFontButton, NIL )` , `data` )
> * uiFreeFontButtonFont( `pFontDescriptor` )
> * uiNewFontButton()

### uiFontButtonFont( pFontButton, pFontDescriptor )

#### Arguments

* `pFontButton` 
* `pFontDescriptor` 

#### Returns

uiFontButtonFont() has no return value.

#### Description

#### Example

``` c

```

### uiFontButtonOnChanged( pFontButton, UserFunction( pFontButton, NIL ), data )

#### Arguments

* `pFontButton` 
* `UserFunction( uiFontButton, NIL )` 
* `data` 

#### Returns

uiFontButtonOnChanged() has no return value.

#### Description

uiFontButtonOnChanged() sets the function that is called when the font in the uiFontButton is changed.

#### Example

``` c

```

### uiFreeFontButtonFont( pFontDescriptor )

#### Arguments

* `pFontDescriptor` 

#### Returns

uiFreeFontButtonFont() has no return value.

#### Description

uiFreeFontButtonFont() frees resources allocated in desc by uiFontButtonFont(). After calling uiFreeFontButtonFont(), the contents of desc should be assumed to be undefined (though since you allocate desc itself, you can safely reuse desc for other font descriptors). Calling uiFreeFontButtonFont() on a uiFontDescriptor not returned by uiFontButtonFont() results in undefined behavior.

#### Example

``` c

```

### uiNewFontButton()

#### Arguments

#### Returns

uiNewFontButton() returns object.

#### Description

uiNewFontButton() creates a new uiFontButton. The default font selected into the uiFontButton is OS-defined.

#### Example

``` c

pFontButton := uiNewFontButton()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pFontButton
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Font button example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pFontButton := uiNewFontButton()

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pFontButton, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/uifontbutton_01.png "With family Linux Ubuntu desktop")


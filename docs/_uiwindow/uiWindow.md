---
layout: page
title: uiWindow
---

# uiWindow

#### Description

uiWindow is a Control that represents a top-level window. A Window contains one child Control that occupies the entirety of the window. Though a Window is a Control, a Window cannot be the child of another Control. Provides the ability to create, configure, show, and manage the lifetime of windows and dialog boxes.

#### Functions

> * uiNewWindow( `cTitle` , `nWidth` , `nHeight` , `lHasMenubar` )
> * uiWindowBorderless( `pWindow` )
> * uiWindowContentSize( `pWindow` , `nWidth` , `nHeight` )
> * uiWindowFullscreen( `pWindow` )
> * uiWindowMargined( `pWindow` )
> * uiWindowOnClosing( `pWindow` , `UserFunction( pWindow, data )` , `data` ) 
> * uiWindowOnContentSizeChanged( `pWindow` , `UserFunction( pWindow, NIL )` , `data` )
> * uiWindowSetBorderless( `pWindow` , `lBorderless` )
> * uiWindowSetChild( `pWindow` , `oControl` )
> * uiWindowSetContentSize( `pWindow` , `nWidth` , `nHeight` )
> * uiWindowSetFullscreen( `pWindow` , `lFullscreen` )
> * uiWindowSetMargined( `pWindow` , `lMargined` )
> * uiWindowSetTitle( `pWindow` , `cTitle` )
> * uiWindowTitle( `pWindow` )

### uiNewWindow( cTitle, nWidth, nHeight, lHasMenubar )

#### Arguments

* `cTitle` sets a window's title.
* `nWidth` sets the width of the application window in pixels.
* `nHeight` sets the height of the application window in pixels.
* `lHasMenubar` is an logical value that specifies whether a window has a menu bar `.T.` or `.F.` 

#### Returns

uiNewWindow() returns pointer.

#### Description

The UiWindow is responsible to show and manage native windows. UiWindow instance could contains only one control.

#### Example

``` c

pWindow := uiNewWindow( "Hello Harbour!", 800, 600, .F. )

```

### uiWindowBorderless( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiWindowBorderless() a logical return value `.T.` or `.F.` 

#### Description

uiWindowBorderless() Allow to specify that the window is a frameless one, without borders, title bar and OS window control widgets.

#### Example

``` c

```

### uiWindowContentSize( pWindow, nWidth, nHeight )

#### Arguments

* `pWindow` 
* `nWidth` 
* `nHeight` 

#### Returns

uiWindowContentSize() has no return value.

#### Description

The window's content size.

#### Example

``` c

uiWindowContentSize( pWindow, 800, 600 )

```

### uiWindowFullscreen( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiWindowFullscreen() a logical return value `.T.` or `.F.` 

#### Description

Returns whether the window is in fullscreen.

#### Example

``` c

```

### uiWindowMargined( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiWindowMargined() a logical return value `.T.` or `.F.` 

#### Description

Returns whether the window is margined or not.

#### Example

``` c

```

### uiWindowOnClosing( pWindow, UserFunction( pWindow, data ), data ) 

#### Arguments

* `pWindow` 
* `UserFunction( pWindow, data )` 
* `data` 

#### Returns

uiWindowOnClosing() has no return value.

#### Description

uiWindowOnClosing() registers f to be run when the user clicks the Window's close button. Only one function can be registered at a time. If f returns true, the window is destroyed with the Destroy method. If f returns false, or if OnClosing is never called, the window is not destroyed and is kept visible.

#### Example

``` c

```

### uiWindowOnContentSizeChanged( pWindow, UserFunction( pWindow, NIL ), data )

#### Arguments

* `pWindow` 
* `UserFunction( pWindow, NIL )` 
* `data` 

#### Returns

uiWindowOnContentSizeChanged() has no return value.

#### Description

#### Example

``` c

```

### uiWindowSetBorderless( pWindow, lBorderless )

#### Arguments

* `pWindow` 
* `lBorderless` 

#### Returns

uiWindowSetBorderless() has no return value.

#### Description

uiWindowSetBorderless sets the Window to be borderless or not.

#### Example

``` c

uiWindowSetBorderless( pWindow, uiCheckboxChecked( oCheckbox ) )

```

### uiWindowSetChild( pWindow, oControl )

#### Arguments

* `pWindow` 
* `oControl` 

#### Returns

uiWindowSetChild() has no return value.

#### Description

uiWindowSetChild() sets the Window's child to child. If child is nil, the Window will not have a child.

#### Example

``` c

uiWindowSetChild( pWindow, uiControl( oButton ) )

```

### uiWindowSetContentSize( pWindow, nWidth, nHeight )

#### Arguments

* `pWindow` 
* `nWidth` 
* `nHeight` 

#### Returns

uiWindowSetContentSize() has no return value.

#### Description

Sets the window's content size.

#### Example

``` c

uiWindowSetContentSize( pWindow, 800, 600 )

```

### uiWindowSetFullscreen( pWindow, lFullscreen )

#### Arguments

* `pWindow` 
* `lFullscreen` 

#### Returns

uiWindowSetFullscreen() has no return value.

#### Description

Sets whether the window is in fullscreen.

#### Example

``` c

uiWindowSetFullscreen( pWindow, uiCheckboxChecked( lFullscreen ) )

```

### uiWindowSetMargined( pWindow, lMargined )

#### Arguments

* `pWindow` 
* `lMargined` 

#### Returns

uiWindowSetMargined() has no return value.

#### Description

uiWindowSetMargined() controls whether the Window has margins around its child. The size of the margins are determined by the OS and its best practices

#### Example

``` c

uiWindowSetMargined( pWindow, .T. )

```

### uiWindowSetTitle( pWindow, cTitle )

#### Arguments

* `pWindow` 
* `cTitle` 

#### Returns

uiWindowSetTitle() has no return value.

#### Description

uiWindowSetTitle() sets the Window's title to title.

#### Example

``` c

uiWindowSetTitle( pWindow, "Hello world!" )

```

### uiWindowTitle( pWindow )

#### Arguments

* `pWindow` 

#### Returns

uiWindowTitle() a character return value.

#### Description

Title returns the Window's title.

#### Example

``` c

cOldTitle := uiWindowTitle( pWindow )

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .F. )

   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.
```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/window_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .F. )

   uiControlShow( pWindow )

   uiMainSteps()
   DO WHILE uiMainStep( .T. )
   ENDDO

   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

   uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/window_02.png "With family Linux Ubuntu desktop")

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

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .F. )
   cWindowTitle := uiWindowTitle( pWindow )


   uiNewLabel( cWindowTitle )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )
   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN .T.

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/window_03.png "With family Linux Ubuntu desktop")


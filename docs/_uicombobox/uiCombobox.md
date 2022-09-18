---
layout: page
title: uiCombobox
---

# uiCombobox

#### Description

uiCombobox is a Control that represents a drop-down list of strings that the user can choose one of at any time. An editable Combobox also has an entry field that the user can type an alternate choice in

#### Functions

> * uiComboboxAppend( `pCombobox` , `cText` )
> * uiComboboxOnSelected( `pCombobox` , `UserFunction( pCombobox, data )` , `data` )
> * uiComboboxSelected( `pCombobox` )
> * uiComboboxSetSelected( `pCombobox` , `nN` )
> * uiNewCombobox()

### uiComboboxAppend( pCombobox, cText )

#### Arguments

* `pCombobox` 
* `cText` 

#### Returns

uiComboboxAppend() has no return value.

#### Description

Appends a new item to the combobox.

#### Example

``` c

uiComboboxAppend( pCombobox, "Beautiful F1" )

```

### uiComboboxOnSelected( pCombobox, UserFunction( pCombobox, data ), data )

#### Arguments

* `pCombobox` 
* `UserFunction( pCombobox, data )` is the name of a user-defined function.
* `data` 

#### Returns

uiComboboxOnSelected() has no return value.

#### Description

#### Example

``` c

uiComboboxOnSelected( pCombobox, onComboboxChanged(), data )

```

### uiComboboxSelected( pCombobox )

#### Arguments

* `pCombobox` 

#### Returns

uiComboboxSelected() numeric return value using an integer.

#### Description

Returns index of the selected item.

#### Example

``` c

uiComboboxSelected( pCombobox )

```

### uiComboboxSetSelected( pCombobox, nN )

#### Arguments

* `pCombobox` 
* `nN` 

#### Returns

uiComboboxSetSelected() has no return value.

#### Description

Sets selected item.

#### Example

``` c

uiComboboxSetSelected( pCombobox, 1 )

```

### uiNewCombobox()

#### Arguments

#### Returns

uiNewCombobox() returns pointer.

#### Description

Creates a new combobox.

#### Example

``` c

pCombobox := uiNewCombobox()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pCombobox

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Combo box example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pCombobox := uiNewCombobox()

   uiComboboxAppend( pCombobox, "Black         #000000 ")
   uiComboboxAppend( pCombobox, "Blue          #aa0000 ")
   uiComboboxAppend( pCombobox, "Green         #00aa00 ")
   uiComboboxAppend( pCombobox, "Cyan          #aaaa00 ")
   uiComboboxAppend( pCombobox, "Red           #0000aa ")
   uiComboboxAppend( pCombobox, "Magenta       #aa00aa ")
   uiComboboxAppend( pCombobox, "Brown         #0055aa ")
   uiComboboxAppend( pCombobox, "Light gray    #aaaaaa ")
   uiComboboxAppend( pCombobox, "Gray          #555555 ")
   uiComboboxAppend( pCombobox, "Light blue    #ff5555 ")
   uiComboboxAppend( pCombobox, "Light green   #55ff55 ")
   uiComboboxAppend( pCombobox, "Light cyan    #ffff55 ")
   uiComboboxAppend( pCombobox, "Light red     #5555ff ")
   uiComboboxAppend( pCombobox, "Light magenta #ff55ff ")
   uiComboboxAppend( pCombobox, "Yellow        #55ffff ")
   uiComboboxAppend( pCombobox, "White         #ffffff ")

   uiComboboxSetSelected( pCombobox, 5 )

   uiWindowSetChild( pWindow, pCombobox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

###### Output:

![Linux]({{ site.baseurl }}/assets/img/combobox_01.png "With family Linux Ubuntu desktop")

## Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pCombobox
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Combo box example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pCombobox := uiNewCombobox()

   uiComboboxAppend( pCombobox, "Black         #000000 ")
   uiComboboxAppend( pCombobox, "Blue          #aa0000 ")
   uiComboboxAppend( pCombobox, "Green         #00aa00 ")
   uiComboboxAppend( pCombobox, "Cyan          #aaaa00 ")
   uiComboboxAppend( pCombobox, "Red           #0000aa ")
   uiComboboxAppend( pCombobox, "Magenta       #aa00aa ")
   uiComboboxAppend( pCombobox, "Brown         #0055aa ")
   uiComboboxAppend( pCombobox, "Light gray    #aaaaaa ")
   uiComboboxAppend( pCombobox, "Gray          #555555 ")
   uiComboboxAppend( pCombobox, "Light blue    #ff5555 ")
   uiComboboxAppend( pCombobox, "Light green   #55ff55 ")
   uiComboboxAppend( pCombobox, "Light cyan    #ffff55 ")
   uiComboboxAppend( pCombobox, "Light red     #5555ff ")
   uiComboboxAppend( pCombobox, "Light magenta #ff55ff ")
   uiComboboxAppend( pCombobox, "Yellow        #55ffff ")
   uiComboboxAppend( pCombobox, "White         #ffffff ")
   uiComboboxSetSelected( pCombobox, 5 )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pCombobox, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)

   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

###### Output:

![Linux]({{ site.baseurl }}/assets/img/combobox_02.png "With family Linux Ubuntu desktop")

## Sample source code

This example builds a string that contains all currently available drives on your system Windows.

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pHorizontalBox
   LOCAL pCombobox
   LOCAL i

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "uiCombobox", 1000, 600, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

#if defined( __PLATFORM__WINDOWS )

   pCombobox := uiNewCombobox()
   FOR i := 1 TO 26
      IF DiskChange( Chr( i + 64 ) )
         uiComboboxAppend( pCombobox, Chr( i + 64 ) )
      ENDIF
   NEXT
   uiComboboxSetSelected( pCombobox, 0 )
   uiBoxAppend( pHorizontalBox, pCombobox, .T. )

   pCombobox := uiNewCombobox()
   FOR i := 1 TO 26
      IF DiskChange( Chr( i + 64 ) )
         uiComboboxAppend( pCombobox, Chr( i + 64 ) )
      ENDIF
   NEXT
   uiComboboxSetSelected( pCombobox, 0 )
   uiBoxAppend( pHorizontalBox, pCombobox, .T. )

#else
   HB_SYMBOL_UNUSED( pCombobox )
#endif

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

---


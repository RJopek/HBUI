---
layout: page
title: uiGrid
---

# uiGrid

uiGrid is a Control that arranges other Controls in a uiGrid. uiGrid is a very powerful container: it can position and size each Control in several ways and can (and must) have Controls added to it in any direction. It can also have Controls spanning multiple rows and columns.

Each Control in a uiGrid has associated "expansion" and "alignment" values in both the X and Y direction. Expansion determines whether all cells in the same row/column are given whatever space is left over after figuring out how big the rest of the uiGrid should be. Alignment determines the position of a Control relative to its cell after computing the above. The special alignment Fill can be used to grow a Control to fit its cell. Note that expansion and alignment are independent variables

#### Description

#### Functions

> * uiGridAppend( `pGrid` , `pControl` , `nLeft` , `nTop` , `nXspan` , `nYspan` , `lHexpand` , `nAlign` , `lVexpand` , `nAlign` )
> * uiGridInsertAt( `pGrid` , `pControl` , `pControl` , `nAt` , `nXspan` , `nYspan` , `lHexpand` , `nAlign` , `lVexpand` , `nAlign` )
> * uiGridPadded( `pGrid` )
> * uiGridSetPadded( `pGrid` , `lPadded` )
> * uiNewGrid()

### uiGridAppend( pGrid, pControl, nLeft, nTop, nXspan, nYspan, lHexpand, nAlign, lVexpand, nAlign )

#### Arguments

* `pGrid` 
* `pControl` 
* `nLeft` 
* `nTop` 
* `nXspan` 
* `nYspan` 
* `lHexpand` a logical parameter `.T.` or `.F.`
* `nAlign` 
* `lVexpand` a logical parameter `.T.` or `.F.`
* `nAlign` 

#### Returns

uiGridAppend() has no return value.

#### Description

uiGridAppend() adds the given control to the uiGrid, at the given coordinate.

#### Example

``` c

```

### uiGridInsertAt( pGrid, pControl, pControl, nAt, nXspan, nYspan, lHexpand, nAlign, lVexpand, nAlign )

#### Arguments

* `pGrid` 
* `pControl` 
* `pControl` 
* `nAt` 
* `nXspan` 
* `nYspan` 
* `lHexpand` a logical parameter `.T.` or `.F.`
* `nAlign` 
* `lVexpand` a logical parameter `.T.` or `.F.`
* `nAlign` 

#### Returns

uiGridInsertAt() has no return value.

#### Description

InsertAt adds the given control to the uiGrid relative to an existing control.

#### Example

``` c

```

### uiGridPadded( pGrid )

#### Arguments

* `pGrid` 

#### Returns

uiGridPadded() a logical return value `.T.` or `.F.`

#### Description

Padded returns whether there is space between each control of the uiGrid.

#### Example

``` c

```

### uiGridSetPadded( pGrid, lPadded )

#### Arguments

* `pGrid` 
* `lPadded` a logical parameter `.T.` or `.F.`

#### Returns

uiGridSetPadded() has no return value.

#### Description

uiGridSetPadded controls whether there is space between each control of the uiGrid. The size of the padding is determined by the OS and its best practices.

#### Example

``` c

```

### uiNewGrid()

#### Returns

uiNewGrid() returns pointer.

#### Description

uiNewGrid() creates a new uiGrid.

#### Example

``` c

pGrid := uiNewGrid()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()
   
   LOCAL cError
   LOCAL pWindow
   LOCAL pButton
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Grid example", 640, 340, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pButton := uiNewButton( "Open" )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pButton, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/grid_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pGrid
   LOCAL pButton

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Grid example", 640, 340, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )

   pButton := uiNewButton( "Help" )
   uiGridAppend( pGrid, pButton, 0, 4, 1, 1, .T., uiAlignFill, .T., uiAlignEnd )

   pButton := uiNewButton( "Menu" )
   uiGridAppend( pGrid, pButton, 1, 4, 1, 1, .T., uiAlignFill, .T., uiAlignEnd )

   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/grid_02.png "With family Linux Ubuntu desktop")

---


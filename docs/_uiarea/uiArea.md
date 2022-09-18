---
layout: page
title: uiArea
---

# uiArea

#### Description

uiArea is a Control that represents a blank canvas that a program can draw on as it wishes. Areas also receive keyboard and mouse events, and programs can react to those as they see fit. Drawing and event handling are handled through an instance of a type that implements AreaHandler that every Area has; see AreaHandler for details.

There are two types of areas. Non-scrolling areas are rectangular and have no scrollbars. Programs can draw on and get mouse events from any point in the Area, and the size of the Area is decided by package ui itself, according to the layout of controls in the Window the Area is located in and the size of said Window. There is no way to query the Area's size or be notified when its size changes; instead, you are given the area size as part of the draw and mouse event handlers, for use solely within those handlers.

Scrolling areas have horziontal and vertical scrollbars. The amount that can be scrolled is determined by the area's size, which is decided by the programmer (both when creating the Area and by a call to SetSize). Only a portion of the Area is visible at any time; drawing and mouse events are automatically adjusted to match what portion is visible, so you do not have to worry about scrolling in your event handlers. AreaHandler has more information.

The internal coordinate system of an Area is points, which are floating-point and device-independent. For more details, see AreaHandler. The size of a scrolling Area must be an exact integer number of points (that is, you cannot have an Area that is 32.5 points tall) and thus the parameters to NewScrollingArea and SetSize are ints. All other instances of points in parameters and structures (including sizes of drawn objects) are float64s.

#### Functions

> * uiAreaBeginUserWindowMove( `pArea` )
> * uiAreaBeginUserWindowResize( `pArea` , `nWindowResizeEdge` )
> * uiAreaQueueRedrawAll( `pArea` )
> * uiAreaScrollTo( `pArea` , `nX` , `nY` , `nWidth` , `nHeight` )
> * uiAreaSetSize( `pArea` , `nWidth` , `nHeight` )
> * uiNewArea( `pAreaHandler` )
> * uiNewScrollingArea( `pAreaHandler` , `nWidth` , `nHeight` )

### uiAreaBeginUserWindowMove( pArea )

#### Arguments

* `pArea` 

#### Returns

uiAreaBeginUserWindowMove() has no return value.

#### Description

#### Example

``` c

```

### uiAreaBeginUserWindowResize( pArea, nWindowResizeEdge )

#### Arguments

* `pArea` 
* `nWindowResizeEdge` 

#### Returns

uiAreaBeginUserWindowResize() has no return value.

#### Description

#### Example

``` c

```

### uiAreaQueueRedrawAll( pArea )

#### Arguments

* `pArea` 

#### Returns

uiAreaQueueRedrawAll() has no return value.

#### Description

uiAreaQueueRedrawAll() queues the entire Area for redraw. The Area is not redrawn before this function returns; it is redrawn when next possible.

#### Example

``` c

```

### uiAreaScrollTo( pArea, nX, nY, nWidth, nHeight )

#### Arguments

* `pArea` 
* `nX` 
* `nY` 
* `nWidth` 
* `nHeight` 

#### Returns

uiAreaScrollTo() has no return value.

#### Description

uiAreaScrollTo() scrolls the Area to show the given rectangle; what this means is implementation-defined, but you can safely assume that as much of the given rectangle as possible will be visible after this call. ScrollTo panics if called on a non-scrolling Area.

#### Example

``` c

```

### uiAreaSetSize( pArea, nWidth, nHeight )

#### Arguments

* `pArea` 
* `nWidth` 
* `nHeight` 

#### Returns

uiAreaSetSize() has no return value.

#### Description

uiAreaSetSize() sets the size of a scrolling Area to the given size, in points. SetSize panics if called on a non-scrolling Area.

#### Example

``` c

```

### uiNewArea( pAreaHandler )

#### Arguments

* `pAreaHandler` 

#### Returns

uiNewArea() returns pointer.

#### Description

uiNewArea() creates a new non-scrolling Area.

#### Example

``` c

```

### uiNewScrollingArea( pAreaHandler, nWidth, nHeight )

#### Arguments

* `pAreaHandler` 
* `nWidth` 
* `nHeight` 

#### Returns

uiNewScrollingArea() returns pointer.

#### Description

uiNewScrollingArea() creates a new scrolling Area of the given size, in points.

#### Example

``` c

```

---


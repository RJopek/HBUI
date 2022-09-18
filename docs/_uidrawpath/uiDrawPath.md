---
layout: page
title: uiDrawPath
---

# uiDrawPath

DrawPath represents a geometric path in a drawing context. This is the basic unit of drawing: all drawing operations consist of forming a path, then stroking, filling, or clipping to that path. A path is an OS resource; you must explicitly free it when finished. Paths consist of multiple figures. Once you have added all the figures to a path, you must "end" the path to make it ready to draw with. TODO rewrite all that

#### Description

#### Functions

> * uiDrawFill( `pDrawContext` , `pDrawPath` , `pDrawBrush` )
> * uiDrawFreePath( `pDrawPath` )
> * uiDrawNewPath( `nDrawFillMode` )
> * uiDrawPathAddRectangle( `pDrawPath` , `nX` , `nY` , `nWidth` , `nHeight` )
> * uiDrawPathArcTo( `pDrawPath` , `nXCenter` , `nYCenter` , `nRadius` , `nStartAngle` , `nSweep` , `nNegative` )
> * uiDrawPathBezierTo( `pDrawPath` , `nC1x` , `nC1y` , `nC2x` , `nC2y` , `nEndX` , `nEndY` )
> * uiDrawPathCloseFigure( `pDrawPath` )
> * uiDrawPathEnd( `pDrawPath` )
> * uiDrawPathLineTo( `pDrawPath` , `nX` , `nY` )
> * uiDrawPathNewFigure( `pDrawPath` , `nX` , `nY` )
> * uiDrawPathNewFigureWithArc( `pDrawPath` , `nXCenter` , `nYCenter` , `nRadius` , `nStartAngle` , `nSweep` , `nNegative` )
> * uiDrawStroke( `pDrawContext` , `pDrawPath` , `pDrawBrush` , `pDrawStrokeParams` )

### uiDrawFill( pDrawContext, pDrawPath, pDrawBrush )

#### Arguments

* `pDrawContext` 
* `pDrawPath` 
* `pDrawBrush` 

#### Returns

uiDrawFill() has no return value.

#### Description

#### Example

``` c

```

### uiDrawFreePath( pDrawPath )

#### Arguments

* `pDrawPath` 

#### Returns

uiDrawFreePath() has no return value.

#### Description

#### Example

``` c

```

### uiDrawNewPath( nDrawFillMode )

#### Arguments

* `nDrawFillMode` 

#### Returns

uiDrawNewPath() returns pointer.

#### Description

uiDrawNewPath() creates a new DrawPath with the given fill mode.

#### Example

``` c

```

### uiDrawPathAddRectangle( pDrawPath, nX, nY, nWidth, nHeight )

#### Arguments

* `pDrawPath` 
* `nX` 
* `nY` 
* `nWidth` 
* `nHeight` 

#### Returns

uiDrawPathAddRectangle() has no return value.

#### Description

AddRectangle creates a new figure in the uiDrawPath that consists entirely of a rectangle whose top-left corner is at the given point and whose size is the given size. The rectangle is a closed figure; you must either start a new figure or end the Path after calling this method.

#### Example

``` c

```

### uiDrawPathArcTo( pDrawPath, nXCenter, nYCenter, nRadius, nStartAngle, nSweep, nNegative )

#### Arguments

* `pDrawPath` 
* `nXCenter` 
* `nYCenter` 
* `nRadius` 
* `nStartAngle` 
* `nSweep` 
* `nNegative` 

#### Returns

uiDrawPathArcTo() has no return value.

#### Description



#### Example

``` c

```

### uiDrawPathBezierTo( pDrawPath, nC1x, nC1y, nC2x, nC2y, nEndX, nEndY )

#### Arguments

* `pDrawPath` 
* `nC1x` 
* `nC1y` 
* `nC2x` 
* `nC2y` 
* `nEndX` 
* `nEndY` 

#### Returns

uiDrawPathBezierTo() has no return value.

#### Description

#### Example

``` c

```

### uiDrawPathCloseFigure( pDrawPath )

#### Arguments

* `pDrawPath` 

#### Returns

uiDrawPathCloseFigure() has no return value.

#### Description

#### Example

``` c

```

### uiDrawPathEnd( pDrawPath )

#### Arguments

* `pDrawPath` 

#### Returns

uiDrawPathEnd() has no return value.

#### Description

#### Example

``` c

```

### uiDrawPathLineTo( pDrawPath, nX, nY )

#### Arguments

* `pDrawPath` 
* `nX` 
* `nY` 

#### Returns

uiDrawPathLineTo() has no return value.

#### Description

#### Example

``` c

```

### uiDrawPathNewFigure( pDrawPath, nX, nY )

#### Arguments

* `pDrawPath` 
* `nX` 
* `nY` 

#### Returns

uiDrawPathNewFigure() has no return value.

#### Description

#### Example

``` c

```

### uiDrawPathNewFigureWithArc( pDrawPath, nXCenter, nYCenter, nRadius, nStartAngle, nSweep, nNegative )

#### Arguments

* `pDrawPath` 
* `nXCenter` 
* `nYCenter` 
* `nRadius` 
* `nStartAngle` 
* `nSweep` 
* `nNegative` 

#### Returns

uiDrawPathNewFigureWithArc() has no return value.

#### Description

#### Example

``` c

```

### uiDrawStroke( pDrawContext, pDrawPath, pDrawBrush, pDrawStrokeParams )

#### Arguments

* `pDrawContext` 
* `pDrawPath` 
* `pDrawBrush` 
* `pDrawStrokeParams` 

#### Returns

uiDrawStroke() has no return value.

#### Description

#### Example

``` c

```

#### Sample source code

##### Output:

---


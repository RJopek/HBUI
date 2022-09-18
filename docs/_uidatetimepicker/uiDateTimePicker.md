---
layout: page
title: uiDateTimePicker
---

# uiDateTimePicker

#### Description

uiDateTimePicker is a Control that represents a field where the user can enter a date and/or a time.

#### Functions

> * uiDateTimePickerOnChanged( `pDateTimePicker` , `UserFunction( pDateTimePicker, NIL )` , `data` )
> * uiDateTimePickerSetTime( `pDateTimePicker` , `time` )
> * uiDateTimePickerTime( `pDateTimePicker` , `time` )
> * uiNewDatePicker()
> * uiNewDateTimePicker()
> * uiNewTimePicker()

### uiDateTimePickerOnChanged( pDateTimePicker, UserFunction( pDateTimePicker, NIL ), data )

#### Arguments

* `pDateTimePicker` 
* `UserFunction( pDateTimePicker, NIL )` 
* `data` 

#### Returns

uiDateTimePickerOnChanged() has no return value.

#### Description

#### Example

``` c

```

### uiDateTimePickerSetTime( pDateTimePicker, time )

#### Arguments

* `pDateTimePicker` 
* `time` 

#### Returns

uiDateTimePickerSetTime() has no return value.

#### Description

#### Example

``` c

```

### uiDateTimePickerTime( pDateTimePicker, time )

#### Arguments

* `pDateTimePicker` 
* `time` 

#### Returns

uiDateTimePickerTime() has no return value.

#### Description

#### Example

``` c

```

### uiNewDatePicker()

#### Returns

uiNewDatePicker() returns pointer.

#### Description

#### Example(s)

``` c

   oNewDatePicker := uiNewDatePicker()

```

### uiNewDateTimePicker()

#### Returns

uiNewDateTimePicker() returns pointer.

#### Description

#### Example

``` c

   pDateTimePicker := uiNewDateTimePicker()

```

### uiNewTimePicker()

#### Returns

uiNewTimePicker() returns pointer.

#### Description

#### Example

``` c

pTimePicker := uiNewTimePicker()

```

#### Sample source code

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pTimePicker
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Time picker", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pTimePicker := uiNewTimePicker()

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pTimePicker, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/uitimepicker_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pDatePicker
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Date picker", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pDatePicker := uiNewDatePicker()

   pGrid := uiNewGrid()
   uiGridSetPadded( pGrid, .T. )
   uiGridAppend( pGrid, pDatePicker, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/uidatepicker_01.png "With family Linux Ubuntu desktop")

``` c

   #include "hbui.ch"

   PROCEDURE Main()

      LOCAL cError
      LOCAL pWindow
      LOCAL pDateTimePicker
      LOCAL pGrid

      IF ! HB_ISNULL( cError := uiInit() )
         Alert( "Failed to initialize libui... " + cError )
         RETURN
      ENDIF

      pWindow := uiNewWindow( "Date time picker", 300, 300, .F. )
      uiWindowSetMargined( pWindow, .T. )

      pDateTimePicker := uiNewDateTimePicker()

      pGrid := uiNewGrid()
      uiGridSetPadded( pGrid, .T. )
      uiGridAppend( pGrid, pDateTimePicker, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter)
      
      uiWindowSetChild( pWindow, pGrid )
      uiControlShow( pWindow )

      uiMain()
      uiUninit()

      RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/datetimepicker_01.png "With family Linux Ubuntu desktop")


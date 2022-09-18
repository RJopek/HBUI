---
layout: page
title: uiGroup
---

# uiGroup

#### Description

uiGroup is a Control that holds another Control and wraps it around a labelled box (though some systems make this box invisible).
You can use this to group related controls together.uiGroup is a labeled rectangular frame that surrounds a set of related controls

#### Functions

> * uiGroupMargined( `pGroup` )
> * uiGroupSetChild( `pGroup` , `pControl` )
> * uiGroupSetMargined( `pGroup` , `lMargined` )
> * uiGroupSetTitle( `pGroup` , `cTitle` )
> * uiGroupTitle( `pGroup` )
> * uiNewGroup( `cTitle` )

### uiGroupMargined( pGroup )

#### Arguments

* `pGroup` 

#### Returns

uiGroupMargined() a logical return value `.T.` or `.F.`

#### Description

Margined returns whether the Group has margins around its child.

#### Example

``` c

```

### uiGroupSetChild( pGroup, pControl )

#### Arguments

* `pGroup` 
* `pControl` 

#### Returns

uiGroupSetChild() has no return value.

#### Description

uiGroupSetChild() sets the Group's child to child. If child is nil, the Group will not have a child.

#### Example

``` c

```

### uiGroupSetMargined( pGroup, lMargined )

#### Arguments

* `pGroup` 
* `lMargined` Sets whether the group is margined `.T.` or `.F.`

#### Returns

uiGroupSetMargined() has no return value.

#### Description

uiGroupSetMargined() controls whether the uiGroup has margins around its child. The size of the margins are determined by the OS and its best practices.

#### Example

``` c

```

### uiGroupSetTitle( pGroup, cTitle )

#### Arguments

* `pGroup` 
* `cTitle` 

#### Returns

uiGroupSetTitle() has no return value.

#### Description

#### Example

``` c

```

### uiGroupTitle( pGroup )

#### Arguments

* `pGroup` 

#### Returns

uiGroupTitle() a character return value.

#### Description

#### Example

``` c

```

### uiNewGroup( cTitle )

#### Arguments

* `cTitle` 

#### Returns

uiNewGroup() returns pointer.

#### Description

#### Example

``` c

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

   pWindow := uiNewWindow( "Group example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pGroup := uiNewGroup( "Group" )
   uiGroupSetMargined( pGroup, .T. )

   pForm := uiNewForm()
   uiFormSetPadded( pForm, .T. )
   uiGroupSetChild( pGroup, pForm )

   pEntry         := uiNewEntry()
   pPasswordEntry := uiNewPasswordEntry()
   pSearchEntry   := uiNewSearchEntry()

   uiFormAppend( pForm, "Username", pEntry, .F. )
   uiFormAppend( pForm, "Email address", pPasswordEntry, .F. )
   uiFormAppend( pForm, "Search", pSearchEntry, .F. )

   uiWindowSetChild( pWindow, pGroup )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/group_01.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pHorizontalBox
   LOCAL pGroup

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Group example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   uiWindowSetChild( pWindow, pHorizontalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

![Linux]({{ site.baseurl }}/assets/img/group_02.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pVerticalBox
   LOCAL pGroup

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Group example", 300, 300, .F. )
   uiWindowSetMargined( pWindow, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pVerticalBox, pGroup, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pVerticalBox, pGroup, .T. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/group_03.png "With family Linux Ubuntu desktop")

``` c

#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pVerticalBox
   LOCAL pHorizontalBox
   LOCAL pGroup
   
   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Group example", 640, 480, .F. )
   uiWindowSetMargined( pWindow, .T. )
      
   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   
   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pVerticalBox, pHorizontalBox, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pGroup := uiNewGroup( "" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   uiBoxAppend( pVerticalBox, uiNewButton( "Button" ), .F. )

   uiWindowSetChild( pWindow, pVerticalBox )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

```

##### Output:

![Linux]({{ site.baseurl }}/assets/img/group_04.png "With family Linux Ubuntu desktop")


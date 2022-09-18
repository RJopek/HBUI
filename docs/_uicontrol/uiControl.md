---
layout: page
title: uiControl
---

# uiControl

#### Description

#### Functions

> * uiControlDestroy( `pControl` )
> * uiControlDisable( `pControl` )
> * uiControlEnable( `pControl` )
> * uiControlEnabled( `pControl` )
> * uiControlHandle( `pControl` )
> * uiControlHide( `pControl` )
> * uiControlParent( `pControl` )
> * uiControlSetParent( `pControl` , `pControl` )
> * uiControlShow( `pControl` )
> * uiControlToplevel( `pControl` )
> * uiControlVisible( `pControl` )

> * uiAllocControl( `n` , `OSsig` , `typesig` , `cTypenamestr` )
> * uiFreeControl( `pControl` )

> * uiControlEnabledToUser( `pControl` )
> * uiControlVerifySetParent( `pControl` , `pControl` )

> * uiUserBugCannotSetParentOnToplevel( `cType` ) 

### uiControlDestroy( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlDestroy() has no return value.

#### Description

Destroys the control.

#### Example

``` c

```

### uiControlDisable( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlDisable() has no return value.

#### Description

#### Example

``` c

```

### uiControlEnable( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlEnable() has no return value.

#### Description

#### Example

``` c

```

### uiControlEnabled( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlEnabled() a logical return value `.T.` or `.F.` 

#### Description

Returns whether the control is enabled.

#### Example

``` c

```

### uiControlHandle( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlHandle() a numeric return value using a long.

#### Description

#### Example

``` c

```

### uiControlHide( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlHide() has no return value.

#### Description

 Hides the control.

#### Example

``` c

```

### uiControlParent( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlParent() returns pointer.

#### Description

#### Example

``` c

```

### uiControlSetParent( pControl, pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlSetParent() has no return value.

#### Description

#### Example

``` c

```

### uiControlShow( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlShow() has no return value.

#### Description

#### Example

``` c

```

### uiControlToplevel( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlToplevel() numeric return value using an integer.

#### Description

#### Example

``` c

```

### uiControlVisible( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlVisible() a logical return value `.T.` or `.F.` 

#### Description

Returns whether the control is visible.

#### Example

``` c

IF uiControlVisible( pControl )

   ...

ELSE

   ...

ENDIF

```

---

### uiAllocControl( n, OSsig, typesig, cTypenamestr )

#### Arguments

* `n` 
* `OSsig` 
* `typesig` 
* `cTypenamestr` 

#### Returns

uiAllocControl() returns pointer.

#### Description

#### Example

``` c

```

### uiFreeControl( pControl )

#### Arguments

* `pControl` 

#### Returns

uiFreeControl() has no return value.

#### Description

#### Example

``` c

```

---

### uiControlEnabledToUser( pControl )

#### Arguments

* `pControl` 

#### Returns

uiControlEnabledToUser() numeric return value using an integer.

#### Description

#### Example

``` c

```

### uiControlVerifySetParent( pControl, pControl )

#### Arguments

* `pControl` 
* `pControl` 

#### Returns

uiControlVerifySetParent() has no return value.

#### Description

#### Example

``` c

```

---

### uiUserBugCannotSetParentOnToplevel( cType ) 

#### Arguments

* `cType` 

#### Returns

uiUserBugCannotSetParentOnToplevel() has no return value.

#### Description

#### Example

``` c

```

---


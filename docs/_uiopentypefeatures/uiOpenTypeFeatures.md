---
layout: page
title: uiOpenTypeFeatures
---

# uiOpenTypeFeatures

#### Description

#### Functions

> * uiAttributeFeatures( `pAttribute` )
> * uiFreeOpenTypeFeatures( `pOpenTypeFeatures` )
> * uiNewFeaturesAttribute( `pOpenTypeFeatures` )
> * uiNewOpenTypeFeatures()
> * uiOpenTypeFeaturesAdd( `pOpenTypeFeatures` , `nA` , `nB` , `nC` , `nD` , `nValue` )
> * uiOpenTypeFeaturesClone( `pOpenTypeFeatures` )
> * uiOpenTypeFeaturesForEach( `pOpenTypeFeatures` , `pOpenTypeFeaturesForEachFunc` , `data` )
> * uiOpenTypeFeaturesGet( `pOpenTypeFeatures` , `nA` , `nB` , `nC` , `nD` , `nValue` )
> * uiOpenTypeFeaturesRemove( `pOpenTypeFeatures` , `nA` , `nB` , `nC` , `nD` )

### uiAttributeFeatures( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeFeatures() returns pointer.

#### Description

uiAttributeFeatures() returns the OpenType features stored in a. The returned uiOpenTypeFeatures object is owned by a. It is an error to call this on a uiAttribute that does not hold OpenType
features.

#### Example

``` c

```

### uiFreeOpenTypeFeatures( pOpenTypeFeatures )

#### Arguments

* `pOpenTypeFeatures` 

#### Returns

uiFreeOpenTypeFeatures() has no return value.

#### Description

uiOpenTypeFeatures destructor uiFreeOpenTypeFeatures() frees otf.

#### Example

``` c

```

### uiNewFeaturesAttribute( pOpenTypeFeatures )

#### Arguments

* `pOpenTypeFeatures` 

#### Returns

uiNewFeaturesAttribute() returns pointer.

#### Description

uiNewFeaturesAttribute() creates a new uiAttribute that changes the font family of the text it is applied to.otf is copied; you may free it after uiNewFeaturesAttribute() returns.

#### Example

``` c

```

### uiNewOpenTypeFeatures()

#### Returns

uiNewOpenTypeFeatures() returns pointer.

#### Description

uiOpenTypeFeatures constructor uiNewOpenTypeFeatures() returns a new uiOpenTypeFeatures instance, with no tags yet added.

#### Example

``` c

```

### uiOpenTypeFeaturesAdd( pOpenTypeFeatures, nA, nB, nC, nD, nValue )

#### Arguments

* `pOpenTypeFeatures` 
* `nA` 
* `nB` 
* `nC` 
* `nD` 
* `nValue` 

#### Returns

uiOpenTypeFeaturesAdd() has no return value.

#### Description

uiOpenTypeFeaturesAdd() adds the given feature tag and value to otf. The feature tag is specified by a, b, c, and d. If there is already a value associated with the specified tag in otf, the old value is removed.

#### Example

``` c

```

### uiOpenTypeFeaturesClone( pOpenTypeFeatures )

#### Arguments

* `pOpenTypeFeatures` 

#### Returns

uiOpenTypeFeaturesClone() returns pointer.

#### Description

uiOpenTypeFeaturesClone() makes a copy of otf and returns it.
Changing one will not affect the other.

#### Example

``` c

```

### uiOpenTypeFeaturesForEach( pOpenTypeFeatures, pOpenTypeFeaturesForEachFunc, data )

#### Arguments

* `pOpenTypeFeatures` 
* `pOpenTypeFeaturesForEachFunc` 
* `data` 

#### Returns

uiOpenTypeFeaturesForEach() has no return value.

#### Description

uiOpenTypeFeaturesForEach() executes f for every tag-value pair in otf. The enumeration order is unspecified. You cannot modify otf while iOpenTypeFeaturesForEach() is running.

#### Example

``` c

```

### uiOpenTypeFeaturesGet( pOpenTypeFeatures, nA, nB, nC, nD, nValue )

#### Arguments

* `pOpenTypeFeatures` 
* `nA` 
* `nB` 
* `nC` 
* `nD` 
* `nValue` 

#### Returns

uiOpenTypeFeaturesGet() numeric return value using an integer.

#### Description

uiOpenTypeFeaturesGet() determines whether the given feature tag is present in otf. If it is, *value is set to the tag's value and nonzero is returned. Otherwise, zero is returned.
 
Note that if uiOpenTypeFeaturesGet() returns zero, value isn't changed. This is important: if a feature is not present in a uiOpenTypeFeatures, the feature is NOT treated as if its value was zero anyway. Script-specific font shaping rules and font-specific feature settings may use a different default value
for a feature. You should likewise not treat a missing feature as having a value of zero either. Instead, a missing feature should be treated as having some unspecified default value.

#### Example

``` c

```

### uiOpenTypeFeaturesRemove( pOpenTypeFeatures, nA, nB, nC, nD )

#### Arguments

* `pOpenTypeFeatures` 
* `nA` 
* `nB` 
* `nC` 
* `nD` 

#### Returns

uiOpenTypeFeaturesRemove() has no return value.

#### Description

uiOpenTypeFeaturesRemove() removes the given feature tag and value from otf. If the tag is not present in otf, uiOpenTypeFeaturesRemove() does nothing.

#### Example

``` c

```

#### Sample source code

##### Output:

---
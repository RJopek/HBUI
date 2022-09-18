---
layout: page
title: uiAttribute
---

# uiAttribute

#### Description

#### Functions

> * uiAttributeColor( `pAttribute` , `nR` , `nG` , `nB` , `nAlpha` )
> * uiAttributeFamily( `pAttribute` )
> * uiAttributeGetType( `pAttribute` )
> * uiAttributeItalic( `pAttribute` )
> * uiAttributeSize( `pAttribute` )
> * uiAttributeStretch( `pAttribute` )
> * uiAttributeUnderline( `pAttribute` )
> * uiAttributeUnderlineColor( `pAttribute` , `nUnderlineColor` , `nR` , `nG` , `nB` , `nAlpha` )
> * uiAttributeWeight( `pAttribute` )
> * uiFreeAttribute( `pAttribute` )
> * uiNewBackgroundAttribute( `nR` , `nG` , `nB` , `nA` )
> * uiNewColorAttribute( `nR` , `nG` , `nB` , `nA` )
> * uiNewFamilyAttribute( `cFamily` )
> * uiNewItalicAttribute( `nTextItalic` )
> * uiNewSizeAttribute( `nSize` )
> * uiNewStretchAttribute( `nTextStretch` )
> * uiNewUnderlineAttribute( `nUnderline` )
> * uiNewUnderlineColorAttribute( `nUnderlineColor` , `nR` , `nG` , `nB` , `nA` )
> * uiNewWeightAttribute( `nTextWeight` )

### uiAttributeColor( pAttribute, nR, nG, nB, nAlpha )

#### Arguments

* `pAttribute` 
* `nR` 
* `nG` 
* `nB` 
* `nAlpha` 

#### Returns

uiAttributeColor() has no return value.

#### Description

uiAttributeColor() returns the text color stored in a. It is an error to call this on a uiAttribute that does not hold a text color.

#### Example

``` c

```

### uiAttributeFamily( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeFamily() a character return value.

#### Description

uiAttributeFamily() returns the font family stored in a. The returned string is owned by a. It is an error to call this on a uiAttribute that does not hold a font family.

#### Example

``` c

```

### uiAttributeGetType( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeGetType() returns the type of a.

#### Description

#### Example

``` c

```

### uiAttributeItalic( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeItalic() numeric return value using an integer.

#### Description

uiAttributeItalic() returns the font italic mode stored in a. It is an error to call this on a uiAttribute that does not hold a font italic mode.

#### Example

``` c

```

### uiAttributeSize( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeSize() numeric return value using an integer.

#### Description

uiAttributeSize() returns the font size stored in a. It is an error to call this on a uiAttribute that does not hold a font size.

#### Example

``` c

```

### uiAttributeStretch( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeStretch() numeric return value using an integer.

#### Description

uiAttributeStretch() returns the font stretch stored in a. It is an error to call this on a uiAttribute that does not hold a font stretch.

#### Example

``` c

```

### uiAttributeUnderline( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeUnderline() numeric return value using an integer.

#### Description

uiAttributeUnderline() returns the underline type stored in a. It is an error to call this on a uiAttribute that does not hold an underline style.

#### Example

``` c

```

### uiAttributeUnderlineColor( pAttribute, nUnderlineColor, nR, nG, nB, nAlpha )

#### Arguments

* `pAttribute` 
* `nUnderlineColor` 
* `nR` 
* `nG` 
* `nB` 
* `nAlpha` 

#### Returns

 uiAttributeUnderlineColor() has no return value.

#### Description

uiAttributeUnderlineColor() returns the underline color stored in a. It is an error to call this on a uiAttribute that does not hold an underline color.

#### Example

``` c

```

### uiAttributeWeight( pAttribute )

#### Arguments

* `pAttribute` 

#### Returns

uiAttributeWeight() numeric return value using an integer.

#### Description

uiAttributeWeight() returns the font weight stored in a. It is an error to call this on a uiAttribute that does not hold a font weight.

#### Example

``` c

```

### uiFreeAttribute( pAttributed )

#### Arguments

* `pAttributed` 

#### Returns

 uiFreeAttribute() has no return value.

#### Description

uiFreeAttribute() frees a uiAttribute. You generally do not need to call this yourself, as uiAttributedString does this for you. In fact, 
it is an error to call this function on a uiAttribute that has been given to a uiAttributedString. You can call this, however, if you
created a uiAttribute that you aren't going to use later.

#### Example

``` c

```

### uiNewBackgroundAttribute( nR, nG, nB, nA )

#### Arguments

* `nR` 
* `nG` 
* `nB` 
* `nA` 

#### Returns

uiNewBackgroundAttribute() returns pointer.

#### Description

uiNewBackgroundAttribute() creates a new uiAttribute that changes the background color of the text it is applied to. It is an error to specify an invalid color.

#### Example

``` c

```

### uiNewColorAttribute( nR, nG, nB, nA )

#### Arguments

* `nR` 
* `nG` 
* `nB` 
* `nA` 

#### Returns

uiNewColorAttribute() returns pointer.

#### Description

uiNewColorAttribute() creates a new uiAttribute that changes the color of the text it is applied to. It is an error to specify an invalid color.

#### Example

``` c

```

### uiNewFamilyAttribute( cFamily )

#### Arguments

* `cFamily` 

#### Returns

uiNewFamilyAttribute() returns pointer.

#### Description

uiNewFamilyAttribute() creates a new uiAttribute that changes the font family of the text it is applied to.family is copied; you do not
need to keep it alive after uiNewFamilyAttribute() returns. Font family names are case-insensitive.

#### Example

``` c

```

### uiNewItalicAttribute( nTextItalic )

#### Arguments

* `nTextItalic` 

#### Returns

uiNewItalicAttribute() returns pointer.

#### Description

uiNewItalicAttribute() creates a new uiAttribute that changes the italic mode of the text it is applied to. It is an error to specify an italic mode not specified in uiTextItalic.

#### Example

``` c

```

### uiNewSizeAttribute( nSize )

#### Arguments

* `nSize` 

#### Returns

uiNewSizeAttribute() returns pointer.

#### Description

uiNewSizeAttribute() creates a new uiAttribute that changes the size of the text it is applied to, in typographical points.

#### Example

``` c

```

### uiNewStretchAttribute( nTextStretch )

#### Arguments

* `nTextStretch` 

#### Returns

uiNewStretchAttribute() returns pointer.

#### Description

uiNewStretchAttribute() creates a new uiAttribute that changes the stretch of the text it is applied to. It is an error to specify a strech not specified in uiTextStretch.

#### Example

``` c

```

### uiNewUnderlineAttribute( nUnderline )

#### Arguments

* `nUnderline` 

#### Returns

uiNewUnderlineAttribute() returns pointer.

#### Description

uiNewUnderlineAttribute() creates a new uiAttribute that changes the type of underline on the text it is applied to. It is an error to specify an underline type not specified in uiUnderline.

#### Example

``` c

```

### uiNewUnderlineColorAttribute( nUnderlineColor, nR, nG, nB, nA )

#### Arguments

* `nUnderlineColor` 
* `nR` 
* `nG` 
* `nB` 
* `nA` 

#### Returns

uiNewUnderlineColorAttribute() returns pointer.

#### Description

uiNewUnderlineColorAttribute() creates a new uiAttribute that changes the color of the underline on the text it is applied to. It is an error to specify an underline color not specified in uiUnderlineColor. If the specified color type is uiUnderlineColorCustom, it is an error to specify an invalid color value. Otherwise, the color values are ignored and should be specified as zero.

#### Example

``` c

```

### uiNewWeightAttribute( nTextWeight )

#### Arguments

* `nTextWeight` 

#### Returns

uiNewWeightAttribute() returns pointer.

#### Description

uiNewWeightAttribute() creates a new uiAttribute that changes the weight of the text it is applied to. It is an error to specify a weight outside the range [uiTextWeightMinimum, uiTextWeightMaximum].

#### Example

``` c

```


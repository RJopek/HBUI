---
layout: page
title: uiAttributedString
---

# uiAttributedString

#### Description

uiAttributedString represents a string of UTF-8 text that can
optionally be embellished with formatting attributes.libui
provides the list of formatting attributes, which cover common
formatting traits like boldface and color as well as advanced
typographical features provided by OpenType like superscripts
and small caps. These attributes can be combined in a variety of
ways.

Attributes are applied to runs of Unicode codepoints in the string.
Zero-length runs are elided. Consecutive runs that have the same
attribute type and value are merged. Each attribute is independent
of each other attribute; overlapping attributes of different types
do not split each other apart, but different values of the same
attribute type do.

The empty string can also be represented by uiAttributedString, 
but because of the no-zero-length-attribute rule, it will not have
attributes.

A uiAttributedString takes ownership of all attributes given to
it, as it may need to duplicate or delete uiAttribute objects at
any time. By extension, when you free a uiAttributedString, 
all uiAttributes within will also be freed. Each method will
describe its own rules in more details.

In addition, uiAttributedString provides facilities for moving
between grapheme clusters, which represent a character
from the point of view of the end user. The cursor of a text editor
is always placed on a grapheme boundary, so you can use these
features to move the cursor left or right by one "character".
TODO does uiAttributedString itself need this

uiAttributedString does not provide enough information to be able
to draw itself onto a uiDrawContext or respond to user actions.
In order to do that, you'll need to use a uiDrawTextLayout, which
is built from the combination of a uiAttributedString and a set of
layout-specific properties.

#### Functions

> * uiAttributedStringAppendUnattributed( `pAttributedString` , `cStr` )
> * uiAttributedStringByteIndexToGrapheme( `pAttributedString` , `nPos` )
> * uiAttributedStringDelete( `pAttributedString` , `nStart` , `nEnd` )
> * uiAttributedStringForEachAttribute( `pAttributedString` , `pAttributedStringForEachAttributeFunc` , `data` )
> * uiAttributedStringGraphemeToByteIndex( `pAttributedString` , `nPos` )
> * uiAttributedStringInsertAtUnattributed( `pAttributedString` , `cStr` , `nAt` )
> * uiAttributedStringLen( `pAttributedString` )
> * uiAttributedStringNumGraphemes( `pAttributedString` )
> * uiAttributedStringSetAttribute( `pAttributedString` , `pAttribute` , `nStart` , `nEnd` )
> * uiAttributedStringString( `pAttributedString` )
> * uiFreeAttributedString( `pAttributedString` )
> * uiNewAttributedString( `cInitialString` )

### uiAttributedStringAppendUnattributed( pAttributedString, cStr )

#### Arguments

* `pAttributedString` 
* `cStr` 

#### Returns

uiAttributedStringAppendUnattributed() has no return value.

#### Description

uiAttributedStringAppendUnattributed() adds the '\0'-terminated
UTF-8 string str to the end of s. The new substring will be unattributed.

#### Example

``` c

```

### uiAttributedStringByteIndexToGrapheme( pAttributedString, nPos )

#### Arguments

* `pAttributedString` 
* `nPos` 

#### Returns

uiAttributedStringByteIndexToGrapheme() numeric return value using an integer.

#### Description

TODO const correct this somehow (the implementation needs to mutate the structure)

#### Example

``` c

```

### uiAttributedStringDelete( pAttributedString, nStart, nEnd )

#### Arguments

* `pAttributedString` 
* `nStart` 
* `nEnd` 

#### Returns

uiAttributedStringDelete() has no return value.

#### Description

uiAttributedStringDelete() deletes the characters and attributes of s in the byte range start, end).

#### Example

``` c

```

### uiAttributedStringForEachAttribute( pAttributedString, pAttributedStringForEachAttributeFunc, data )

#### Arguments

* `pAttributedString` 
* `pAttributedStringForEachAttributeFunc` 
* `data` 

#### Returns

uiAttributedStringForEachAttribute() has no return value.

#### Description

uiAttributedStringForEachAttribute() enumerates all the
uiAttributes in s. It is an error to modify s in f. Within f, s still
owns the attribute; you can neither free it nor save it for later use.
TODO reword the above for consistency (TODO and find out what I meant by that)
TODO define an enumeration order (or mark it as undefined); also define how consecutive runs of identical attributes are handled here and sync with the definition of uiAttributedString itself

#### Example

``` c

```

### uiAttributedStringGraphemeToByteIndex( pAttributedString, nPos )

#### Arguments

* `pAttributedString` 
* `nPos` 

#### Returns

uiAttributedStringGraphemeToByteIndex() numeric return value using an integer.

#### Description

TODO const correct this somehow (the implementation needs to mutate the structure)

#### Example

``` c

```

### uiAttributedStringInsertAtUnattributed( pAttributedString, cStr, nAt )

#### Arguments

* `pAttributedString` 
* `cStr` 
* `nAt` 

#### Returns

uiAttributedStringInsertAtUnattributed() has no return value.

#### Description

uiAttributedStringInsertAtUnattributed() adds the '\0'-terminated
UTF-8 string str to s at the byte position specified by at. The new
substring will be unattributed; existing attributes will be moved
along with their text.

#### Example

``` c

```

### uiAttributedStringLen( pAttributedString )

#### Arguments

* `pAttributedString` 

#### Returns

uiAttributedStringLen() numeric return value using an integer.

#### Description

uiAttributedStringLen() returns the number of UTF-8 bytes in
the textual content of s, excluding the terminating '\0'.

#### Example

``` c

```

### uiAttributedStringNumGraphemes( pAttributedString )

#### Arguments

* `pAttributedString` 

#### Returns

uiAttributedStringNumGraphemes() numeric return value using an integer.

#### Description

TODO const correct this somehow (the implementation needs to mutate the structure)

#### Example

``` c

```

### uiAttributedStringSetAttribute( pAttributedString, pAttribute, nStart, nEnd )

#### Arguments

* `pAttributedString` 
* `pAttribute` 
* `nStart` 
* `nEnd` 

#### Returns

uiAttributedStringSetAttribute() has no return value.

#### Description

uiAttributedStringSetAttribute() sets a in the byte range [start, end)
of s. Any existing attributes in that byte range of the same type are
removed.s takes ownership of a; you should not use it after
uiAttributedStringSetAttribute() returns.

#### Example

``` c

```

### uiAttributedStringString( pAttributedString )

#### Arguments

* `pAttributedString` 

#### Returns

uiAttributedStringString() a character return value.

#### Description

uiAttributedStringString() returns the textual content of s as a
'\0'-terminated UTF-8 string. The returned pointer is valid until
the next change to the textual content of s.

#### Example

``` c

```

### uiFreeAttributedString( pAttributedString )

#### Arguments

* `pAttributedString` 

#### Returns

uiFreeAttributedString() has no return value.

#### Description

uiAttributedString destructor
uiFreeAttributedString() destroys the uiAttributedString s.
It will also free all uiAttributes within.

#### Example

``` c

```

### uiNewAttributedString( cInitialString )

#### Arguments

* `cInitialString` 

#### Returns

uiNewAttributedString() returns pointer.

#### Description

uiAttributedString constructor
uiNewAttributedString() creates a new uiAttributedString from
initialString. The string will be entirely unattributed.

#### Example

``` c

```

#### Sample source code

##### Output:


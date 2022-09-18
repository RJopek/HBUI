---
layout: page
title: uiImage
---

# uiImage

#### Description

uiImage stores an image for display on screen. Images are built from one or more representations, each with the same aspect ratio but a different pixel size.libui automatically selects the most appropriate representation for drawing the image when it comes time to draw the image; what this means depends on the pixel density of the target context. Therefore, one can use uiImage to draw higher-detailed images on higher-density displays. The typical use cases are either:

* have just a single representation, at which point all screens use the same image, and thus uiImage acts like a simple bitmap image, or
* have two images, one at normal resolution and one at 2x resolution; this matches the current expectations of some desktop systems at the time of writing  mid-2018)

uiImage is very simple: it only supports premultiplied 32-bit RGBA images, and libui does not provide any image file loading or image format conversion utilities on top of that.

#### Functions

> * uiFreeImage( `uiImage` )
> * uiImageAppend( `uiImage` , `pixels` , `nPixelWidth` , `nPixelHeight` , `nByteStride` )
> * uiNewImage( `nWidth` , `nHeight` )

### uiFreeImage( uiImage )

#### Arguments

* `uiImage` 

#### Returns

uiFreeImage() has no return value.

#### Description

uiImage destructor.
uiFreeImage frees the given image and all associated resources.

#### Example

``` c

```

### uiImageAppend( uiImage, pixels, nPixelWidth, nPixelHeight, nByteStride )

#### Arguments

* `uiImage` 
* `pixels` 
* `nPixelWidth` 
* `nPixelHeight` 
* `nByteStride` 

#### Returns

uiImageAppend() has no return value.

#### Description

uiImageAppend adds a representation to the uiImage. pixels should point to a byte array of premultiplied pixels stored in [R G B A] order (so ((uint8_t *) pixels)[0] is the R of the first pixel and [3] is the A of the first pixel). pixelWidth and pixelHeight is the size *in pixels* of the image, and pixelStride is
the number *of bytes* per row of the pixels array. Therefore, pixels itself must be at least byteStride * pixelHeight bytes long. see if we either need the stride or can provide a way to get the OS-preferred stride (in cairo we do).

#### Example

``` c

```

### uiNewImage( nWidth, nHeight )

#### Arguments

* `nWidth` 
* `nHeight` 

#### Returns

uiNewImage() returns pointer.

#### Description

uiImage constructor.
uiNewImage creates a new uiImage with the given width and height. This width and height should be the size in points of the image in the device-independent case; typically this is the 1x size. for all uiImage functions: use const void * for const correctness

#### Example

``` c

   pNewImage := uiNewImage( 400, 400 )

```


---
layout: page
title: uiTable
---

# uiTable

#### Description

uiTable is a Control that shows tabular data, allowing users to manipulate rows of such data at a time.

#### Functions

#### Example(s)

> * uiNewTable( `pTableParams` )
> * uiTableAppendButtonColumn( `pTable` , `cName` , `nButtonModelColumn` , `nButtonClickableModelColumn` )
> * uiTableAppendCheckboxColumn( `pTable` , `cName` , `nCheckboxModelColumn` , `nCheckboxEditableModelColumn` )
> * uiTableAppendCheckboxTextColumn( `pTable` , `cName` , `nCheckboxModelColumn` , `nCheckboxEditableModelColumn` , `nTextModelColumn` , `nTextEditableModelColumn` , `cTextParams` )
> * uiTableAppendImageColumn( `pTable` , `cName` , `nImageModelColumn` )
> * uiTableAppendImageTextColumn( `pTable` , `cName` , `nImageModelColumn` , `nTextModelColumn` , `nTextEditableModelColumn` , `cTextParams` )
> * uiTableAppendProgressBarColumn( `pTable` , `cName` , `nProgressModelColumn` )
> * uiTableAppendTextColumn( `pTable` , `cName` , `nTextModelColumn` , `nTextEditableModelColumn` , `cTextParams` )

### uiNewTable( pTableParams )

#### Arguments

* `pTableParams` 

#### Returns

uiNewTable returns pointer.

#### Description

uiNewTable() creates a new uiTable with the specified parameters.

#### Example

``` c

pTable() := uiNewTable()

```

### uiTableAppendButtonColumn( pTable, cName, nButtonModelColumn, nButtonClickableModelColumn )

#### Arguments

* `pTable` 
* `cName` 
* `nButtonModelColumn` 
* `nButtonClickableModelColumn` 

#### Returns

uiTableAppendButtonColumn() has no return value.

#### Description

uiTableAppendButtonColumn() appends a column to t that shows a button that the user can click on. When the user does click on the button, SetCellValue is called with a nil value and buttonModelColumn as the column. CellValue on buttonModelColumn should return the text to show in the button.

#### Example

``` c

```

### uiTableAppendCheckboxColumn( pTable, cName, nCheckboxModelColumn, nCheckboxEditableModelColumn )

#### Arguments

* `pTable` 
* `cName` 
* `nCheckboxModelColumn` 
* `nCheckboxEditableModelColumn` 

#### Returns

uiTableAppendCheckboxColumn() has no return value.

#### Description

uiTableAppendCheckboxColumn() appends a column to t that contains a checkbox that the user can interact with (assuming the checkbox is editable). SetCellValue will be called with checkboxModelColumn as the column in this case.

#### Example

``` c

```

### uiTableAppendCheckboxTextColumn( pTable, cName, nCheckboxModelColumn, nCheckboxEditableModelColumn, nTextModelColumn, nTextEditableModelColumn, cTextParams )

#### Arguments

* `pTable` 
* `cName` 
* `nCheckboxModelColumn` 
* `nCheckboxEditableModelColumn` 
* `nTextModelColumn` 
* `nTextEditableModelColumn` 
* `cTextParams` 

#### Returns

uiTableAppendCheckboxTextColumn() has no return value.

#### Description

uiTableAppendCheckboxTextColumn() appends a column to t that contains both a checkbox and text.

#### Example

``` c

```

### uiTableAppendImageColumn( pTable, cName, nImageModelColumn )

#### Arguments

* `pTable` 
* `cName` 
* `nImageModelColumn` 

#### Returns

uiTableAppendImageColumn() has no return value.

#### Description

uiTableAppendImageColumn() appends an image column to t. Images are drawn at icon size, appropriate to the pixel density of the screen showing the Table.

#### Example

``` c

```

### uiTableAppendImageTextColumn( pTable, cName, nImageModelColumn, nTextModelColumn, nTextEditableModelColumn, cTextParams )

#### Arguments

* `pTable` 
* `cName` 
* `nImageModelColumn` 
* `nTextModelColumn` 
* `nTextEditableModelColumn` 
* `cTextParams` 

#### Returns

uiTableAppendImageTextColumn() has no return value.

#### Description

uiTableAppendImageTextColumn() appends a column to t that shows both an image and text.

#### Example

``` c

```

### uiTableAppendProgressBarColumn( pTable, cName, nProgressModelColumn )

#### Arguments

* `pTable` 
* `cName` 
* `nProgressModelColumn` 

#### Returns

uiTableAppendProgressBarColumn() has no return value.

#### Description

uiTableAppendProgressBarColumn() appends a column to t that displays a progress bar. These columns work like ProgressBar: a cell value of 0..100 displays that percentage, and a cell value of -1 displays an indeterminate progress bar.

#### Example

``` c

```

### uiTableAppendTextColumn( pTable, cName, nTextModelColumn, nTextEditableModelColumn, cTextParams )

#### Arguments

* `pTable` 
* `cName` 
* `nTextModelColumn` 
* `nTextEditableModelColumn` 
* `cTextParams` 

#### Returns

uiTableAppendTextColumn() has no return value.

#### Description

AppendTextColumn appends a text column to t. name is displayed in the table header. textModelColumn is where the text comes from. If a row is editable according to textEditableModelColumn, SetCellValue is called with textModelColumn as the column.

#### Example

``` c

```



#include "hbui.ch"

STATIC pWindow

STATIC PROCEDURE update( a, value )

   LOCAL spinbox := a[ 1 ]
   LOCAL slider := a[ 2 ]
   LOCAL progressbar := a[ 3 ]

   uiSpinboxSetValue( spinbox, value )
   uiSliderSetValue( slider, value )
   uiProgressBarSetValue( progressbar, value )

   RETURN

STATIC PROCEDURE onSpinboxChanged( s, a )

   LOCAL spinbox

   spinbox := a[ 1 ]
   HB_SYMBOL_UNUSED( s )
   update( a, uiSpinboxValue( spinbox ) )

   RETURN

STATIC PROCEDURE onSliderChanged( s, a )

   LOCAL spinbox := a[ 1 ]
   LOCAL pbar := a[ 3 ]

   uiSpinboxSetValue( spinbox, uiSliderValue( s ) )
   uiProgressBarSetValue( pbar, uiSliderValue( s ) )

   RETURN

FUNCTION Main()

   LOCAL error
   LOCAL pTab

   IF ! HB_ISNULL( error := uiInit() )
      Alert( "Failed to initialize libui... " + error )
      RETURN NIL
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )

   pTab := uiNewTab()
   uiWindowSetChild( pWindow, pTab )
   uiWindowSetMargined( pWindow, .T. )

   uiTabAppend( pTab, "Basic Controls", makeBasicControlsPage() )
   uiTabSetMargined( pTab, 0, .T. )

   uiTabAppend( pTab, "Numbers and Lists", makeNumbersPage() )
   uiTabSetMargined( pTab, 1, .T. )

   uiTabAppend( pTab, "Data Choosers", makeDataChoosersPage() )
   uiTabSetMargined( pTab, 2, .T. )

   uiControlShow( pWindow )
   uiMain()
   uiUninit()

   RETURN NIL

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )
   
   uiQuit()
   
   RETURN .T.

STATIC FUNCTION makeBasicControlsPage()

   LOCAL pVerticalBox
   LOCAL pHorizontalBox
   LOCAL pGroup
   LOCAL pForm

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pVerticalBox, pHorizontalBox, .F. )

   uiBoxAppend( pHorizontalBox, uiNewButton( "pButton" ), .F. )
   uiBoxAppend( pHorizontalBox, uiNewCheckbox( "Checkbox" ), .F. )

   uiBoxAppend( pVerticalBox, uiNewLabel( "This is a label. Right now, labels can only span one line." ), .F. )

   uiBoxAppend( pVerticalBox, uiNewHorizontalSeparator(), .F. )

   pGroup := uiNewGroup( "Entries" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pVerticalBox, pGroup, .T. )

   pForm := uiNewForm()
   uiFormSetPadded( pForm, .T. )
   uiGroupSetChild( pGroup, pForm )

   uiFormAppend( pForm, "Entry", uiNewEntry(), .F. )
   uiFormAppend( pForm, "Password Entry", uiNewPasswordEntry(), .F. )
   uiFormAppend( pForm, "Search Entry", uiNewSearchEntry(), .F. )
   uiFormAppend( pForm, "Multiline Entry", uiNewMultilineEntry(), .T. )
   uiFormAppend( pForm, "Multiline Entry No Wrap", uiNewNonWrappingMultilineEntry(), .T. )

   RETURN pVerticalBox

STATIC FUNCTION makeNumbersPage()

   LOCAL pHorizontalBox
   LOCAL pGroup
   LOCAL pVerticalBox
   LOCAL pSpinbox
   LOCAL pSlider
   LOCAL pProgressBar1
   LOCAL pProgressBar2
   LOCAL pCombobox
   LOCAL pEditableCombobox
   LOCAL pRadioButtons

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

   pGroup := uiNewGroup( "Numbers" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiGroupSetChild( pGroup, pVerticalBox )

   pSpinbox := uiNewSpinbox( 0, 100 )
   pSlider := uiNewSlider( 0, 100 )
   pProgressBar1 := uiNewProgressBar()
   // uiSpinboxOnChanged( pSpinbox, {|...| onSpinboxChanged(...) }, {pSpinbox,pSlider,pProgressBar1} )
   uiSpinboxOnChanged( pSpinbox, @onSpinboxChanged(), { pSpinbox, pSlider, pProgressBar1 } )
   uiSliderOnChanged( pSlider, @onSliderChanged(), { pSpinbox, pSlider, pProgressBar1 } )
   uiBoxAppend( pVerticalBox, pSpinbox, .F. )
   uiBoxAppend( pVerticalBox, pSlider, .F. )
   uiBoxAppend( pVerticalBox, pProgressBar1, .F. )

   pProgressBar2 := uiNewProgressBar()
   uiProgressBarSetValue( pProgressBar2, -1 )
   uiBoxAppend( pVerticalBox, pProgressBar2, .F. )

   pGroup := uiNewGroup( "Lists" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiGroupSetChild( pGroup, pVerticalBox )

   pCombobox := uiNewCombobox()
   uiComboboxAppend( pCombobox, "Combobox Item 1" )
   uiComboboxAppend( pCombobox, "Combobox Item 2" )
   uiComboboxAppend( pCombobox, "Combobox Item 3" )
   uiBoxAppend( pVerticalBox, pCombobox, .F. )

   pEditableCombobox := uiNewEditableCombobox()
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 1" )
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 2" )
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 3" )
   uiBoxAppend( pVerticalBox, pEditableCombobox, .F. )

   pRadioButtons := uiNewRadioButtons()
   uiRadioButtonsAppend( pRadioButtons, "Radio pButton 1" )
   uiRadioButtonsAppend( pRadioButtons, "Radio pButton 2" )
   uiRadioButtonsAppend( pRadioButtons, "Radio pButton 3" )
   uiBoxAppend( pVerticalBox, pRadioButtons, .F. )

   RETURN pHorizontalBox

STATIC PROCEDURE onOpenFileClicked( b, entry )

   LOCAL cFilename

   HB_SYMBOL_UNUSED( b )

   cFilename := uiOpenFile( pWindow )

   IF HB_ISNULL( cFilename )
      uiEntrySetText( entry, "(cancelled)" )
      RETURN
   ENDIF

   uiEntrySetText( entry, cFilename )

   RETURN

STATIC PROCEDURE onSaveFileClicked( b, entry )

   LOCAL cFilename

   HB_SYMBOL_UNUSED( b )

   cFilename := uiSaveFile( pWindow )

   IF HB_ISNULL( cFilename )
      uiEntrySetText( entry, "(cancelled)" )
      RETURN
   ENDIF

   uiEntrySetText( entry, cFilename )

   RETURN

STATIC PROCEDURE onMsgBoxClicked( b, DATA )

   HB_SYMBOL_UNUSED( b )
   HB_SYMBOL_UNUSED( DATA )

   uiMsgBox( pWindow, ;
      "This is a normal message box.", ;
      "More detailed information can be shown here." )

   RETURN

STATIC PROCEDURE onMsgBoxErrorClicked( b, DATA )

   HB_SYMBOL_UNUSED( b )
   HB_SYMBOL_UNUSED( DATA )

   uiMsgBoxError( pWindow, ;
      "This message box describes an error.", ;
      "More detailed information can be shown here." )

   RETURN

STATIC FUNCTION makeDataChoosersPage()

   LOCAL pHorizontalBox
   LOCAL pVerticalBox
   LOCAL pGrid1
   LOCAL pGrid2
   LOCAL pButton
   LOCAL pEntry

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pHorizontalBox, pVerticalBox, .F. )

   uiBoxAppend( pVerticalBox, uiNewDatePicker(), .F. )
   uiBoxAppend( pVerticalBox, uiNewTimePicker(), .F. )
   uiBoxAppend( pVerticalBox, uiNewDateTimePicker(), .F. )

   uiBoxAppend( pVerticalBox, uiNewFontButton(), .F. )
   uiBoxAppend( pVerticalBox, uiNewColorButton(), .F. )

   uiBoxAppend( pHorizontalBox, uiNewVerticalSeparator(), .F. )

   pVerticalBox := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox, .T. )
   uiBoxAppend( pHorizontalBox, pVerticalBox, .T. )

   pGrid1 := uiNewGrid()
   uiGridSetPadded( pGrid1, .T. )
   uiBoxAppend( pVerticalBox, pGrid1, .F. )

   pButton := uiNewButton( "Open File" )
   pEntry := uiNewEntry()
   uiEntrySetReadOnly( pEntry, .T. )
   uiButtonOnClicked( pButton, @onOpenFileClicked(), pEntry )
   uiGridAppend( pGrid1, pButton, 0, 0, 1, 1, .F., uiAlignFill, .F., uiAlignFill )
   uiGridAppend( pGrid1, pEntry, 1, 0, 1, 1, .T., uiAlignFill, .F., uiAlignFill )

   pButton := uiNewButton( "Save File" )
   pEntry := uiNewEntry()
   uiEntrySetReadOnly( pEntry, .T. )
   uiButtonOnClicked( pButton, @onSaveFileClicked(), pEntry )
   uiGridAppend( pGrid1, pButton, 0, 1, 1, 1, .F., uiAlignFill, .F., uiAlignFill )
   uiGridAppend( pGrid1, pEntry, 1, 1, 1, 1, .T., uiAlignFill, .F., uiAlignFill )

   pGrid2 := uiNewGrid()
   uiGridSetPadded( pGrid2, .T. )
   uiGridAppend( pGrid1, pGrid2, 0, 2, 2, 1, .F., uiAlignCenter, .F., uiAlignStart )

   pButton := uiNewButton( "Message Box" )
   uiButtonOnClicked( pButton, @onMsgBoxClicked(), NIL )
   uiGridAppend( pGrid2, pButton, 0, 0, 1, 1, .F., uiAlignFill, .F., uiAlignFill )
   pButton := uiNewButton( "Error Box" )
   uiButtonOnClicked( pButton, @onMsgBoxErrorClicked(), NIL )
   uiGridAppend( pGrid2, pButton, 1, 0, 1, 1, .F., uiAlignFill, .F., uiAlignFill )

   RETURN pHorizontalBox

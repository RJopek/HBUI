
#include "hbui.ch"

FUNCTION Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL pVerticalBox1
   LOCAL pHorizontalBox
   LOCAL pGroup
   LOCAL pVerticalBox2
   LOCAL pEntry
   LOCAL pVerticalBox3
   LOCAL pSpinbox
   LOCAL pSlider
   LOCAL pProgressBar
   LOCAL pCombobox
   LOCAL pEditableCombobox
   LOCAL pRadioButtons
   LOCAL pTab

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN NIL
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )

   pVerticalBox1 := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox1, .T. )

   pHorizontalBox := uiNewHorizontalBox()
   uiBoxSetPadded( pHorizontalBox, .T. )
   uiBoxAppend( pVerticalBox1, pHorizontalBox, .T. )

   pGroup := uiNewGroup( "Basic Controls" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pHorizontalBox, pGroup, .F. )

   pVerticalBox2 := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox2, .T. )
   uiGroupSetChild( pGroup, pVerticalBox2 )

   uiBoxAppend( pVerticalBox2, uiNewButton( "Button" ), .F. )
   uiBoxAppend( pVerticalBox2, uiNewCheckbox( "Checkbox" ), .F. )

   pEntry := uiNewEntry()
   uiEntrySetText( pEntry, "pEntry" )
   uiBoxAppend( pVerticalBox2, pEntry, .F. )
   uiBoxAppend( pVerticalBox2, uiNewLabel( "Label" ), .F. )

   uiBoxAppend( pVerticalBox2, uiNewHorizontalSeparator(), .F. )

   uiBoxAppend( pVerticalBox2, uiNewDatePicker(), .F. )
   uiBoxAppend( pVerticalBox2, uiNewTimePicker(), .F. )
   uiBoxAppend( pVerticalBox2, uiNewDateTimePicker(), .F. )

   uiBoxAppend( pVerticalBox2, uiNewFontButton(), .F. )

   uiBoxAppend( pVerticalBox2, uiNewColorButton(), .F. )

   pVerticalBox3 := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox3, .T. )
   uiBoxAppend( pHorizontalBox, pVerticalBox3, .T. )

   pGroup := uiNewGroup( "Numbers" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pVerticalBox3, pGroup, .F. )

   pVerticalBox2 := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox2, .T. )
   uiGroupSetChild( pGroup, pVerticalBox2 )

   pSpinbox := uiNewSpinbox( 0, 100 )
   // uiSpinboxOnChanged( pSpinbox, onSpinboxChanged(), NIL )
   uiBoxAppend( pVerticalBox2, pSpinbox, .F. )

   pSlider := uiNewSlider( 0, 100 )
   // uiSliderOnChanged( pSlider, onSliderChanged(), NIL )
   uiBoxAppend( pVerticalBox2, pSlider, .F. )

   pProgressBar := uiNewProgressBar()
   uiBoxAppend( pVerticalBox2, pProgressBar, .F. )

   pGroup := uiNewGroup( "Lists" )
   uiGroupSetMargined( pGroup, .T. )
   uiBoxAppend( pVerticalBox3, pGroup, .F. )

   pVerticalBox2 := uiNewVerticalBox()
   uiBoxSetPadded( pVerticalBox2, .T. )
   uiGroupSetChild( pGroup, pVerticalBox2 )

   pCombobox := uiNewCombobox()
   uiComboboxAppend( pCombobox, "Combobox Item 1" )
   uiComboboxAppend( pCombobox, "Combobox Item 2" )
   uiComboboxAppend( pCombobox, "Combobox Item 3" )
   uiBoxAppend( pVerticalBox2, pCombobox, .F. )

   pEditableCombobox := uiNewEditableCombobox()
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 1" )
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 2" )
   uiEditableComboboxAppend( pEditableCombobox, "Editable Item 3" )
   uiBoxAppend( pVerticalBox2, pEditableCombobox, .F. )

   pRadioButtons := uiNewRadioButtons()
   uiRadioButtonsAppend( pRadioButtons, "Radio Button 1" )
   uiRadioButtonsAppend( pRadioButtons, "Radio Button 2" )
   uiRadioButtonsAppend( pRadioButtons, "Radio Button 3" )
   uiBoxAppend( pVerticalBox2, pRadioButtons, .T. )

   pTab := uiNewTab()
   uiTabAppend( pTab, "Page 1", uiNewHorizontalBox() )
   uiTabAppend( pTab, "Page 2", uiNewHorizontalBox() )
   uiTabAppend( pTab, "Page 3", uiNewHorizontalBox() )
   uiBoxAppend( pVerticalBox3, pTab, .T. )

   uiWindowSetChild( pWindow, pVerticalBox1 )
   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN NIL

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )
   
   uiQuit()
   
   RETURN .T.
   
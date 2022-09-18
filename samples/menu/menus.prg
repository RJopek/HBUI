
#include "hbui.ch"

STATIC fileMenu
STATIC newItem
STATIC openItem
STATIC shouldQuitItem
STATIC quitItem
STATIC editMenu
STATIC undoItem
STATIC checkItem
STATIC accelItem
STATIC prefsItem
STATIC testMenu
STATIC enabledItem
STATIC enableThisItem
STATIC forceCheckedItem
STATIC forceUncheckedItem
STATIC whatWindowItem
STATIC moreTestsMenu
STATIC quitEnabledItem
STATIC prefsEnabledItem
STATIC aboutEnabledItem
STATIC checkEnabledItem
STATIC multiMenu
STATIC helpMenu
STATIC helpItem
STATIC aboutItem

STATIC pWindow

PROCEDURE Main()

   LOCAL cError
   LOCAL pLabel
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   InitMenus()

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .T. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .T. )
   OutStd( e"Menu item clicked on window ", pWindow )

   pLabel := uiNewLabel( "uiAlignCenter" )

   pGrid := uiNewGrid()
   uiGridAppend( pGrid, pLabel, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )
      
   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )
   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )
   
   uiQuit()
   
   RETURN .T.
   

PROCEDURE enableItemTest( item, pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   
   IF uiMenuItemChecked( item )
      uiMenuItemEnable( DATA )
   ELSE
      uiMenuItemDisable( DATA )
   ENDIF

   RETURN

PROCEDURE forceOn( item, pWindow, DATA )

   HB_SYMBOL_UNUSED( item )
   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

   uiMenuItemSetChecked( enabledItem, 1 )

   RETURN

PROCEDURE forceOff( item, pWindow, DATA )

   HB_SYMBOL_UNUSED( item )
   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

   uiMenuItemSetChecked( enabledItem, 0 )

   RETURN

PROCEDURE whatWindow( item, pWindow, DATA )

   HB_SYMBOL_UNUSED( item )
   HB_SYMBOL_UNUSED( DATA )

   OutStd( e"Menu item clicked on window ", pWindow )

   RETURN

PROCEDURE InitMenus()

   fileMenu := uiNewMenu( "File" )

   newItem := uiMenuAppendItem( fileMenu, "New" )
   openItem := uiMenuAppendItem( fileMenu, "Open" )
   uiMenuAppendSeparator( fileMenu )
   shouldQuitItem := uiMenuAppendCheckItem( fileMenu, "Should Quit" )
   quitItem := uiMenuAppendQuitItem( fileMenu )

   editMenu := uiNewMenu( "Edit" )

   undoItem := uiMenuAppendItem( editMenu, "Undo" )
   uiMenuItemDisable( undoItem )
   uiMenuAppendSeparator( editMenu )
   checkItem := uiMenuAppendCheckItem( editMenu, "Check Me\tTest" )
   accelItem := uiMenuAppendItem( editMenu, "A&ccele&&rator T_es__t" )
   prefsItem := uiMenuAppendPreferencesItem( editMenu )

   testMenu := uiNewMenu( "Test" )

   enabledItem := uiMenuAppendCheckItem( testMenu, "Enable Below Item" )
   uiMenuItemSetChecked( enabledItem, 1 )
   enableThisItem := uiMenuAppendItem( testMenu, "This Will Be Enabled" )
   uiMenuItemOnClicked( enabledItem, @enableItemTest(), enableThisItem )
   forceCheckedItem := uiMenuAppendItem( testMenu, "Force Above Checked" )
   uiMenuItemOnClicked( forceCheckedItem, @forceOn(), NIL )
   forceUncheckedItem := uiMenuAppendItem( testMenu, "Force Above Unchecked" )
   uiMenuItemOnClicked( forceUncheckedItem, @forceOff(), NIL )
   uiMenuAppendSeparator( testMenu )
   whatWindowItem := uiMenuAppendItem( testMenu, "What Window?" )
   uiMenuItemOnClicked( whatWindowItem, @whatWindow(), NIL )

   moreTestsMenu := uiNewMenu( "More Tests" )

   quitEnabledItem := uiMenuAppendCheckItem( moreTestsMenu, "Quit Item Enabled" )
   uiMenuItemSetChecked( quitEnabledItem, 1 )
   prefsEnabledItem := uiMenuAppendCheckItem( moreTestsMenu, "Preferences Item Enabled" )
   uiMenuItemSetChecked( prefsEnabledItem, 1 )
   aboutEnabledItem := uiMenuAppendCheckItem( moreTestsMenu, "About Item Enabled" )
   uiMenuItemSetChecked( aboutEnabledItem, 1 )
   uiMenuAppendSeparator( moreTestsMenu )
   checkEnabledItem := uiMenuAppendCheckItem( moreTestsMenu, "Check Me Item Enabled" )
   uiMenuItemSetChecked( checkEnabledItem, 1 )

   multiMenu := uiNewMenu( "Multi" )

   uiMenuAppendSeparator( multiMenu )
   uiMenuAppendSeparator( multiMenu )
   uiMenuAppendItem( multiMenu, "Item && Item && Item" )
   uiMenuAppendSeparator( multiMenu )
   uiMenuAppendSeparator( multiMenu )
   uiMenuAppendItem( multiMenu, "Item __ Item __ Item" )
   uiMenuAppendSeparator( multiMenu )
   uiMenuAppendSeparator( multiMenu )

   helpMenu := uiNewMenu( "Help" )
   
   helpItem := uiMenuAppendItem( helpMenu, "Help" )
   aboutItem := uiMenuAppendAboutItem( helpMenu )

   uiMenuItemOnClicked( quitEnabledItem, @enableItemTest(), quitItem )
   uiMenuItemOnClicked( prefsEnabledItem, @enableItemTest(), prefsItem )
   uiMenuItemOnClicked( aboutEnabledItem, @enableItemTest(), aboutItem )
   uiMenuItemOnClicked( checkEnabledItem, @enableItemTest(), checkItem )

   RETURN

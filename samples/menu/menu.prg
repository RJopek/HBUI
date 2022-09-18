
#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   MenuCreate()

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .T. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .F. )

   uiControlShow( pWindow )

   uiMain()
   uiUninit()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

	uiQuit()

   RETURN 1

PROCEDURE MenuCreate()

   LOCAL pMenu
   LOCAL pMenuAppendItem

   pMenu := uiNewMenu( "File" )

   pMenuAppendItem := uiMenuAppendItem( pMenu, "New" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Open..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Save" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Save As..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Print..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Page Setup..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Print Setup..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Exit            Alt+F4" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )

   pMenu := uiNewMenu( "Edit" )

   pMenuAppendItem := uiMenuAppendItem( pMenu, "Undo          Ctrl+Z" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Cut           Ctrl+X" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Copy          Ctrl+C" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Paste         Ctrl+V" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Clear" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Insert" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Delete        DEL" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Previous" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Next" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Go To Top     Ctrl+HOME" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Go To...      F5" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Go To Bottom  Ctrl+END" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Find          Alt+F3" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Find Next     F3" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )

   pMenu := uiNewMenu( "View" )

   pMenuAppendItem := uiMenuAppendItem( pMenu, "Form               Shift+F2" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Table              F2" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "All Records" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Select Records..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )

   pMenu := uiNewMenu( "Help" )

   pMenuAppendItem := uiMenuAppendItem( pMenu, "Index" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Commands    F1" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "Using help" )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )
   uiMenuAppendSeparator( pMenu )
   pMenuAppendItem := uiMenuAppendItem( pMenu, "About..." )
   uiMenuItemOnClicked( pMenuAppendItem, NIL, NIL )

   RETURN

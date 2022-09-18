
#include "hbui.ch"
#include "hbgtinfo.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow
   LOCAL nWidth := 640, nHeight := 480
   LOCAL cWindowTitle
   LOCAL pGrid

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", nWidth, nHeight, .F. )
   uiWindowOnClosing( pWindow, @onWindowClosing(), NIL )
   uiWindowSetMargined( pWindow, .F. )

   cWindowTitle := uiNewLabel( uiWindowTitle( pWindow ) )

   pGrid := uiNewGrid()
   uiGridAppend( pGrid, cWindowTitle, 0, 0, 1, 1, .T., uiAlignCenter, .T., uiAlignCenter )

   uiWindowSetChild( pWindow, pGrid )
   uiControlShow( pWindow )
   uiMain()

   RETURN

FUNCTION onWindowClosing( pWindow, DATA )

   HB_SYMBOL_UNUSED( pWindow )
   HB_SYMBOL_UNUSED( DATA )

   uiQuit()

   RETURN .T.

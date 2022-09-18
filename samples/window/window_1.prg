
#include "hbui.ch"

PROCEDURE Main()

   LOCAL cError
   LOCAL pWindow

   IF ! HB_ISNULL( cError := uiInit() )
      Alert( "Failed to initialize libui... " + cError )
      RETURN
   ENDIF

   pWindow := uiNewWindow( "Welcome to Harbour hbui (https://github.com/rjopek/hbui)", 640, 480, .F. )
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

   RETURN .T.
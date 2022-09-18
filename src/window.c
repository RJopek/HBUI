
#include "hbui.h"

static void onSize(uiWindow *w, void *data)
{
   (void)w;
   (void)data;
}

static int onClosing(uiWindow *w, void *data)
{
   (void)w;
   (void)data;
   uiQuit();
   return 1;
}

static int onShouldQuit(void *data)
{
   uiWindow *mainwin = uiWindow(data);
   uiControlDestroy(uiControl(mainwin));
   return 1;
}

//_UI_EXTERN char *uiWindowTitle(uiWindow *w);
HB_FUNC(UIWINDOWTITLE)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      hb_retc(uiWindowTitle(w));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetTitle(uiWindow *w, const char *title);
HB_FUNC(UIWINDOWSETTITLE)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      uiWindowSetTitle(w, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowContentSize(uiWindow *w, int *width, int *height);
HB_FUNC(UIWINDOWCONTENTSIZE)
{
   uiWindow *w = hbui_param(1);
   if (w && HB_IS_BYREF(2) && HB_IS_BYREF(3))
   {
      int width;
      int height;
      uiWindowContentSize(w, &width, &height);
      hb_storni(width, 2);
      hb_storni(height, 3);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetContentSize(uiWindow *w, int width, int height);
HB_FUNC(UIWINDOWSETCONTENTSIZE)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      uiWindowSetContentSize(w, hb_parni(2), hb_parni(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
//_UI_EXTERN int uiWindowFullscreen(uiWindow *w);
HB_FUNC(UIWINDOWFULLSCREEN)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      hb_retl(uiWindowFullscreen(w));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetFullscreen(uiWindow *w, int fullscreen);
HB_FUNC(UIWINDOWSETFULLSCREEN)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      uiWindowSetFullscreen(w, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowOnContentSizeChanged(uiWindow *w, void (*f)(uiWindow *, void *), void *data);
HB_FUNC(UIWINDOWONCONTENTSIZECHANGED)
{
   PHBUI_ITEM w = hbui_parptrGC(1);
   if (w && hbui_parSetEvalItem(&w, 2, 3))
   {
      uiWindowOnContentSizeChanged(w->control, onSize, w);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowOnClosing(uiWindow *w, int (*f)(uiWindow *w, void *data), void *data);
HB_FUNC(UIWINDOWONCLOSING)
{
   PHBUI_ITEM w = hbui_parptrGC(1);
   if (w && hbui_parSetEvalItem(&w, 2, 3))
   {
      uiWindowOnClosing(w->control, onClosing, w);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiWindowBorderless(uiWindow *w);
HB_FUNC(UIWINDOWBORDERLESS)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      hb_retl(uiWindowBorderless(w));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetBorderless(uiWindow *w, int borderless);
HB_FUNC(UIWINDOWSETBORDERLESS)
{
   uiWindow *w = hbui_param(1);
   if (w && HB_ISLOG(2))
   {
      uiWindowSetBorderless(w, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetChild(uiWindow *w, uiControl *child);
HB_FUNC(UIWINDOWSETCHILD)
{
   uiWindow *w = hbui_param(1);
   uiControl *child = hbui_param(2);
   if (w && child)
   {
      uiWindowSetChild(w, uiControl(child));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiWindowMargined(uiWindow *w);
HB_FUNC(UIWINDOWMARGINED)
{
   uiWindow *w = hbui_param(1);
   if (w)
   {
      hb_retni(uiWindowMargined(w));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiWindowSetMargined(uiWindow *w, int margined);
HB_FUNC(UIWINDOWSETMARGINED)
{
   uiWindow *w = hbui_param(1);
   if (w && HB_ISLOG(2))
   {
      uiWindowSetMargined(w, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiWindow *uiNewWindow(const char *title, int width, int height, int hasMenubar);
HB_FUNC(UINEWWINDOW)
{
   if (HB_ISCHAR(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISLOG(4))
   {
      uiWindow *w = uiNewWindow(hb_parc(1), hb_parni(2), hb_parni(3), hb_parl(4));
      /* uiWindowOnClosing(w, onClosing, NULL); */
      uiOnShouldQuit(onShouldQuit, w);
      hbui_ret(w);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

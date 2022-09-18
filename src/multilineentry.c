
#include "hbui.h"

static void onMultilineEntryChanged(uiMultilineEntry *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN char *uiMultilineEntryText(uiMultilineEntry *e);
HB_FUNC(UIMULTILINEENTRYTEXT)
{
   uiMultilineEntry *e = hbui_param(1);
   if (e)
   {
      hb_retc(uiMultilineEntryText(e));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMultilineEntrySetText(uiMultilineEntry *e, const char *text);
HB_FUNC(UIMULTILINEENTRYSETTEXT)
{
   uiMultilineEntry *e = hbui_param(1);
   if (e && HB_ISCHAR(2))
   {
      uiMultilineEntrySetText(e, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMultilineEntryAppend(uiMultilineEntry *e, const char *text);
HB_FUNC(UIMULTILINEENTRYAPPEND)
{
   uiMultilineEntry *e = hbui_param(1);
   if (e && HB_ISCHAR(2))
   {
      uiMultilineEntryAppend(e, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMultilineEntryOnChanged(uiMultilineEntry *e, void (*f)(uiMultilineEntry *e, void *data), void *data);
HB_FUNC(UIMULTILINEENTRYONCHANGED)
{
   PHBUI_ITEM e = hbui_parptrGC(1);
   if (e && hbui_parSetEvalItem(&e, 2, 3))
   {
      uiMultilineEntryOnChanged(e->control, onMultilineEntryChanged, e);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiMultilineEntryReadOnly(uiMultilineEntry *e);
HB_FUNC(UIMULTILINEENTRYREADONLY)
{
   uiMultilineEntry *e = hbui_param(1);
   if (e)
   {
      hb_retni(uiMultilineEntryReadOnly(e));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMultilineEntrySetReadOnly(uiMultilineEntry *e, int readonly);
HB_FUNC(UIMULTILINEENTRYSETREADONLY)
{
   uiMultilineEntry *e = hbui_param(1);
   if (e && HB_ISNUM(2))
   {
      uiMultilineEntrySetReadOnly(e, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMultilineEntry *uiNewMultilineEntry(void);
HB_FUNC(UINEWMULTILINEENTRY)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewMultilineEntry());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMultilineEntry *uiNewNonWrappingMultilineEntry(void);
HB_FUNC(UINEWNONWRAPPINGMULTILINEENTRY)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewNonWrappingMultilineEntry());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}


#include "hbui.h"

static void onEntryChanged(uiEntry *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN char *uiEntryText(uiEntry *e);
HB_FUNC(UIENTRYTEXT)
{
   uiEntry *e = hbui_param(1);
   if (e)
   {
      hb_retc(uiEntryText(e));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiEntrySetText(uiEntry *e, const char *text);
HB_FUNC(UIENTRYSETTEXT)
{
   uiEntry *e = hbui_param(1);
   if (e && HB_ISCHAR(2))
   {
      uiEntrySetText(e, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiEntryOnChanged(uiEntry *e, void (*f)(uiEntry *e, void *data), void *data);
HB_FUNC(UIENTRYONCHANGED)
{
   PHBUI_ITEM e = hbui_parptrGC(1);
   if (e && hbui_parSetEvalItem(&e, 2, 3))
   {
      uiEntryOnChanged(e->control, onEntryChanged, e);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiEntryReadOnly(uiEntry *e);
HB_FUNC(UIENTRYREADONLY)
{
   uiEntry *e = hbui_param(1);
   if (e)
   {
      hb_retl(uiEntryReadOnly(e));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiEntrySetReadOnly(uiEntry *e, int readonly);
HB_FUNC(UIENTRYSETREADONLY)
{
   uiEntry *e = hbui_param(1);
   if (e && HB_ISLOG(2))
   {
      uiEntrySetReadOnly(e, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiEntry *uiNewEntry(void);
HB_FUNC(UINEWENTRY)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewEntry());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiEntry *uiNewPasswordEntry(void);
HB_FUNC(UINEWPASSWORDENTRY)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewPasswordEntry());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiEntry *uiNewSearchEntry(void);
HB_FUNC(UINEWSEARCHENTRY)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewSearchEntry());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

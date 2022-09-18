
#include "hbui.h"

//_UI_EXTERN void uiTabAppend(uiTab *t, const char *name, uiControl *c);
HB_FUNC(UITABAPPEND)
{
   PHBUI_ITEM t;
   PHBUI_ITEM c;
   if (hbui_parParentChild(1, 3, &t, &c))
   {
      uiTabAppend(uiTab(t->control), hb_parc(2), uiControl(c->control));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 0, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiTabInsertAt(uiTab *t, const char *name, int before, uiControl *c);
HB_FUNC(UITABINSERTAT)
{
   PHBUI_ITEM t;
   PHBUI_ITEM c;
   if (hbui_parParentChild(1, 4, &t, &c))
   {
      uiTabInsertAt(uiTab(t->control), hb_parc(2), hb_parni(3), uiControl(c->control));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 0, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiTabDelete(uiTab *t, int index);
HB_FUNC(UITABDELETE)
{
   uiTab *t = hbui_param(1);
   if (t && HB_ISNUM(2))
   {
      uiTabDelete(uiTab(t), hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiTabNumPages(uiTab *t);
HB_FUNC(UITABNUMPAGES)
{
   uiTab *t = hbui_param(1);
   if (t)
   {
      hb_retni(uiTabNumPages(uiTab(t)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiTabMargined(uiTab *t, int page);
HB_FUNC(UITABMARGINED)
{
   uiTab *t = hbui_param(1);
   if (t && HB_ISNUM(2))
   {
      hb_retl(uiTabMargined(uiTab(t), hb_parni(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiTabSetMargined(uiTab *t, int page, int margined);
HB_FUNC(UITABSETMARGINED)
{
   uiTab *t = hbui_param(1);
   if (t && HB_ISNUM(2) && HB_ISLOG(3))
   {
      uiTabSetMargined(uiTab(t), hb_parni(2), hb_parl(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiTab *uiNewTab(void);
HB_FUNC(UINEWTAB)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewTab());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

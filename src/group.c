
#include "hbui.h"

//_UI_EXTERN char *uiGroupTitle(uiGroup *g);
HB_FUNC(UIGROUPTITLE)
{
   uiGroup *g = hbui_param(1);
   if (g)
   {
      hb_retc(uiGroupTitle(g));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiGroupSetTitle(uiGroup *g, const char *title);
HB_FUNC(UIGROUPSETTITLE)
{
   uiGroup *g = hbui_param(1);
   if (g && HB_ISCHAR(2))
   {
      uiGroupSetTitle(g, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiGroupSetChild(uiGroup *g, uiControl *c);
HB_FUNC(UIGROUPSETCHILD)
{
   PHBUI_ITEM g;
   PHBUI_ITEM c;
   if (hbui_parParentChild(1, 2, &g, &c))
   {
      uiGroupSetChild(g->control, uiControl(c->control));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiGroupMargined(uiGroup *g);
HB_FUNC(UIGROUPMARGINED)
{
   uiGroup *g = hbui_param(1);
   if (g)
   {
      hb_retl(uiGroupMargined(g));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiGroupSetMargined(uiGroup *g, int margined);
HB_FUNC(UIGROUPSETMARGINED)
{
   uiGroup *g = hbui_param(1);
   if (g && HB_ISLOG(2))
   {
      uiGroupSetMargined(g, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiGroup *uiNewGroup(const char *title);
HB_FUNC(UINEWGROUP)
{
   if (HB_ISCHAR(1))
   {
      hbui_ret(uiNewGroup(hb_parc(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

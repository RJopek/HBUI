
#include "hbui.h"

//_UI_EXTERN void uiGridAppend(uiGrid *g, uiControl *c, int left, int top, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC(UIGRIDAPPEND)
{
   PHBUI_ITEM g;
   PHBUI_ITEM c;
   if (hbui_parParentChild(1, 2, &g, &c))
   {
      uiGridAppend(g->control, uiControl(c->control), hb_parni(3), hb_parni(4), hb_parni(5), hb_parni(6), hb_parl(7), hb_parni(8), hb_parl(9), hb_parni(10));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiGridInsertAt(uiGrid *g, uiControl *c, uiControl *existing, uiAt at, int xspan, int yspan, int hexpand, uiAlign halign, int vexpand, uiAlign valign);
HB_FUNC(UIGRIDINSERTAT)
{
   PHBUI_ITEM g;
   PHBUI_ITEM c;
   uiControl *existing = hbui_param(3);
   if (hbui_parParentChild(1, 2, &g, &c))
   {
      uiGridInsertAt(g->control, c->control, existing, hb_parni(4), hb_parni(5), hb_parni(6), hb_parl(7), hb_parni(8), hb_parl(9), hb_parni(10));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiGridPadded(uiGrid *g);
HB_FUNC(UIGRIDPADDED)
{
   uiGrid *g = hbui_param(1);
   if (g)
   {
      hb_retl(uiGridPadded(g));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiGridSetPadded(uiGrid *g, int padded);
HB_FUNC(UIGRIDSETPADDED)
{
   uiGrid *g = hbui_param(1);
   if (g && HB_ISLOG(2))
   {
      uiGridSetPadded(g, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiGrid *uiNewGrid(void);
HB_FUNC(UINEWGRID)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewGrid());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}


#include "hbui.h"

// _UI_EXTERN uiDrawTextLayout *uiDrawNewTextLayout(uiDrawTextLayoutParams *params);
HB_FUNC(UIDRAWNEWTEXTLAYOUT)
{
   uiDrawTextLayoutParams *params = hbui_param(1);
   if (params)
   {
      hbui_ret(uiDrawNewTextLayout(params));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawFreeTextLayout(uiDrawTextLayout *tl);
HB_FUNC(UIDRAWFREETEXTLAYOUT)
{
   uiDrawTextLayout *tl = hbui_param(1);
   if (tl)
   {
      uiDrawFreeTextLayout(tl);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawText(uiDrawContext *c, uiDrawTextLayout *tl, double x, double y);
HB_FUNC(UIDRAWTEXT)
{
   uiDrawContext *c = hbui_param(1);
   uiDrawTextLayout *tl = hbui_param(2);
   if (c && tl && HB_ISNUM(3) && HB_ISNUM(4))
   {
      uiDrawText(c, tl, hb_parnd(3), hb_parnd(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawTextLayoutExtents(uiDrawTextLayout *tl, double *width, double *height);
HB_FUNC(UIDRAWTEXTLAYOUTEXTENTS)
{
   uiDrawTextLayout *tl = hbui_param(1);
   if (tl && HB_IS_BYREF(2) && HB_IS_BYREF(3))
   {
      double width, height;
      uiDrawTextLayoutExtents(tl, &width, &height);
      hb_stornd(width, 2);
      hb_stornd(height, 3);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

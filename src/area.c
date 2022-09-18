
#include "hbui.h"

// _UI_EXTERN void uiAreaSetSize(uiArea *a, int width, int height);
HB_FUNC(UIAREASETSIZE)
{

   uiArea *a = hbui_param(1);
   if (a && HB_ISNUM(2) && HB_ISNUM(3))
   {
      uiAreaSetSize(a, hb_parni(2), hb_parni(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAreaQueueRedrawAll(uiArea *a);
HB_FUNC(UIAREAQUEUEREDRAWALL)
{
   uiArea *a = hbui_param(1);
   if (a)
   {
      uiAreaQueueRedrawAll(a);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
// _UI_EXTERN void uiAreaScrollTo(uiArea *a, double x, double y, double width, double height);
HB_FUNC(UIAREASCROLLTO)
{
   uiArea *a = hbui_param(1);
   if (a && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5))
   {
      uiAreaScrollTo(a, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
// _UI_EXTERN void uiAreaBeginUserWindowMove(uiArea *a);
HB_FUNC(UIAREABEGINUSERWINDOWMOVE)
{

   uiArea *a = hbui_param(1);
   if (a)
   {
      uiAreaBeginUserWindowMove(a);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
// _UI_EXTERN void uiAreaBeginUserWindowResize(uiArea *a, uiWindowResizeEdge edge);
HB_FUNC(UIAREABEGINUSERWINDOWRESIZE)
{
   uiArea *a = hbui_param(1);
   if (a && HB_ISNUM(2))
   {
      uiAreaBeginUserWindowResize(a, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
// _UI_EXTERN uiArea *uiNewArea(uiAreaHandler *ah);
HB_FUNC(UINEWAREA)
{
   uiArea *ah = uiNewArea(hbui_param(1));
   if (ah)
   {
      hbui_ret(ah);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
// _UI_EXTERN uiArea *uiNewScrollingArea(uiAreaHandler *ah, int width, int height);
HB_FUNC(UINEWSCROLLINGAREA)
{
   uiAreaHandler *ah = hbui_param(1);
   if (ah && HB_ISNUM(2) && HB_ISNUM(3))
   {
      hbui_ret(uiNewScrollingArea(ah, hb_parni(2), hb_parni(3)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

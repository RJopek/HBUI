
#include "hbui.h"

// _UI_EXTERN void uiDrawMatrixSetIdentity(uiDrawMatrix *m);
HB_FUNC(UIDRAWMATRIXSETIDENTITY)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m)
   {
      uiDrawMatrixSetIdentity(m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixTranslate(uiDrawMatrix *m, double x, double y);
HB_FUNC(UIDRAWMATRIXTRANSLATE)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_ISNUM(2) && HB_ISNUM(3))
   {
      uiDrawMatrixTranslate(m, hb_parnd(2), hb_parnd(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixScale(uiDrawMatrix *m, double xCenter, double yCenter, double x, double y);
HB_FUNC(UIDRAWMATRIXSCALE)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5))
   {
      uiDrawMatrixScale(m, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixRotate(uiDrawMatrix *m, double x, double y, double amount);
HB_FUNC(UIDRAWMATRIXROTATE)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4))
   {
      uiDrawMatrixRotate(m, hb_parnd(2), hb_parnd(3), hb_parnd(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixSkew(uiDrawMatrix *m, double x, double y, double xamount, double yamount);
HB_FUNC(UIDRAWMATRIXSKEW)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5))
   {
      uiDrawMatrixSkew(m, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixMultiply(uiDrawMatrix *dest, uiDrawMatrix *src);
HB_FUNC(UIDRAWMATRIXMULTIPLY)
{
   uiDrawMatrix *dest = hbui_param(1);
   uiDrawMatrix *src = hbui_param(2);
   if (dest && src)
   {
      uiDrawMatrixMultiply(dest, src);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiDrawMatrixInvertible(uiDrawMatrix *m);
HB_FUNC(UIDRAWMATRIXINVERTIBLE)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m)
   {
      uiDrawMatrixInvertible(m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiDrawMatrixInvert(uiDrawMatrix *m);
HB_FUNC(UIDRAWMATRIXINVERT)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m)
   {
      uiDrawMatrixInvert(m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixTransformPoint(uiDrawMatrix *m, double *x, double *y);
HB_FUNC(UIDRAWMATRIXTRANSFORMPOINT)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_IS_BYREF(2) && HB_IS_BYREF(3))
   {
      double x, y;
      uiDrawMatrixTransformPoint(m, &x, &y);
      hb_stornd(x, 2);
      hb_stornd(y, 3);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawMatrixTransformSize(uiDrawMatrix *m, double *x, double *y);
HB_FUNC(UIDRAWMATRIXTRANSFORMSIZE)
{
   uiDrawMatrix *m = hbui_param(1);
   if (m && HB_IS_BYREF(2) && HB_IS_BYREF(3))
   {
      double x, y;
      uiDrawMatrixTransformSize(m, &x, &y);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawTransform(uiDrawContext *c, uiDrawMatrix *m);
HB_FUNC(UIDRAWTRANSFORM)
{
   uiDrawContext *c = hbui_param(1);
   uiDrawMatrix *m = hbui_param(2);
   if (c && m)
   {
      uiDrawTransform(c, m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

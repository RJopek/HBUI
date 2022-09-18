
#include "hbui.h"

// _UI_EXTERN uiImage *uiNewImage(double width, double height);
HB_FUNC(UINEWIMAGE)
{
   if (HB_ISNUM(1) && HB_ISNUM(2))
   {
      hbui_ret(uiNewImage(hb_parnd(1), hb_parnd(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiFreeImage(uiImage *i);
HB_FUNC(UIFREEIMAGE)
{
   uiImage *i = hbui_param(1);
   if (i)
   {
      uiFreeImage(i);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiImageAppend(uiImage *i, void *pixels, int pixelWidth, int pixelHeight, int byteStride);
HB_FUNC(UIIMAGEAPPEND)
{
   uiImage *i = hbui_param(1);
   void *pixels = hbui_param(2);
   if (i && pixels && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5))
   {
      uiImageAppend(i, pixels, hb_parni(3), hb_parni(4), hb_parni(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

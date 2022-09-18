
#include "hbui.h"

// _UI_EXTERN void uiFreeTableValue(uiTableValue *v);
HB_FUNC(UIFREETABLEVALUE)
{
   uiTableValue *v = hbui_param(1);
   if (v)
   {
      uiFreeTableValue(v);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTableValueType uiTableValueGetType(const uiTableValue *v);
HB_FUNC(UITABLEVALUEGETTYPE)
{
   const uiTableValue *v = hbui_param(1);
   if (v)
   {
      hb_retni(uiTableValueGetType(v));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTableValue *uiNewTableValueString(const char *str);
HB_FUNC(UINEWTABLEVALUESTRING)
{
   if (HB_ISCHAR(1))
   {
      hbui_ret(uiNewTableValueString(hb_parc(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN const char *uiTableValueString(const uiTableValue *v);
HB_FUNC(UITABLEVALUESTRING)
{
   const uiTableValue *v = hbui_param(1);
   if (v)
   {
      hb_retc(uiTableValueString(v));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTableValue *uiNewTableValueImage(uiImage *img);
HB_FUNC(UINEWTABLEVALUEIMAGE)
{
   uiImage *img = hbui_param(1);
   if (img)
   {
      hbui_ret(uiNewTableValueImage(img));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiImage *uiTableValueImage(const uiTableValue *v);
HB_FUNC(UITABLEVALUEIMAGE)
{
   const uiTableValue *v = hbui_param(1);
   if (v)
   {
      hbui_ret(uiTableValueImage(v));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTableValue *uiNewTableValueInt(int i);
HB_FUNC(UINEWTABLEVALUEINT)
{
   if ( HB_ISNUM(1))
   {
      hbui_ret(uiNewTableValueInt(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiTableValueInt(const uiTableValue *v);
HB_FUNC(UITABLEVALUEINT)
{
   const uiTableValue *v = hbui_param(1);
   if (v)
   {
      hb_retni(uiTableValueInt(v));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTableValue *uiNewTableValueColor(double r, double g, double b, double a);
HB_FUNC(UINEWTABLEVALUECOLOR)
{

   if ( HB_ISNUM( 1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) )
   {
      hbui_ret(uiNewTableValueColor( hb_parnd(1), hb_parnd(2), hb_parnd(3), hb_parnd(4)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableValueColor(const uiTableValue *v, double *r, double *g, double *b, double *a);
HB_FUNC(UITABLEVALUECOLOR)
{
   const uiTableValue *v = hbui_param(1);

   if (v && HB_IS_BYREF(2) && HB_IS_BYREF(3) && HB_IS_BYREF(4) && HB_IS_BYREF(5))
   {
      double r, g, b, a;

      uiTableValueColor(v, &r, &g, &b, &a);

      hb_stornd(r, 2);
      hb_stornd(g, 3);
      hb_stornd(b, 4);
      hb_stornd(a, 5);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

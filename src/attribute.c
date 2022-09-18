
#include "hbui.h"

// _UI_EXTERN void uiFreeAttribute(uiAttribute *a);
HB_FUNC(UIFREEATTRIBUTE)
{
   uiAttribute *a = hbui_param(1);
   if (a)
   {
      uiFreeAttribute(a);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttributeType uiAttributeGetType(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEGETTYPE)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retni(uiAttributeGetType(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewFamilyAttribute(const char *family);
HB_FUNC(UINEWFAMILYATTRIBUTE)
{
   const char *family = hbui_param(1);
   if (family)
   {
      hbui_ret(uiNewFamilyAttribute(family));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN const char *uiAttributeFamily(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEFAMILY)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retc(uiAttributeFamily(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewSizeAttribute(double size);
HB_FUNC(UINEWSIZEATTRIBUTE)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiNewSizeAttribute(hb_parnd(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN double uiAttributeSize(const uiAttribute *a);
HB_FUNC(UIATTRIBUTESIZE)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retnd(uiAttributeSize(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewWeightAttribute(uiTextWeight weight);
HB_FUNC(UINEWWEIGHTATTRIBUTE)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiNewWeightAttribute(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTextWeight uiAttributeWeight(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEWEIGHT)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retni(uiAttributeWeight(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewItalicAttribute(uiTextItalic italic);
HB_FUNC(UINEWITALICATTRIBUTE)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiNewItalicAttribute(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTextItalic uiAttributeItalic(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEITALIC)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retni(uiAttributeItalic(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewStretchAttribute(uiTextStretch stretch);
HB_FUNC(UINEWSTRETCHATTRIBUTE)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiNewStretchAttribute(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTextStretch uiAttributeStretch(const uiAttribute *a);
HB_FUNC(UIATTRIBUTESTRETCH)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retni(uiAttributeStretch(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewColorAttribute(double r, double g, double b, double a);
HB_FUNC(UINEWCOLORATTRIBUTE)
{
   if (HB_ISNUM(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4))
   {
      hbui_ret(uiNewColorAttribute(hb_parnd(1), hb_parnd(2), hb_parnd(3), hb_parnd(4)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributeColor(const uiAttribute *a, double *r, double *g, double *b, double *alpha);
HB_FUNC(UIATTRIBUTECOLOR)
{
   const uiAttribute *a = hbui_param(1);
   if (a && HB_IS_BYREF(2) && HB_IS_BYREF(3) && HB_IS_BYREF(4) && HB_IS_BYREF(5))
   {
      double r, g, b, alpha;

      uiAttributeColor(a, &r, &g, &b, &alpha);
      hb_stornd(r, 2);
      hb_stornd(g, 3);
      hb_stornd(b, 4);
      hb_stornd(alpha, 5);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewBackgroundAttribute(double r, double g, double b, double a);
HB_FUNC(UINEWBACKGROUNDATTRIBUTE)
{
   if (HB_ISNUM(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4))
   {
      hbui_ret(uiNewBackgroundAttribute(hb_parnd(1), hb_parnd(2), hb_parnd(3), hb_parnd(4)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewUnderlineAttribute(uiUnderline u);
HB_FUNC(UINEWUNDERLINEATTRIBUTE)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiNewUnderlineAttribute(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiUnderline uiAttributeUnderline(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEUNDERLINE)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      hb_retni(uiAttributeUnderline(a));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiAttribute *uiNewUnderlineColorAttribute(uiUnderlineColor u, double r, double g, double b, double a);
HB_FUNC(UINEWUNDERLINECOLORATTRIBUTE)
{
   if (HB_ISNUM(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(4))
   {
      hbui_ret(uiNewUnderlineColorAttribute(hb_parni(1), hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributeUnderlineColor(const uiAttribute *a, uiUnderlineColor *u, double *r, double *g, double *b, double *alpha);
HB_FUNC(UIATTRIBUTEUNDERLINECOLOR)
{
   const uiAttribute *a = hbui_param(1);
   uiUnderlineColor *u = hbui_param(2);
   if (a && u && HB_IS_BYREF(3) && HB_IS_BYREF(4) && HB_IS_BYREF(5) && HB_IS_BYREF(6))
   {
      double r, g, b, alpha;
      uiAttributeUnderlineColor(a, u, &r, &g, &b, &alpha);
      hb_stornd(r, 3);
      hb_stornd(g, 4);
      hb_stornd(b, 5);
      hb_stornd(alpha, 6);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

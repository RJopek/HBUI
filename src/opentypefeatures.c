
#include "hbui.h"

// _UI_EXTERN uiOpenTypeFeatures *uiNewOpenTypeFeatures(void);
HB_FUNC(UINEWOPENTYPEFEATURES)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewOpenTypeFeatures());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiFreeOpenTypeFeatures(uiOpenTypeFeatures *otf);
HB_FUNC(UIFREEOPENTYPEFEATURES)
{
   uiOpenTypeFeatures *otf = hbui_param(1);
   if (otf)
   {
      uiFreeOpenTypeFeatures(otf);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiOpenTypeFeatures *uiOpenTypeFeaturesClone(const uiOpenTypeFeatures *otf);
HB_FUNC(UIOPENTYPEFEATURESCLONE)
{
   const uiOpenTypeFeatures *otf = hbui_param(1);
   if (otf)
   {
      hbui_ret(uiOpenTypeFeaturesClone(otf));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiOpenTypeFeaturesAdd(uiOpenTypeFeatures *otf, char a, char b, char c, char d, uint32_t value);
HB_FUNC(UIOPENTYPEFEATURESADD) //?
{
   uiOpenTypeFeatures *otf = hbui_param(1);
   if (otf)
   {
      uiOpenTypeFeaturesAdd(otf, (char)hb_parni(2), (char)hb_parni(3), (char)hb_parni(4), (char)hb_parni(5), (uint32_t)hb_parnint(6));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiOpenTypeFeaturesRemove(uiOpenTypeFeatures *otf, char a, char b, char c, char d);
HB_FUNC(UIOPENTYPEFEATURESREMOVE) //?
{
   uiOpenTypeFeatures *otf = hbui_param(1);
   if (otf)
   {
      uiOpenTypeFeaturesRemove(otf, (char)hb_parni(2), (char)hb_parni(3), (char)hb_parni(4), (char)hb_parni(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiOpenTypeFeaturesGet(const uiOpenTypeFeatures *otf, char a, char b, char c, char d, uint32_t *value);
HB_FUNC(UIOPENTYPEFEATURESGET) //?
{
   const uiOpenTypeFeatures *otf = hbui_param(1);
   uint32_t *value = hbui_param(6);
   if (otf)
   {
      hb_retni(uiOpenTypeFeaturesGet(otf, (char)hb_parni(2), (char)hb_parni(3), (char)hb_parni(4), (char)hb_parni(5), value));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiOpenTypeFeaturesForEach(const uiOpenTypeFeatures *otf, uiOpenTypeFeaturesForEachFunc f, void *data);
HB_FUNC(UIOPENTYPEFEATURESFOREACH)
{
}

// _UI_EXTERN uiAttribute *uiNewFeaturesAttribute(const uiOpenTypeFeatures *otf);
HB_FUNC(UINEWFEATURESATTRIBUTE)
{
   const uiOpenTypeFeatures *otf = hbui_param(1);
   if (otf)
   {
      hbui_ret(uiNewFeaturesAttribute(otf));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN const uiOpenTypeFeatures *uiAttributeFeatures(const uiAttribute *a);
HB_FUNC(UIATTRIBUTEFEATURES)
{
   const uiAttribute *a = hbui_param(1);
   if (a)
   {
      uiAttributeFeatures(a);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}


#include "hbui.h"

//_UI_EXTERN char *uiLabelText(uiLabel *l);
HB_FUNC(UILABELTEXT)
{
   uiLabel *l = hbui_param(1);
   if (l)
   {
      hb_retc(uiLabelText(l));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiLabelSetText(uiLabel *l, const char *text);
HB_FUNC(UILABELSETTEXT)
{
   uiLabel *l = hbui_param(1);
   if (l && HB_ISCHAR(2))
   {
      uiLabelSetText(l, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiLabel *uiNewLabel(const char *text);
HB_FUNC(UINEWLABEL)
{
   if (HB_ISCHAR(1))
   {
      hbui_ret(uiNewLabel(hb_parc(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

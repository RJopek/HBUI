
#include "hbui.h"

//_UI_EXTERN int uiProgressBarValue(uiProgressBar *p);
HB_FUNC(UIPROGRESSBARVALUE)
{
   uiProgressBar *p = hbui_param(1);
   if (p)
   {
      hb_retni(uiProgressBarValue(p));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiProgressBarSetValue(uiProgressBar *p, int n);
HB_FUNC(UIPROGRESSBARSETVALUE)
{
   uiProgressBar *p = hbui_param(1);
   if (p && HB_ISNUM(2))
   {
      uiProgressBarSetValue(p, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiProgressBar *uiNewProgressBar(void);
HB_FUNC(UINEWPROGRESSBAR)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewProgressBar());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

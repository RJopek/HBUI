
#include "hbui.h"

//_UI_EXTERN uiSeparator *uiNewHorizontalSeparator(void);
HB_FUNC(UINEWHORIZONTALSEPARATOR)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewHorizontalSeparator());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiSeparator *uiNewVerticalSeparator(void);
HB_FUNC(UINEWVERTICALSEPARATOR)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewVerticalSeparator());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

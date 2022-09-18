
#include "hbui.h"

//_UI_EXTERN char *uiOpenFile(uiWindow *parent);
HB_FUNC(UIOPENFILE)
{
   uiWindow *parent = hbui_param(1);
   if (parent)
   {
      hb_retc(uiOpenFile(parent));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN char *uiSaveFile(uiWindow *parent);
HB_FUNC(UISAVEFILE)
{
   uiWindow *parent = hbui_param(1);
   if (parent)
   {
      hb_retc(uiSaveFile(parent));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMsgBox(uiWindow *parent, const char *title, const char *description);
HB_FUNC(UIMSGBOX)
{
   uiWindow *parent = hbui_param(1);
   if (parent && HB_ISCHAR(2) && HB_ISCHAR(3))
   {
      uiMsgBox(parent, hb_parc(2), hb_parc(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
//_UI_EXTERN void uiMsgBoxError(uiWindow *parent, const char *title, const char *description);
HB_FUNC(UIMSGBOXERROR)
{
   uiWindow *parent = hbui_param(1);
   if (parent && HB_ISCHAR(2) && HB_ISCHAR(3))
   {
      uiMsgBoxError(parent, hb_parc(2), hb_parc(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

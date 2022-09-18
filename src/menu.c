
#include "hbui.h"

//_UI_EXTERN uiMenuItem *uiMenuAppendItem(uiMenu *m, const char *name);
HB_FUNC(UIMENUAPPENDITEM)
{
   uiMenu *m = hbui_param(1);
   if (m && HB_ISCHAR(2))
   {
      hbui_ret(uiMenuAppendItem(m, hb_parc(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMenuItem *uiMenuAppendCheckItem(uiMenu *m, const char *name);
HB_FUNC(UIMENUAPPENDCHECKITEM)
{
   uiMenu *m = hbui_param(1);
   if (m && HB_ISCHAR(2))
   {
      hbui_ret(uiMenuAppendCheckItem(m, hb_parc(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMenuItem *uiMenuAppendQuitItem(uiMenu *m);
HB_FUNC(UIMENUAPPENDQUITITEM)
{
   uiMenu *m = hbui_param(1);
   if (m)
   {
      hbui_ret(uiMenuAppendQuitItem(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMenuItem *uiMenuAppendPreferencesItem(uiMenu *m);
HB_FUNC(UIMENUAPPENDPREFERENCESITEM)
{
   uiMenu *m = hbui_param(1);
   if (m)
   {
      hbui_ret(uiMenuAppendPreferencesItem(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMenuItem *uiMenuAppendAboutItem(uiMenu *m);
HB_FUNC(UIMENUAPPENDABOUTITEM)
{
   uiMenu *m = hbui_param(1);
   if (m)
   {
      hbui_ret(uiMenuAppendAboutItem(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMenuAppendSeparator(uiMenu *m);
HB_FUNC(UIMENUAPPENDSEPARATOR)
{
   uiMenu *m = hbui_param(1);
   if (m)
   {
      uiMenuAppendSeparator(m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiMenu *uiNewMenu(const char *name);
HB_FUNC(UINEWMENU)
{
   if (HB_ISCHAR(1))
   {
      hbui_ret(uiNewMenu(hb_parc(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

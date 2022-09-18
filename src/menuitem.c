
#include "hbui.h"

static void onMenuItemClicked(uiMenuItem *control, uiWindow *window, void *data)
{
   (void)control;
   (void)window;
   hbui_onControlChanged(data);
}

//_UI_EXTERN void uiMenuItemEnable(uiMenuItem *m);
HB_FUNC(UIMENUITEMENABLE)
{
   uiMenuItem *m = hbui_param(1);
   if (m)
   {
      uiMenuItemEnable(uiMenuItem(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMenuItemDisable(uiMenuItem *m);
HB_FUNC(UIMENUITEMDISABLE)
{
   uiMenuItem *m = hbui_param(1);
   if (m)
   {
      uiMenuItemDisable(uiMenuItem(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMenuItemOnClicked(uiMenuItem *m, void (*f)(uiMenuItem *sender, uiWindow *window, void *data), void *data);
HB_FUNC(UIMENUITEMONCLICKED)
{
   PHBUI_ITEM m = hbui_parptrGC(1);
   if (m /* && hbui_parSetEvalItem(&m, 2, 3) */)
   {
      uiMenuItemOnClicked(m->control, onMenuItemClicked, m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiMenuItemChecked(uiMenuItem *m);
HB_FUNC(UIMENUITEMCHECKED)
{
   uiMenuItem *m = hbui_param(1);
   if (m)
   {
      hb_retni(uiMenuItemChecked(m));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiMenuItemSetChecked(uiMenuItem *m, int checked);
HB_FUNC(UIMENUITEMSETCHECKED)
{
   uiMenuItem *m = hbui_param(1);
   if (m && HB_ISNUM(2))
   {
      uiMenuItemSetChecked(m, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

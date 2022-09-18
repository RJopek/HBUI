
#include "hbui.h"

static void onComboboxSelected(uiCombobox *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN void uiComboboxAppend(uiCombobox *c, const char *text);
HB_FUNC(UICOMBOBOXAPPEND)
{
   uiCombobox *c = hbui_param(1);
   if (c && HB_ISCHAR(2))
   {
      uiComboboxAppend(c, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiComboboxSelected(uiCombobox *c);
HB_FUNC(UICOMBOBOXSELECTED)
{
   uiCombobox *c = hbui_param(1);
   if (c)
   {
      hb_retni(uiComboboxSelected(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiComboboxSetSelected(uiCombobox *c, int n);
HB_FUNC(UICOMBOBOXSETSELECTED)
{
   uiCombobox *c = hbui_param(1);
   if (c && HB_ISNUM(2))
   {
      uiComboboxSetSelected(c, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiComboboxOnSelected(uiCombobox *c, void (*f)(uiCombobox *c, void *data), void *data);
HB_FUNC(UICOMBOBOXONSELECTED)
{
   PHBUI_ITEM c = hbui_parptrGC(1);
   if (c && hbui_parSetEvalItem(&c, 2, 3))
   {
      uiComboboxOnSelected(c->control, onComboboxSelected, c);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiCombobox *uiNewCombobox(void);
HB_FUNC(UINEWCOMBOBOX)
{
   if (HB_ISNIL(1))
      hbui_ret(uiNewCombobox());
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

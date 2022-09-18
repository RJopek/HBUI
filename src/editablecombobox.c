
#include "hbui.h"

static void onEditableComboboxChanged(uiEditableCombobox *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN void uiEditableComboboxAppend(uiEditableCombobox *c, const char *text);
HB_FUNC(UIEDITABLECOMBOBOXAPPEND)
{
   uiEditableCombobox *c = hbui_param(1);
   if (c && HB_ISCHAR(2))
   {
      uiEditableComboboxAppend(c, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN char *uiEditableComboboxText(uiEditableCombobox *c);
HB_FUNC(UIEDITABLECOMBOBOXTEXT)
{
   uiEditableCombobox *c = hbui_param(1);
   if (c)
   {
      hb_retc(uiEditableComboboxText(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiEditableComboboxSetText(uiEditableCombobox *c, const char *text);
HB_FUNC(UIEDITABLECOMBOBOXSETTEXT)
{
   uiEditableCombobox *c = hbui_param(1);
   if (c && HB_ISCHAR(2))
   {
      uiEditableComboboxSetText(c, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiEditableComboboxOnChanged(uiEditableCombobox *c, void (*f)(uiEditableCombobox *c, void *data), void *data);
HB_FUNC(UIEDITABLECOMBOBOXONCHANGED)
{
   PHBUI_ITEM c = hbui_parptrGC(1);
   if (c && hbui_parSetEvalItem(&c, 2, 3))
   {
      uiEditableComboboxOnChanged(c->control, onEditableComboboxChanged, c);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiEditableCombobox *uiNewEditableCombobox(void);
HB_FUNC(UINEWEDITABLECOMBOBOX)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewEditableCombobox());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

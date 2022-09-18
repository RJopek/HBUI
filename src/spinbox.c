
#include "hbui.h"

static void onSpinboxChanged(uiSpinbox *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN int uiSpinboxValue(uiSpinbox *s);
HB_FUNC(UISPINBOXVALUE)
{
   uiSpinbox *s = hbui_param(1);
   if (s)
   {
      hb_retni(uiSpinboxValue(s));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiSpinboxSetValue(uiSpinbox *s, int value);
HB_FUNC(UISPINBOXSETVALUE)
{
   uiSpinbox *s = hbui_param(1);
   if (s && HB_ISNUM(2))
   {
      uiSpinboxSetValue(s, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiSpinboxOnChanged(uiSpinbox *s, void (*f)(uiSpinbox *s, void *data), void *data);
HB_FUNC(UISPINBOXONCHANGED)
{
   PHBUI_ITEM s = hbui_parptrGC(1);
   if (s && hbui_parSetEvalItem(&s, 2, 3))
   {
      uiSpinboxOnChanged(s->control, onSpinboxChanged, s);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiSpinbox *uiNewSpinbox(int min, int max);
HB_FUNC(UINEWSPINBOX)
{
   if (HB_ISNUM(1) && HB_ISNUM(2))
   {
      hbui_ret(uiNewSpinbox(hb_parni(1), hb_parni(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}


#include "hbui.h"

//_UI_EXTERN void uiFormAppend(uiForm *f, const char *label, uiControl *c, int stretchy);
HB_FUNC(UIFORMAPPEND)
{
   PHBUI_ITEM f;
   PHBUI_ITEM c;
   if (hbui_parParentChild(1, 3, &f, &c) && HB_ISLOG(4))
   {
      uiFormAppend(uiForm(f->control), hb_parc(2), uiControl(c->control), hb_parl(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiFormDelete(uiForm *f, int index);
HB_FUNC(UIFORMDELETE)
{
   uiForm *f = hbui_param(1);
   if (f && HB_ISNUM(2))
   {
      uiFormDelete(f, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiFormPadded(uiForm *f);
HB_FUNC(UIFORMPADDED)
{
   uiForm *f = hbui_param(1);
   if (f)
   {
      hb_retni(uiFormPadded(f));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiFormSetPadded(uiForm *f, int padded);
HB_FUNC(UIFORMSETPADDED)
{
   uiForm *f = hbui_param(1);
   if (f && HB_ISLOG(2))
   {
      uiFormSetPadded(f, hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiForm *uiNewForm(void);
HB_FUNC(UINEWFORM)
{
   if (HB_ISNIL(1))
      hbui_ret(uiNewForm());
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

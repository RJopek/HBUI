
#include "hbui.h"

static void onButtonClicked(uiButton *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN char *uiButtonText(uiButton *b);
HB_FUNC(UIBUTTONTEXT)
{
   uiButton *b = hbui_param(1);
   if (b)
   {
      hb_retc(uiButtonText(b));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiButtonSetText(uiButton *b, const char *text);
HB_FUNC(UIBUTTONSETTEXT)
{
   uiButton *b = hbui_param(1);
   if (b && HB_ISCHAR(2))
   {
      uiButtonSetText(b, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiButtonOnClicked(uiButton *b, void (*f)(uiButton *b, void *data), void *data);
HB_FUNC(UIBUTTONONCLICKED)
{
   PHBUI_ITEM b = hbui_parptrGC(1);
   if (b && hbui_parSetEvalItem(&b, 2, 3))
   {
      uiButtonOnClicked(b->control, onButtonClicked, b);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiButton *uiNewButton(const char *text);
HB_FUNC(UINEWBUTTON)
{
   void *c = uiNewButton(hb_parc(1));
   PHBUI_ITEM puiItem = hbui_gcAllocate(c);
   puiItem->mark = 1;
   hb_retptrGC(puiItem);
}


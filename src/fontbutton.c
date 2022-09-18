
#include "hbui.h"

static void onFontButtonChanged(uiFontButton *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN void uiFontButtonFont(uiFontButton *b, uiFontDescriptor *desc);
HB_FUNC(UIFONTBUTTONFONT)
{
   uiFontButton *b = hbui_param(1);
   if (b)
   {
      uiFontDescriptor desc;
      uiFontButtonFont(b, &desc);
      uiFreeFontButtonFont(&desc);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiFontButtonOnChanged(uiFontButton *b, void (*f)(uiFontButton *, void *), void *data);
HB_FUNC(UIFONTBUTTONONCHANGED)
{
   PHBUI_ITEM b = hbui_parptrGC(1);
   if (b && hbui_parSetEvalItem(&b, 2, 3))
   {
      uiFontButtonOnChanged(b->control, onFontButtonChanged, b);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiFontButton *uiNewFontButton(void);
HB_FUNC(UINEWFONTBUTTON)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewFontButton());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiFreeFontButtonFont(uiFontDescriptor *desc);
HB_FUNC(UIFREEFONTBUTTONFONT)
{
   uiFontDescriptor *desc = hbui_param(1);
   if (desc)
   {
      uiFreeFontButtonFont(desc);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

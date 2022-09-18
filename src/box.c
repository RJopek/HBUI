
#include "hbui.h"

//_UI_EXTERN void uiBoxAppend(uiBox *b, uiControl *child, int stretchy);
HB_FUNC(UIBOXAPPEND)
{
   PHBUI_ITEM b;
   PHBUI_ITEM child;
   if (hbui_parParentChild(1, 2, &b, &child) && HB_ISLOG(3) )
   {
      uiBoxAppend(uiBox(b->control), uiControl(child->control), hb_parl(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiBoxDelete(uiBox *b, int index);
HB_FUNC(UIBOXDELETE)
{
   uiBox *b = hbui_param(1);
   if (b && HB_ISNUM(2))
   {
      uiBoxDelete(uiBox(b), hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN int uiBoxPadded(uiBox *b);
HB_FUNC(UIBOXPADDED)
{
   uiBox *b = hbui_param(1);
   if (b)
   {
      hb_retl(uiBoxPadded(uiBox(b)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiBoxSetPadded(uiBox *b, int padded);
HB_FUNC(UIBOXSETPADDED)
{
   uiBox *b = hbui_param(1);
   if (b && HB_ISLOG(2))
   {
      uiBoxSetPadded(uiBox(b), hb_parl(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiBox *uiNewHorizontalBox(void);
HB_FUNC(UINEWHORIZONTALBOX)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewHorizontalBox());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiBox *uiNewVerticalBox(void);
HB_FUNC(UINEWVERTICALBOX)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewVerticalBox());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

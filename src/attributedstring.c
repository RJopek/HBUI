
#include "hbui.h"

// _UI_EXTERN uiAttributedString *uiNewAttributedString(const char *initialString);
HB_FUNC(UINEWATTRIBUTEDSTRING)
{
   if (HB_ISCHAR(1))
   {
      hbui_ret(uiNewAttributedString(hb_parc(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiFreeAttributedString(uiAttributedString *s);
HB_FUNC(UIFREEATTRIBUTEDSTRING)
{
   uiAttributedString *s = hbui_param(1);
   if (s)
   {
      uiFreeAttributedString(s);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN const char *uiAttributedStringString(const uiAttributedString *s);
HB_FUNC(UIATTRIBUTEDSTRINGSTRING)
{
   const uiAttributedString *s = hbui_param(1);
   if (s)
   {
      hb_retc(uiAttributedStringString(s));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN size_t uiAttributedStringLen(const uiAttributedString *s);
HB_FUNC(UIATTRIBUTEDSTRINGLEN)
{
   const uiAttributedString *s = hbui_param(1);
   if (s)
   {
      hb_retnint(uiAttributedStringLen(s));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributedStringAppendUnattributed(uiAttributedString *s, const char *str);
HB_FUNC(UIATTRIBUTEDSTRINGAPPENDUNATTRIBUTED)
{
   uiAttributedString *s = hbui_param(1);
   if (s && HB_ISCHAR(2))
   {
      uiAttributedStringAppendUnattributed(s, hb_parc(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributedStringInsertAtUnattributed(uiAttributedString *s, const char *str, size_t at);
HB_FUNC(UIATTRIBUTEDSTRINGINSERTATUNATTRIBUTED)
{
   uiAttributedString *s = hbui_param(1);
   if (s && HB_ISCHAR(2) && HB_ISNUM(3))
   {
      uiAttributedStringInsertAtUnattributed(s, hb_parc(2), hb_parnint(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributedStringDelete(uiAttributedString *s, size_t start, size_t end);
HB_FUNC(UIATTRIBUTEDSTRINGDELETE)
{
   uiAttributedString *s = hbui_param(1);
   if (s && HB_ISNUM(2) && HB_ISNUM(3))
   {
      uiAttributedStringDelete(s, hb_parnint(2), hb_parnint(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributedStringSetAttribute(uiAttributedString *s, uiAttribute *a, size_t start, size_t end);
HB_FUNC(UIATTRIBUTEDSTRINGSETATTRIBUTE)
{
   uiAttributedString *s = hbui_param(1);
   uiAttribute *a = hbui_param(2);
   if (s && a && HB_ISNUM(3) && HB_ISNUM(4))
   {
      uiAttributedStringSetAttribute(s, a, hb_parnint(3), hb_parnint(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiAttributedStringForEachAttribute(const uiAttributedString *s, uiAttributedStringForEachAttributeFunc f, void *data);
HB_FUNC(UIATTRIBUTEDSTRINGFOREACHATTRIBUTE)
{
}

// _UI_EXTERN size_t uiAttributedStringNumGraphemes(uiAttributedString *s);
HB_FUNC(UIATTRIBUTEDSTRINGNUMGRAPHEMES)
{
   uiAttributedString *s = hbui_param(1);
   if (s)
   {
      hb_retnint(uiAttributedStringNumGraphemes(s));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN size_t uiAttributedStringByteIndexToGrapheme(uiAttributedString *s, size_t pos);
HB_FUNC(UIATTRIBUTEDSTRINGBYTEINDEXTOGRAPHEME)
{
   uiAttributedString *s = hbui_param(1);
   if (s && HB_ISNUM(2))
   {
      hb_retnint(uiAttributedStringByteIndexToGrapheme(s, hb_parnint(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN size_t uiAttributedStringGraphemeToByteIndex(uiAttributedString *s, size_t pos);
HB_FUNC(UIATTRIBUTEDSTRINGGRAPHEMETOBYTEINDEX)
{
   uiAttributedString *s = hbui_param(1);
   if (s && HB_ISNUM(2))
   {
      hb_retnint(uiAttributedStringGraphemeToByteIndex(s, hb_parnint(2)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

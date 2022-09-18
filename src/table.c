#include "hbui.h"

// _UI_EXTERN void uiTableAppendTextColumn(uiTable *t, const char *name, int textModelColumn, int textEditableModelColumn, uiTableTextColumnOptionalParams *textParams);
HB_FUNC(UITABLEAPPENDTEXTCOLUMN)
{
   uiTable *t = hbui_param(1);
   uiTableTextColumnOptionalParams *textParams = hbui_param(5);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3) && HB_ISNUM(4) && textParams)
   {
      uiTableAppendTextColumn(t, hb_parc(2), hb_parni(3), hb_parni(4), textParams);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendImageColumn(uiTable *t, const char *name, int imageModelColumn);
HB_FUNC(UITABLEAPPENDIMAGECOLUMN)
{
   uiTable *t = hbui_param(1);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3))
   {
      uiTableAppendImageColumn(t, hb_parc(2), hb_parni(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendImageTextColumn(uiTable *t, const char *name, int imageModelColumn, int textModelColumn, int textEditableModelColumn, uiTableTextColumnOptionalParams *textParams);
HB_FUNC(UITABLEAPPENDIMAGETEXTCOLUMN)
{
   uiTable *t = hbui_param(1);
   uiTableTextColumnOptionalParams *textParams = hbui_param(6);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5) && textParams)
   {
      uiTableAppendImageTextColumn(t, hb_parc(2), hb_parni(3), hb_parni(4), hb_parni(5), textParams);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendCheckboxColumn(uiTable *t, const char *name, int checkboxModelColumn, int checkboxEditableModelColumn);
HB_FUNC(UITABLEAPPENDCHECKBOXCOLUMN)
{
   uiTable *t = hbui_param(1);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3) && HB_ISNUM(4))
   {
      uiTableAppendCheckboxColumn(t, hb_parc(2), hb_parni(3), hb_parni(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendCheckboxTextColumn(uiTable *t, const char *name, int checkboxModelColumn, int checkboxEditableModelColumn, int textModelColumn, int textEditableModelColumn, uiTableTextColumnOptionalParams *textParams);
HB_FUNC(UITABLEAPPENDCHECKBOXTEXTCOLUMN)
{

   uiTable *t = hbui_param(1);
   uiTableTextColumnOptionalParams *textParams = hbui_param(7);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5) && HB_ISNUM(6) && textParams)
   {
      uiTableAppendCheckboxTextColumn(t, hb_parc(2), hb_parni(3), hb_parni(4), hb_parni(5), hb_parni(6), textParams);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendProgressBarColumn(uiTable *t, const char *name, int progressModelColumn);
HB_FUNC(UITABLEAPPENDPROGRESSBARCOLUMN)
{
   uiTable *t = hbui_param(1);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3))
   {
      uiTableAppendProgressBarColumn(t, hb_parc(2), hb_parni(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableAppendButtonColumn(uiTable *t, const char *name, int buttonModelColumn, int buttonClickableModelColumn);
HB_FUNC(UITABLEAPPENDBUTTONCOLUMN)
{
   uiTable *t = hbui_param(1);
   if (t && HB_ISCHAR(2) && HB_ISNUM(3) && HB_ISNUM(4))
   {
      uiTableAppendButtonColumn(t, hb_parc(2), hb_parni(3), hb_parni(4));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiTable *uiNewTable(uiTableParams *params);
HB_FUNC(UINEWTABLE)
{
   uiTable *params = uiNewTable(hbui_param(1));
   if (params)
   {
      hbui_ret(params);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

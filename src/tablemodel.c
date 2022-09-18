
#include "hbui.h"

// _UI_EXTERN uiTableModel *uiNewTableModel(uiTableModelHandler *mh);
HB_FUNC(UINEWTABLEMODEL)
{
   uiTableModelHandler *mh = hbui_param(1);
   if (mh)
   {
      hbui_ret(uiNewTableModel(mh));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiFreeTableModel(uiTableModel *m);
HB_FUNC(UIFREETABLEMODEL)
{
   uiTableModel *m = hbui_param(1);
   if (m)
   {
      uiFreeTableModel(m);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableModelRowInserted(uiTableModel *m, int newIndex);
HB_FUNC(UITABLEMODELROWINSERTED)
{
   uiTableModel *m = hbui_param(1);
   if (m && HB_ISNUM(2))
   {
      uiTableModelRowInserted(m, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableModelRowChanged(uiTableModel *m, int index);
HB_FUNC(UITABLEMODELROWCHANGED)
{
   uiTableModel *m = hbui_param(1);
   if (m && HB_ISNUM(2))
   {
      uiTableModelRowChanged(m, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiTableModelRowDeleted(uiTableModel *m, int oldIndex);
HB_FUNC(UITABLEMODELROWDELETED)
{
   uiTableModel *m = hbui_param(1);
   if (m && HB_ISNUM(2))
   {
      uiTableModelRowDeleted(m, hb_parni(2));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

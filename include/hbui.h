
#include "ui.h"

#include "hbapi.h"
#include "hbapierr.h"

typedef struct
{
   void *control;
   int mark;
   PHB_ITEM pEvalItem;
   PHB_ITEM pParentItem;
   PHB_ITEM pItem;
   PHB_ITEM pData;

} HBUI_ITEM, *PHBUI_ITEM;

PHBUI_ITEM hbui_gcAllocate(void *c);
PHBUI_ITEM hbui_parptrGC(int iParam);

void *hbui_param(int iParam);
void hbui_ret(void *c);
void hbui_onControlChanged(PHBUI_ITEM phItem);

HB_BOOL hbui_parParentChild(int iParent, int iChild, PHBUI_ITEM *phParent, PHBUI_ITEM *phChild);
HB_BOOL hbui_parSetEvalItem(PHBUI_ITEM *phControl, int iEvalItem, int iData);


#include "hbvm.h"
#include "hbapiitm.h"

#include "hbui.h"

static HB_GARBAGE_FUNC(hbui_gcFree)
{
   PHBUI_ITEM phItem = (PHBUI_ITEM)Cargo;

   if (phItem && phItem->control)
   {
      //        uiControlDestroy( uiControl( pItem->control ) );
      phItem->control = NULL;
   }
}

static HB_GARBAGE_FUNC(hbui_gcMark)
{
   PHBUI_ITEM phItem = (PHBUI_ITEM)Cargo;

   if (phItem)
   {
      hb_gcMark(phItem);
   }
}

static const HB_GC_FUNCS s_gc_hbuiFuncs =
    {
        hbui_gcFree,
        hbui_gcMark};

void *hbui_param(int iParam)
{
   PHBUI_ITEM phItem = hbui_parptrGC(iParam);

   return (phItem && phItem->control) ? phItem->control : NULL;
}

HB_BOOL hbui_parParentChild(int iParent, int iChild, PHBUI_ITEM *phParent, PHBUI_ITEM *phChild)
{
   *phParent = hbui_parptrGC(iParent);
   *phChild = hbui_parptrGC(iChild);
   if (*phParent && *phChild && (*phChild)->pItem == NULL)
   {
      (*phChild)->pItem = hb_itemNew(hb_param(iChild, HB_IT_ANY));
      return HB_TRUE;
   }
   return HB_FALSE;
}

HB_BOOL hbui_parSetEvalItem(PHBUI_ITEM *phControl, int iEvalItem, int iData)
{
   PHB_ITEM pItemBlock = hb_param(iEvalItem, HB_IT_EVALITEM);
   if (*phControl && pItemBlock)
   {
      PHB_ITEM pItemData = hb_param(iData, HB_IT_ANY);
      (*phControl)->pEvalItem = hb_itemNew(pItemBlock);
      (*phControl)->pData = pItemData ? hb_itemNew(pItemData) : NULL;
      return HB_TRUE;
   }
   return HB_FALSE;
}

PHBUI_ITEM hbui_parptrGC(int iParam)
{
   PHBUI_ITEM phItem = (PHBUI_ITEM)hb_parptrGC(&s_gc_hbuiFuncs, iParam);

   return phItem;
}

PHBUI_ITEM hbui_gcAllocate(void *c)
{
   PHBUI_ITEM phItem = (PHBUI_ITEM)hb_gcAllocate(sizeof(HBUI_ITEM), &s_gc_hbuiFuncs);

   phItem->control = c;
   phItem->pData = NULL;
   phItem->pEvalItem = NULL;
   phItem->pItem = NULL;
   phItem->pParentItem = NULL;
   phItem->mark = 0;

   return phItem;
}

void hbui_ret(void *c)
{
   if (c)
   {
      hb_retptrGC(hbui_gcAllocate(c));
   }
   else
   {
      hb_retptr( NULL );
   }
}

extern HB_COUNTER hb_gcRefCount(void *pAlloc);

HB_FUNC(HB_GCREFCOUNT)
{
   PHBUI_ITEM phItem = hbui_parptrGC(1);
   if (phItem)
   {
      hb_retnint(hb_gcRefCount(phItem));
   }
   else
   {
      hb_retni(-1);
   }
}

void hbui_onControlChanged(PHBUI_ITEM phItem)
{
   if (phItem && hb_vmRequestReenter())
   {
      hb_vmPushEvalSym();
      hb_vmPush(phItem->pEvalItem);
      hb_vmPush(phItem->pItem);
      if (phItem->pData)
      {
         hb_vmPush(phItem->pData);
         hb_vmSend(2);
      }
      else
      {
         hb_vmSend(1);
      }

      hb_vmRequestRestore();
   }
}

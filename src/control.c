
#include "hbui.h"

// _UI_EXTERN void uiControlDestroy(uiControl *);
HB_FUNC(UICONTROLDESTROY)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiControlDestroy(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uintptr_t uiControlHandle(uiControl *);
HB_FUNC(UICONTROLHANDLE)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hb_retnint(uiControlHandle(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN uiControl *uiControlParent(uiControl *);
HB_FUNC(UICONTROLPARENT)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hbui_ret(uiControlParent(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlSetParent(uiControl *, uiControl *);
HB_FUNC(UICONTROLSETPARENT)
{
   uiControl *c = hbui_param(1);
   uiControl *parent = hbui_param(2);

   if (c && parent)
   {
      uiControlSetParent(uiControl(c), uiControl(parent));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiControlToplevel(uiControl *);
HB_FUNC(UICONTROLTOPLEVEL)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hb_retni(uiControlToplevel(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiControlVisible(uiControl *);
HB_FUNC(UICONTROLVISIBLE)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hb_retl(uiControlVisible(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlShow(uiControl *);
HB_FUNC(UICONTROLSHOW)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiControlShow(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlHide(uiControl *);
HB_FUNC(UICONTROLHIDE)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiControlHide(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiControlEnabled(uiControl *);
HB_FUNC(UICONTROLENABLED)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hb_retni(uiControlEnabled(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlEnable(uiControl *);
HB_FUNC(UICONTROLENABLE)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiControlEnable(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlDisable(uiControl *);
HB_FUNC(UICONTROLDISABLE)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiControlDisable(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//uiControl *uiAllocControl(size_t size, uint32_t OSsig, uint32_t typesig, const char *typenamestr)
//{
//	uiControl *c;
//
//	c = (uiControl *) uiAlloc(size, typenamestr);
//	c->Signature = uiControlSignature;
//	c->OSSignature = OSsig;
//	c->TypeSignature = typesig;
//	return c;
//}

//_UI_EXTERN void uiFreeControl(uiControl *);
HB_FUNC(UIFREECONTROL)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      uiFreeControl(uiControl(c));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiControlVerifySetParent(uiControl *, uiControl *);
HB_FUNC(UICONTROLVERIFYSETPARENT)
{
   uiControl *c = hbui_param(1);
   uiControl *parent = hbui_param(2);
   if (c && parent)
   {
      uiControlVerifySetParent(uiControl(c), uiControl(parent));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN int uiControlEnabledToUser(uiControl *);
HB_FUNC(UICONTROLENABLEDTOUSER)
{
   uiControl *c = hbui_param(1);
   if (c)
   {
      hb_retl(uiControlEnabledToUser(uiControl(c)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiUserBugCannotSetParentOnToplevel(const char *type);
HB_FUNC(UIUSERBUGCANNOTSETPARENTONTOPLEVEL)
{
   if (HB_ISCHAR(1))
   {
      uiUserBugCannotSetParentOnToplevel(hb_parc(1));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}
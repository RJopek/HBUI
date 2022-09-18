
#include "hbui.h"

// _UI_EXTERN uiDrawPath *uiDrawNewPath(uiDrawFillMode fillMode);
HB_FUNC(UIDRAWNEWPATH)
{
   if (HB_ISNUM(1))
   {
      hbui_ret(uiDrawNewPath(hb_parni(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawFreePath(uiDrawPath *p);
HB_FUNC(UIDRAWFREEPATH)
{
   uiDrawPath *p = hbui_param(1);
   if (p)
   {
      uiDrawFreePath(p);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathNewFigure(uiDrawPath *p, double x, double y);
HB_FUNC(UIDRAWPATHNEWFIGURE)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3))
   {
      uiDrawPathNewFigure(p, hb_parnd(2), hb_parnd(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathNewFigureWithArc(uiDrawPath *p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative);
HB_FUNC(UIDRAWPATHNEWFIGUREWITHARC)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5) && HB_ISNUM(6) && HB_ISNUM(7))
   {
      uiDrawPathNewFigureWithArc(p, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5), hb_parnd(6), hb_parni(7));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathLineTo(uiDrawPath *p, double x, double y);
HB_FUNC(UIDRAWPATHLINETO)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3))
   {
      uiDrawPathLineTo(p, hb_parnd(2), hb_parnd(3));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathArcTo(uiDrawPath *p, double xCenter, double yCenter, double radius, double startAngle, double sweep, int negative);
HB_FUNC(UIDRAWPATHARCTO)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5) && HB_ISNUM(6) && HB_ISNUM(7))
   {
      uiDrawPathArcTo(p, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5), hb_parnd(6), hb_parni(7));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathBezierTo(uiDrawPath *p, double c1x, double c1y, double c2x, double c2y, double endX, double endY);
HB_FUNC(UIDRAWPATHBEZIERTO)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5) && HB_ISNUM(6) && HB_ISNUM(7))
   {
      uiDrawPathBezierTo(p, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5), hb_parnd(6), hb_parnd(7));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathCloseFigure(uiDrawPath *p);
HB_FUNC(UIDRAWPATHCLOSEFIGURE)
{
   uiDrawPath *p = hbui_param(1);
   if (p)
   {
      uiDrawPathCloseFigure(p);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathAddRectangle(uiDrawPath *p, double x, double y, double width, double height);
HB_FUNC(UIDRAWPATHADDRECTANGLE)
{
   uiDrawPath *p = hbui_param(1);
   if (p && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4) && HB_ISNUM(5))
   {
      uiDrawPathAddRectangle(p, hb_parnd(2), hb_parnd(3), hb_parnd(4), hb_parnd(5));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawPathEnd(uiDrawPath *p);
HB_FUNC(UIDRAWPATHEND)
{
   uiDrawPath *p = hbui_param(1);
   if (p)
   {
      uiDrawPathEnd(p);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawStroke(uiDrawContext *c, uiDrawPath *path, uiDrawBrush *b, uiDrawStrokeParams *p);
HB_FUNC(UIDRAWSTROKE)
{
   uiDrawContext *c = hbui_param(1);
   uiDrawPath *path = hbui_param(2);
   uiDrawBrush *b = hbui_param(3);
   uiDrawStrokeParams *p = hbui_param(4);
   if (c && path && b && p)
   {
      uiDrawStroke(c, path, b, p);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiDrawFill(uiDrawContext *c, uiDrawPath *path, uiDrawBrush *b);
HB_FUNC(UIDRAWFILL)
{
   uiDrawContext *c = hbui_param(1);
   uiDrawPath *path = hbui_param(2);
   uiDrawBrush *b = hbui_param(3);
   if (c && path && b)
   {
      uiDrawFill(c, path, b);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

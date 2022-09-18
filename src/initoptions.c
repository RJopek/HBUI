#include "hbui.h"

// _UI_EXTERN const char *uiInit(uiInitOptions *options);
HB_FUNC(UIINIT)
{
   uiInitOptions options;
   const char *err;

   memset(&options, 0, sizeof(uiInitOptions));
   hb_retc(err = uiInit(&options));

   if (err != NULL)
   {
      uiFreeInitError(err);
   }
}

// _UI_EXTERN void uiUninit(void);
HB_FUNC(UIUNINIT)
{
   uiUninit();
}

// _UI_EXTERN void uiFreeInitError(const char *err);
HB_FUNC(UIFREEINITERROR)
{
   if (HB_ISCHAR(1))
   {
      uiFreeInitError(hb_parc(1));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiMain(void);
HB_FUNC(UIMAIN)
{
   uiMain();
}

// _UI_EXTERN void uiMainSteps(void);
HB_FUNC(UIMAINSTEPS)
{
   uiMainSteps();
}
// _UI_EXTERN int uiMainStep(int wait);
HB_FUNC(UIMAINSTEP)
{
   if (HB_ISLOG(1))
   {
      hb_retl(uiMainStep(hb_parl(1)));
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

// _UI_EXTERN void uiQuit(void);
HB_FUNC(UIQUIT)
{
   uiQuit();
}

// _UI_EXTERN void uiQueueMain(void (*f)(void *data), void *data);
HB_FUNC(UIQUEUEMAIN)
{
}

// _UI_EXTERN void uiTimer(int milliseconds, int (*f)(void *data), void *data);
HB_FUNC(UITIMER)
{
}

// _UI_EXTERN void uiOnShouldQuit(int (*f)(void *data), void *data);
HB_FUNC(UIONSHOULDQUIT)
{
}

// _UI_EXTERN void uiFreeText(char *text);
HB_FUNC(UIFREETEXT)
{
}

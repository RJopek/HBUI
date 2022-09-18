
#include "hbui.h"

static void onDateTimePickerChanged(uiDateTimePicker *control, void *data)
{
   HB_SYMBOL_UNUSED(control);
   hbui_onControlChanged(data);
}

//_UI_EXTERN void uiDateTimePickerTime(uiDateTimePicker *d, struct tm *time);
HB_FUNC(UIDATETIMEPICKERTIME)
{
   uiDateTimePicker *d = hbui_param(1);
   struct tm *time = hbui_param(2);
   if (d && time)
   {
      uiDateTimePickerTime(d, time);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiDateTimePickerSetTime(uiDateTimePicker *d, const struct tm *time);
HB_FUNC(UIDATETIMEPICKERSETTIME)
{
   uiDateTimePicker *d = hbui_param(1);
   const struct tm *time = hbui_param(2);
   if (d && time)
   {
      uiDateTimePickerSetTime(d, time);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN void uiDateTimePickerOnChanged(uiDateTimePicker *d, void (*f)(uiDateTimePicker *, void *), void *data);
HB_FUNC(UIDATETIMEPICKERONCHANGED)
{
   PHBUI_ITEM d = hbui_parptrGC(1);
   if (d && hbui_parSetEvalItem(&d, 2, 3))
   {
      uiDateTimePickerOnChanged(d->control, onDateTimePickerChanged, d);
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiDateTimePicker *uiNewDateTimePicker(void);
HB_FUNC(UINEWDATETIMEPICKER)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewDateTimePicker());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiDateTimePicker *uiNewDatePicker(void);
HB_FUNC(UINEWDATEPICKER)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewDatePicker());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

//_UI_EXTERN uiDateTimePicker *uiNewTimePicker(void);
HB_FUNC(UINEWTIMEPICKER)
{
   if (HB_ISNIL(1))
   {
      hbui_ret(uiNewTimePicker());
   }
   else
   {
      hb_errRT_BASE_SubstR(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
   }
}

void _ZN9alacritty8renderer4text13TextRenderApi15add_render_item17hbff4cf76ce075603E
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,int *param_5)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(param_3 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13clipboard_mut17hb85825099bbad034E
            (lVar1);
  cVar2 = _ZN102__LT_alacritty__renderer__text__gles2__Batch_u20_as_u20_alacritty__renderer__text__TextRenderBatch_GT_8is_empty17h4c50a91fc77a81afE
                    (*(undefined8 *)(lVar1 + 0x10));
  if (cVar2 == '\0') {
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13clipboard_mut17hb85825099bbad034E
              (lVar1);
    if (*(int *)(lVar1 + 0x18) != *param_5) {
      _ZN151__LT_alacritty__renderer__text__gles2__RenderApi_u20_as_u20_alacritty__renderer__text__TextRenderApi_LT_alacritty__renderer__text__gles2__Batch_GT__GT_12render_batch17h45ff3cec58968cacE
                (param_3);
    }
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13clipboard_mut17hb85825099bbad034E
            (lVar1);
  _ZN102__LT_alacritty__renderer__text__gles2__Batch_u20_as_u20_alacritty__renderer__text__TextRenderBatch_GT_8add_item17h837d0f136cc1557eE
            (param_1,param_2,lVar1,param_4,param_5);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13clipboard_mut17hb85825099bbad034E
            (lVar1);
  cVar2 = _ZN102__LT_alacritty__renderer__text__gles2__Batch_u20_as_u20_alacritty__renderer__text__TextRenderBatch_GT_4full17hee26601b208ac73dE
                    (*(undefined8 *)(lVar1 + 0x10));
  if (cVar2 != '\0') {
    _ZN151__LT_alacritty__renderer__text__gles2__RenderApi_u20_as_u20_alacritty__renderer__text__TextRenderApi_LT_alacritty__renderer__text__gles2__Batch_GT__GT_12render_batch17h45ff3cec58968cacE
              (param_3);
    return;
  }
  return;
}
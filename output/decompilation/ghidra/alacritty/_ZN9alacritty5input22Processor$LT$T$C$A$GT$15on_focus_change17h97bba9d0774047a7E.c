void _ZN9alacritty5input22Processor_LT_T_C_A_GT_15on_focus_change17h97bba9d0774047a7E
               (undefined8 param_1,long param_2,char param_3)

{
  undefined4 extraout_EDX;
  char *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (param_2);
  if ((*(byte *)(param_2 + 0x6dd) & 8) != 0) {
    local_80 = "O";
    if (param_3 != '\0') {
      local_80 = "I";
    }
    local_78 = 1;
    local_70 = &local_80;
    local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hde322f69d68256c4E;
    local_60 = &PTR_DAT_00982c60;
    local_58 = 1;
    local_40 = 0;
    local_50 = &local_70;
    local_48 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
              (local_30,0,extraout_EDX,&local_60);
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
              (param_1,local_30);
  }
  return;
}
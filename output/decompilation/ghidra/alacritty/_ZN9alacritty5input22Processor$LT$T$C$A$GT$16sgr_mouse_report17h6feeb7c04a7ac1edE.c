void _ZN9alacritty5input22Processor_LT_T_C_A_GT_16sgr_mouse_report17h6feeb7c04a7ac1edE
               (undefined8 param_1,long param_2,int param_3,undefined param_4,int param_5)

{
  undefined local_a9;
  uint local_a8;
  int local_a4;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long *local_88;
  undefined *local_80;
  int *local_78;
  undefined *local_70;
  uint *local_68;
  undefined *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  
  local_a8 = param_5 << 5 | 0x4d;
  local_a0 = param_2 + 1;
  local_a4 = param_3 + 1;
  local_98 = &local_a9;
  local_90 = 
  PTR__ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17h150c2a008a7de3c9E_009deb48
  ;
  local_88 = &local_a0;
  local_80 = 
  PTR__ZN72__LT_alacritty_terminal__index__Column_u20_as_u20_core__fmt__Display_GT_3fmt17h86f543d6692d8d80E_009dfa40
  ;
  local_78 = &local_a4;
  local_70 = 
  PTR__ZN70__LT_alacritty_terminal__index__Line_u20_as_u20_core__fmt__Display_GT_3fmt17h8bdccc96f374cf92E_009de570
  ;
  local_68 = &local_a8;
  local_60 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_009dfa58;
  local_58 = &PTR_DAT_00982db0;
  local_50 = 4;
  local_38 = 0;
  local_48 = &local_98;
  local_40 = 4;
  local_a9 = param_4;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E(local_28,0,local_a4,&local_58);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
            (param_1,local_28);
  return;
}
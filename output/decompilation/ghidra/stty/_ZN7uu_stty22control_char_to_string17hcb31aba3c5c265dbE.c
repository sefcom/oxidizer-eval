void _ZN7uu_stty22control_char_to_string17hcb31aba3c5c265dbE(undefined8 param_1,byte param_2)

{
  byte bVar1;
  uint local_84;
  char *local_80;
  ulong local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  uint *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    bVar1 = param_2 & 0x7f;
    local_80 = "M-";
    local_68 = 1;
    if (-1 < (char)param_2) {
      local_80 = (char *)0x1;
    }
    local_78 = (ulong)(param_2 >> 6 & 2);
    if (bVar1 < 0x20) {
      bVar1 = bVar1 | 0x40;
      local_70 = "^ = ";
    }
    else if (bVar1 == 0x7f) {
      local_70 = "^ = ";
      bVar1 = 0x3f;
    }
    else {
      local_70 = (char *)0x1;
      local_68 = 0;
    }
    local_84 = (uint)bVar1;
    local_60 = &local_80;
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb65652a1c6501a73E;
    local_50 = &local_70;
    local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb65652a1c6501a73E;
    local_40 = &local_84;
    local_38 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_001eaf50
    ;
    local_30 = &DAT_0011b1e0;
    local_28 = 3;
    local_10 = 0;
    local_20 = &local_60;
    local_18 = 3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h151e00dca817615dE(param_1,&local_30);
    return;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hed2105606e4cf42eE
            (param_1,"<undef>",7);
  return;
}
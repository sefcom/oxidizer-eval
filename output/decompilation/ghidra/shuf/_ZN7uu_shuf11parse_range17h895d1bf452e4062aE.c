undefined8 *
_ZN7uu_shuf11parse_range17h895d1bf452e4062aE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined local_a0;
  undefined **local_98;
  ulong local_90;
  undefined8 **ppuStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 *local_60;
  code *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h8f190cd472d8d64bE(&local_50);
  if (local_50 == 0) {
LAB_001c1cb8:
    local_60 = &local_b8;
    local_a0 = 1;
    local_b8 = 0;
    local_58 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_98 = &PTR_DAT_00237d38;
    local_90 = 1;
    local_78 = 0;
    ppuStack_88 = &local_60;
    local_80 = 1;
    local_b0 = param_2;
    local_a8 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h7c94a57f03ee0317E(param_1 + 1,&local_98);
    uVar2 = 1;
LAB_001c1d08:
    *param_1 = uVar2;
  }
  else {
    local_68 = local_40;
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_b8,local_50,local_48);
    uVar1 = local_b0;
    if ((char)local_b8 == '\0') {
      _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                (&local_b8,local_68,local_38);
      if (((char)local_b8 == '\0') ||
         (_ZN7uu_shuf11parse_range28__u7b__u7b_closure_u7d__u7d_17ha46b1477c8a092d1E
                    (&local_98,local_68,local_38), local_b0 = local_90,
         local_98 == (undefined **)0x8000000000000000)) {
        if ((local_b0 < uVar1) && (uVar1 != local_b0 + 1)) goto LAB_001c1cb8;
        param_1[1] = uVar1;
        param_1[2] = local_b0;
        *(undefined *)(param_1 + 3) = 0;
        uVar2 = 0;
        goto LAB_001c1d08;
      }
    }
    else {
      _ZN7uu_shuf11parse_range28__u7b__u7b_closure_u7d__u7d_17h12498d1826f58d1eE
                (&local_98,local_50,local_48);
    }
    param_1[1] = local_98;
    param_1[2] = local_90;
    param_1[3] = ppuStack_88;
    *param_1 = 1;
  }
  return param_1;
}
undefined8
_ZN5uu_od8prn_char13format_item_c17hbeff54a2c941035dE_llvm_2413193166722088455
          (undefined8 param_1,byte *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined local_a9;
  byte *local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(0,0,&DAT_00243098);
  }
  local_a9 = *param_2;
  if ((char)local_a9 < '\0') {
    if ((local_a9 & 0xc0) == 0x80) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE(param_1);
      return param_1;
    }
    if ((param_3 == 1) || ((local_a9 & 0xe0) != 0xc0)) {
      if ((param_3 < 3) || ((local_a9 & 0xf0) != 0xe0)) {
        if ((param_3 < 4) || ((local_a9 & 0xf8) != 0xf0)) {
          local_30 = (undefined4 **)&local_a9;
          local_28 = 
          _ZN4core3fmt3num49__LT_impl_u20_core__fmt__Octal_u20_for_u20_i8_GT_3fmt17h435338519aeb34aaE
          ;
          local_50 = 3;
          local_40 = 0x800000020;
          local_38 = 3;
          local_98 = &DAT_002430c8;
          goto LAB_001d57dd;
        }
        puVar1 = &DAT_002430f0;
        uVar2 = 4;
      }
      else {
        puVar1 = &DAT_002430d8;
        uVar2 = 3;
      }
    }
    else {
      puVar1 = &DAT_002430b0;
      uVar2 = 2;
    }
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h805a03118b26e41eE
                      (uVar2,param_2,param_3,puVar1);
    _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E(&local_30,uVar2);
    if ((byte **)local_30 == (byte **)0x0) {
      local_18 = (undefined4)local_28;
      uStack_14 = local_28._4_4_;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      local_a8 = (byte *)&local_18;
      local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
      local_50 = 4;
      local_40 = 0x20;
      local_38 = 1;
      local_98 = &DAT_0010dad0;
    }
    else {
      local_a8 = &local_a9;
      local_a0 = 
      _ZN4core3fmt3num49__LT_impl_u20_core__fmt__Octal_u20_for_u20_i8_GT_3fmt17h435338519aeb34aaE;
      local_50 = 3;
      local_40 = 0x800000020;
      local_38 = 3;
      local_98 = &DAT_002430c8;
    }
    local_88 = (undefined8 **)&local_a8;
  }
  else {
    local_a8 = _ZN5uu_od8prn_char7C_CHARS17h05ab81629a83a794E + (ulong)local_a9 * 0x10;
    local_30 = (undefined4 **)&local_a8;
    local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3c73fc09a8c273abE;
    local_50 = 4;
    local_40 = 0x20;
    local_38 = 1;
    local_98 = &DAT_0010dad0;
LAB_001d57dd:
    local_88 = &local_30;
  }
  local_78 = local_68;
  local_48 = 0;
  local_58 = 0;
  local_68[0] = 2;
  local_70 = 1;
  local_90 = 1;
  local_80 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(param_1,&local_98);
  return param_1;
}
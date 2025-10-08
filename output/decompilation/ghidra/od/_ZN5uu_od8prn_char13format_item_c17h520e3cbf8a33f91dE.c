undefined8
_ZN5uu_od8prn_char13format_item_c17h520e3cbf8a33f91dE
          (undefined8 param_1,byte *param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined local_71;
  byte *local_70;
  code *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined4 **local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 == 0) {
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0020a9f0)
              (0,0,&PTR_s_src_uu_od_src_prn_char_rs_00203808);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  local_71 = *param_2;
  if ((long)(char)local_71 < 0) {
    if (local_71 < 0xc0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (param_1,&DAT_0011b178,4);
      return param_1;
    }
    if (param_3 == 1 || (local_71 & 0xe0) != 0xc0) {
      if (param_3 < 3 || (local_71 & 0xf0) != 0xe0) {
        if (param_3 < 4 || (local_71 & 0xf8) != 0xf0) {
          local_30 = (undefined4 **)&local_71;
          local_28 = (code *)
                     PTR__ZN4core3fmt3num49__LT_impl_u20_core__fmt__Octal_u20_for_u20_i8_GT_3fmt17h1c61e1fbdca52982E_0020ace0
          ;
          local_60 = &PTR_s_177_00203838;
          local_40 = &DAT_0011d1f8;
          goto LAB_0016b0c9;
        }
        ppuVar3 = &PTR_s_src_uu_od_src_prn_char_rs_00203860;
        uVar2 = 4;
      }
      else {
        ppuVar3 = &PTR_s_src_uu_od_src_prn_char_rs_00203848;
        uVar2 = 3;
      }
    }
    else {
      ppuVar3 = &PTR_s_src_uu_od_src_prn_char_rs_00203820;
      uVar2 = 2;
    }
    uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h3318d31b00465fccE
                      (0,uVar2,param_2,param_3,ppuVar3);
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_0020a9d0)(&local_30,uVar2);
    if ((int)local_30 == 1) {
      local_70 = &local_71;
      local_68 = (code *)
                 PTR__ZN4core3fmt3num49__LT_impl_u20_core__fmt__Octal_u20_for_u20_i8_GT_3fmt17h1c61e1fbdca52982E_0020ace0
      ;
      local_60 = &PTR_s_177_00203838;
      local_40 = &DAT_0011d1f8;
    }
    else {
      local_18 = (undefined4)local_28;
      uStack_14 = local_28._4_4_;
      uStack_10 = uStack_20;
      uStack_c = uStack_1c;
      local_70 = (byte *)&local_18;
      local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
      local_60 = (undefined **)&DAT_0011a940;
      local_40 = &DAT_0011d150;
    }
    local_50 = (undefined8 **)&local_70;
  }
  else {
    local_70 = _ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E + (long)(char)local_71 * 0x10;
    local_30 = (undefined4 **)&local_70;
    local_28 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h1b019627656d27e4E;
    local_60 = (undefined **)&DAT_0011a940;
    local_40 = &DAT_0011d150;
LAB_0016b0c9:
    local_50 = &local_30;
  }
  local_38 = 1;
  local_58 = 1;
  local_48 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(param_1,&local_60);
  return param_1;
}
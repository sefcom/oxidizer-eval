void _ZN8uu_chgrp18parse_gid_from_str17h3091fc49b902fbfcE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined (*local_78) [16];
  code *pcStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [2] [16];
  
  local_a8 = (undefined **)((ulong)local_a8 & 0xffffffff00000000);
  local_60 = param_2;
  local_58 = param_3;
  uVar1 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_a8);
  local_50[0] = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                          (uVar1,param_2,param_3);
  if (SUB168(local_50[0],0) == 0) {
    (*(code *)
      PTR__ZN101__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h2c7d885aadff2e1bE_001fb938
    )(&local_a8,param_2,param_3);
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h39f002659944e503E
              (local_a8,local_a0);
    *(undefined4 *)(param_1 + 1) = (undefined4)local_90;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u32_C_std__io__error__Error_GT__GT_17h4b0917c8d393a7b1E
              (0,local_a0);
  }
  else {
    uVar2 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E
                      (SUB168(local_50[0],0),SUB168(local_50[0],8));
    if ((uVar2 & 1) == 0) {
      *(int *)(param_1 + 1) = (int)(uVar2 >> 0x20);
      *param_1 = 0x8000000000000000;
    }
    else {
      local_78 = local_50;
      pcStack_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hdb887a7c8cbc9c9fE;
      local_a8 = &PTR_s_invalid_group_id_____001f4838;
      local_a0 = 2;
      local_88 = 0;
      local_98 = (undefined8 **)&local_78;
      local_90 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h10b49b386562c66cE(param_1,&local_a8);
    }
  }
  return;
}
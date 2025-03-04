undefined  [16] _ZN5uu_dd6Source4skip17hb4d238ded1ebd635E(int *param_1,ulong param_2)

{
  undefined **ppuVar1;
  undefined auVar2 [16];
  undefined local_79;
  undefined **local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_38;
  code *local_30;
  undefined local_28 [16];
  
  ppuVar1 = (undefined **)(param_1 + 1);
  if (*param_1 == 0) {
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h561911936e9e2a34E
              (param_2 >> 0x3f,&PTR_DAT_00261048);
    auVar2 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                       (ppuVar1,2,param_2);
  }
  else if (*param_1 == 1) {
    _ZN5uu_dd27try_get_len_of_block_device17hf00af9fe29cc4b56E(&local_78,ppuVar1);
    if (((int)local_78 == 1) && (local_70 < param_2)) {
                    /* try { // try from 001d686c to 001d6909 has its CatchHandler @ 001d6a36 */
      local_28 = _ZN6uucore9util_name17h60d842bf27b05e82E();
      local_38 = (undefined8 *)local_28;
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
      local_68 = (undefined **)&DAT_00261008;
      local_60 = 2;
      uStack_48 = 0;
      local_58 = &local_38;
      local_50 = 1;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_68);
      local_68 = &PTR_DAT_00261028;
      local_60 = 1;
      local_58 = (undefined8 **)0x8;
      local_50 = 0;
      uStack_48 = 0;
      _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_68);
      _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_u64_GT__C_std__io__error__Error_GT__GT_17h7e0cb750979df1d6E
                (&local_78);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70;
      auVar2 = auVar2 << 0x40;
    }
    else {
      _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_u64_GT__C_std__io__error__Error_GT__GT_17h7e0cb750979df1d6E
                (&local_78);
      local_78 = ppuVar1;
      local_70 = param_2;
      auVar2 = _ZN3std2io4copy12generic_copy17h94e6c8f4c841e7c1E(&local_78,&local_79);
      if ((auVar2._0_8_ == 0) && (auVar2._8_8_ < param_2)) {
        local_28 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_38 = (undefined8 *)local_28;
        local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
        local_68 = (undefined **)&DAT_00261008;
        local_60 = 2;
        uStack_48 = 0;
        local_58 = &local_38;
        local_50 = 1;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_68);
        local_68 = &PTR_DAT_00261038;
        local_60 = 1;
        local_58 = (undefined8 **)0x8;
        local_50 = 0;
        uStack_48 = 0;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_68);
      }
    }
  }
  else {
    local_68 = ppuVar1;
    local_60 = param_2;
    auVar2 = _ZN3std2io4copy12generic_copy17h94e6c8f4c841e7c1E(&local_68,&local_79);
  }
  return auVar2;
}
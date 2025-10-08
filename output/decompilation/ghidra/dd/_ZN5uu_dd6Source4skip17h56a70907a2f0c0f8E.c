undefined  [16] _ZN5uu_dd6Source4skip17h56a70907a2f0c0f8E(int *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined auVar3 [16];
  undefined **local_88;
  ulong local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 *local_58;
  code *local_50;
  undefined local_48 [16];
  undefined local_38 [16];
  ulong local_28;
  
  ppuVar2 = (undefined **)(param_1 + 1);
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      _ZN5uu_dd27try_get_len_of_block_device17hb29413a8db7bcc7dE(&local_58,ppuVar2);
      if (((local_58 == (undefined8 *)0x2) || (((ulong)local_58 & 1) == 0)) || (param_2 <= local_50)
         ) {
        _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_u64_GT__C_std__io__error__Error_GT__GT_17hc8d39d0616c700a4E
                  (&local_58);
        local_38._0_8_ = ppuVar2;
        local_38._8_8_ = param_2;
        local_28 = param_2;
        auVar3 = _ZN3std2io4copy12generic_copy17hbe12d708de713511E(local_38);
        if (auVar3._8_8_ < param_2 && (auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          local_48 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00246778)();
          puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780;
          local_58 = (undefined8 *)local_48;
          local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
          local_88 = (undefined **)&DAT_0023dc60;
          local_80 = 2;
          uStack_68 = 0;
          local_70 = 1;
          local_78 = &local_58;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&local_88);
          local_88 = &PTR_DAT_0023dc90;
          local_80 = 1;
          local_78 = (undefined8 **)0x8;
          local_70 = 0;
          uStack_68 = 0;
          (*(code *)puVar1)(&local_88);
        }
      }
      else {
                    /* try { // try from 0018f7ea to 0018f881 has its CatchHandler @ 0018f9b8 */
        local_38 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00246778)();
        local_48._0_8_ = local_38;
        local_48._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he6d1f6ccd2de0d3dE;
        local_88 = (undefined **)&DAT_0023dc60;
        local_80 = 2;
        uStack_68 = 0;
        local_78 = (undefined8 **)local_48;
        local_70 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&local_88);
        local_88 = &PTR_DAT_0023dc80;
        local_80 = 1;
        local_78 = (undefined8 **)0x8;
        local_70 = 0;
        uStack_68 = 0;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&local_88);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_00246ce0)(1);
        _ZN4core3ptr104drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_u64_GT__C_std__io__error__Error_GT__GT_17hc8d39d0616c700a4E
                  (&local_58);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_50;
        auVar3 = auVar3 << 0x40;
      }
    }
    else {
      local_88 = ppuVar2;
      local_80 = param_2;
      local_78 = (undefined8 **)param_2;
      auVar3 = _ZN3std2io4copy12generic_copy17hbe12d708de713511E(&local_88);
    }
    return auVar3;
  }
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hab12e77de6c67244E(param_2 >> 0x3f,&PTR_DAT_0023dca0)
  ;
  auVar3 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_002469d8
           )(ppuVar2,2,param_2);
  return auVar3;
}
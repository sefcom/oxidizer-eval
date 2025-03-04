undefined8
_ZN7uu_join5State10initialize17hba6254d3450d7ee5E(long param_1,undefined8 param_2,char param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_c8;
  undefined local_c0 [16];
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_80;
  code *local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN7uu_join5State9read_line17hbc99b2e048ef8c59E(&local_40,param_1,param_2);
  if (local_40 != -0x8000000000000000) {
    if (local_40 == -0x7fffffffffffffff) {
                    /* try { // try from 001716f8 to 001717af has its CatchHandler @ 001717c3 */
      local_c0 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002393b0)();
      local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7a9acb5b6b087e94E;
      local_b0 = &DAT_00232610;
      local_a8 = 2;
      local_90 = 0;
      local_a0 = &local_80;
      local_98 = 1;
      local_80 = (undefined8 *)local_c0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002393a0)(&local_b0);
      local_c0._8_8_ =
           PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_002393b8
      ;
      local_b0 = &DAT_00232630;
      local_a8 = 2;
      local_90 = 0;
      local_98 = 1;
      local_c0._0_8_ = &local_c8;
      local_a0 = (undefined8 **)local_c0;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002393a0)(&local_b0);
      (*(code *)PTR__ZN3std7process4exit17hf8c1b9d00a2a86fdE_002393c0)(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_70 = local_40;
    local_68 = local_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    local_58 = local_28;
    uStack_54 = uStack_24;
    uStack_50 = uStack_20;
    uStack_4c = uStack_1c;
    local_48 = local_18;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb39c05ee85860ab5E(param_1,&local_70);
    if (param_3 != '\0') {
      if (*(long *)(param_1 + 0x10) != 0) {
        return *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
      }
      uVar2 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_002393c8)
                        (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00232650);
                    /* catch() { ... } // from try @ 001716f8 with catch @ 001717c3 */
                    /* try { // try from 001717ca to 001717ce has its CatchHandler @ 001717d7 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h1217980c7a1dc0f7E(local_c8);
      uVar2 = _Unwind_Resume(uVar2);
      return uVar2;
    }
  }
  return 0;
}
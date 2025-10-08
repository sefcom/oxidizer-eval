void _ZN2rg5flags5parse7FlagMap3new17h57afd0ad02f8204aE
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined local_b0 [16];
  undefined local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  
  auVar6 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17h3cee8e0035d6d40eE();
  _ZN9hashbrown3map24HashMap_LT_K_C_V_C_S_GT_24with_capacity_and_hasher17h9613a7b1f59842a2E
            (&local_90,param_3,auVar6._0_8_,auVar6._8_8_);
  local_c0 = param_2 + param_3 * 0x28;
  local_b8 = 0;
  local_c8 = param_2;
  auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf1da52e6881dbc92E
                     (&local_c8);
  if (auVar6._8_8_ != 0) {
    do {
      lVar4 = auVar6._8_8_;
      if (*(long *)(lVar4 + 0x10) == 0) {
        uVar1 = *(undefined *)(lVar4 + 0x18);
        puVar3 = (undefined *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,1,0);
        if (puVar3 == (undefined *)0x0) {
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00526d20)(1,1);
          goto LAB_0035547a;
        }
        *puVar3 = uVar1;
        local_60 = 1;
        local_50 = 1;
        local_58 = puVar3;
        auVar6 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h285a29dab23554b5E
                           (&local_90,&local_60,auVar6._0_8_);
        if (auVar6._0_8_ == 0) goto LAB_00355360;
        ppuVar5 = &PTR_s_crates_core_flags_parse_rs_004eb628;
        puVar3 = local_a0;
LAB_0035544f:
        local_60 = 0;
        local_a0 = auVar6;
                    /* try { // try from 00355456 to 00355479 has its CatchHandler @ 0035547e */
        (*(code *)PTR__ZN4core9panicking13assert_failed17h2eb0a2f9b5b29742E_00526c38)
                  (0,&DAT_00162620,puVar3,&local_60,ppuVar5);
LAB_0035547a:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
                    /* try { // try from 00355381 to 003553f5 has its CatchHandler @ 0035547c */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
                (&local_60,*(long *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
      auVar7 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h285a29dab23554b5E
                         (&local_90,&local_60,auVar6._0_8_);
      local_b0 = auVar7;
      auVar6 = local_a0;
      if (auVar7._0_8_ != 0) {
        ppuVar5 = &PTR_s_crates_core_flags_parse_rs_004eb610;
        puVar3 = local_b0;
        goto LAB_0035544f;
      }
LAB_00355360:
      local_a0 = auVar6;
      auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf1da52e6881dbc92E
                         (&local_c8);
    } while (auVar6._8_8_ != 0);
  }
  param_1[4] = local_70;
  param_1[5] = uStack_68;
  param_1[2] = local_80;
  param_1[3] = uStack_78;
  *param_1 = local_90;
  param_1[1] = uStack_88;
  return;
}
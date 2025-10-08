undefined8
_ZN6zoxide3cmd4edit69__LT_impl_u20_zoxide__cmd__Run_u20_for_u20_zoxide__cmd__cmd__Edit_GT_3run17hf0d62a77defff36cE
          (long *param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  int local_e8 [2];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  
  auVar2 = _ZN6zoxide4util12current_time17hc177626caa3eacceE();
  uVar1 = auVar2._8_8_;
  if (((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
     (_ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_4open17ha2e4ec58863e42c6E
                (local_e8), uVar1 = local_e0, local_e8[0] != 1)) {
    local_50 = local_a8;
    local_60 = local_b8;
    uStack_5c = uStack_b4;
    uStack_58 = uStack_b0;
    uStack_54 = uStack_ac;
    local_70 = local_c8;
    uStack_6c = uStack_c4;
    uStack_68 = uStack_c0;
    uStack_64 = uStack_bc;
    local_80 = local_d8;
    uStack_7c = uStack_d4;
    uStack_78 = uStack_d0;
    uStack_74 = uStack_cc;
    local_88 = local_e0;
                    /* WARNING: Could not recover jumptable at 0x0018ebf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_001192d4 + *(int *)(&DAT_001192d4 + *param_1 * 4)))();
    return uVar1;
  }
  return uVar1;
}
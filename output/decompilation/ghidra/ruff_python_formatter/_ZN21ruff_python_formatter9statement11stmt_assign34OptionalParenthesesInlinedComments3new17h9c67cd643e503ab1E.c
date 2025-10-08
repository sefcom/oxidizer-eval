void _ZN21ruff_python_formatter9statement11stmt_assign34OptionalParenthesesInlinedComments3new17h9c67cd643e503ab1E
               (undefined8 *param_1,long param_2,undefined **param_3,undefined8 param_4,long param_5
               )

{
  undefined **ppuVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined **local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(param_2 + 8) == 0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    local_98 = (long)ppuVar1 + uVar2 * 0xc;
    local_a0 = ppuVar1;
    cVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h33a3afc225c216c0E
                      (&local_a0);
    if (cVar4 == '\0') {
      local_a0 = param_3;
      local_98 = param_4;
      auVar7 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                         (param_5 + 0x10,&local_a0);
      uVar6 = auVar7._8_8_;
      uVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h24ad1b489d553524E
                        (auVar7._0_8_,uVar6);
      if (uVar6 < uVar5) {
        local_a0 = &PTR_s_mid_>_len_0067adf0;
        local_98 = 1;
        local_90 = 8;
        local_88 = 0;
        uStack_80 = 0;
        (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
                  (&local_a0,&PTR_s_crates_ruff_python_formatter_src_0067ec08);
      }
      else {
        _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
                  (&local_70,auVar7._0_8_,uVar6,uVar5);
        uVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h24ad1b489d553524E
                          (ppuVar1,uVar2);
        if (uVar5 <= uVar2) {
          _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
                    (&local_50,ppuVar1,uVar2,uVar5);
          *param_1 = local_50;
          param_1[1] = uStack_48;
          param_1[2] = local_70;
          param_1[3] = local_68;
          return;
        }
      }
      local_a0 = &PTR_s_mid_>_len_0067adf0;
      local_98 = 1;
      local_90 = 8;
      local_88 = 0;
      uStack_80 = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
                (&local_a0,&PTR_s_crates_ruff_python_formatter_src_0067ec20);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *param_1 = 0;
  return;
}
void _ZN21ruff_python_formatter10expression32format_with_parentheses_comments17h8e448c8362da0824E
               (long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined auVar10 [16];
  undefined8 local_1c0;
  ulong local_1b8;
  long local_1b0;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 **local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  byte local_14c [4];
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined *local_108;
  char *local_100;
  undefined8 local_f8;
  undefined local_f0;
  undefined ***local_90;
  undefined *local_88;
  undefined8 *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_160 = param_2;
  auVar10 = (*(code *)
              PTR__ZN119__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1bad3bd8a1b83c19E_006bdcb0
            )(param_2);
  uVar1 = *param_4;
  pcVar2 = *(code **)(param_4[1] + 0x30);
  local_168 = param_4;
  lVar5 = (*pcVar2)(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x60);
  puVar6 = (undefined4 *)(*pcVar2)(uVar1);
  (*(code *)
    PTR__ZN15ruff_python_ast12parenthesize20parentheses_iterator17h98a7a5fd1647c2ffE_006bdea0)
            (&local_130,auVar10._0_8_,auVar10._8_8_,0x5e,param_5,uVar3,*puVar6,puVar6[2]);
  local_1a0 = (ulong)local_1a0._4_4_ << 0x20;
  _ZN99__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__SpecFold_GT_9spec_fold17h7b11a22302d0e2e9E
            (local_14c,&local_130,&local_1a0);
  if ((local_14c[0] & 1) == 0) {
    uVar8 = param_3[5];
    local_1b0 = *param_3;
    local_1b8 = param_3[1];
    uVar7 = 0;
    uVar9 = uVar8;
  }
  else {
    local_130 = local_148;
    local_1b0 = *param_3;
    local_1b8 = param_3[1];
    uVar7 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h53f9336f7750b3beE
                      (local_1b0,local_1b8,&local_130);
    uVar9 = param_3[5];
    uVar8 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h280149b139eb1595E
                      (param_3[4],uVar9,&local_130);
    if (local_1b8 < uVar7) {
      local_130 = &PTR_s_mid_>_len_0067adf0;
      local_128 = 1;
      local_120 = 8;
      local_118 = 0;
      puStack_110 = (undefined8 *)0x0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
                (&local_130,&PTR_s_crates_ruff_python_formatter_src_0067dea0);
      goto LAB_0040f5a0;
    }
  }
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
            (&local_70,local_1b0,local_1b8,uVar7);
  if (uVar8 <= uVar9) {
    local_170 = local_68;
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
              (&local_50,param_3[4],uVar9,uVar8);
    puVar4 = local_168;
    if ((local_58 == 0) || (*(char *)(local_60 + 9) != '\0')) {
      local_1c0 = 0;
      lVar5 = 4;
    }
    else {
      local_1b8 = local_58 - 1;
      local_1b0 = local_60 + 0xc;
      local_1c0 = 1;
      lVar5 = local_60;
    }
    local_178 = local_38;
    local_158 = &local_160;
    local_128 = local_70;
    local_120 = local_170;
    local_130 = (undefined **)0x1;
    (*(code *)
      PTR__ZN160__LT_ruff_python_formatter__comments__format__FormatLeadingComments_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hc2058df1af78fa4dE_006bd6e0
    )(&local_1a0,&local_130,local_168);
    if ((int)local_1a0 == 4) {
      local_1a0 = local_1b0;
      uStack_198 = local_1b8;
      local_190 = &local_158;
      local_188 = local_50;
      local_180 = local_48;
      local_130 = (undefined **)0x18ac15;
      local_128 = 1;
      local_118 = local_1c0;
      local_f0 = 0;
      local_108 = &DAT_0067ded0;
      local_100 = ")";
      local_f8 = 1;
      local_140 = local_40;
      local_138 = local_178;
      local_90 = &local_130;
      local_88 = &DAT_0067d978;
      local_80 = &local_140;
      local_78 = &DAT_0067d5a8;
      local_120 = lVar5;
      puStack_110 = &local_1a0;
      _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
                (param_1,puVar4,&local_90,2);
    }
    else {
      param_1[2] = (long)local_190;
      *param_1 = local_1a0;
      param_1[1] = uStack_198;
    }
    return;
  }
LAB_0040f5a0:
  local_130 = &PTR_s_mid_>_len_0067adf0;
  local_128 = 1;
  local_120 = 8;
  local_118 = 0;
  puStack_110 = (undefined8 *)0x0;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
            (&local_130,&PTR_s_crates_ruff_python_formatter_src_0067deb8);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
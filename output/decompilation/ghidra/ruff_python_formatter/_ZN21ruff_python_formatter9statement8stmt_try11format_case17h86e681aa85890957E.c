void _ZN21ruff_python_formatter9statement8stmt_try11format_case17h86e681aa85890957E
               (undefined8 *param_1,long param_2,byte param_3,long param_4,undefined8 param_5,
               ulong param_6,undefined param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  long lVar5;
  undefined **local_148;
  long local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined auStack_128 [16];
  undefined **local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  ulong local_e8;
  long local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined *local_a8;
  long *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar5 = param_2;
  if (param_3 == 0) {
LAB_0041fcd7:
    lVar1 = *(long *)(lVar5 + 0x10);
  }
  else {
    if (param_3 == 1) {
      lVar5 = param_2 + 0x30;
      goto LAB_0041fcd7;
    }
    lVar5 = param_2 + 0x48;
    lVar1 = *(long *)(param_2 + 0x58);
  }
  local_e0 = param_4;
  local_f8 = param_1;
  if (lVar1 != 0) {
    local_e0 = *(long *)(lVar5 + 8) + lVar1 * 0x80 + -0x80;
    uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h49c74675994d1cd0E
                      (param_5,param_6);
    if (param_6 < uVar3) {
      local_148 = &PTR_s_mid_>_len_0067adf0;
      local_140 = 1;
      local_138 = 8;
      local_130 = 0;
      auStack_128._0_8_ = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
                (&local_148,&PTR_s_crates_ruff_python_formatter_src_0067ef78);
LAB_0041ff87:
      local_148 = &PTR_s_mid_>_len_0067adf0;
      local_140 = 1;
      local_138 = 8;
      local_130 = 0;
      auStack_128._0_8_ = 0;
      (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_006bd350)
                (&local_148,&PTR_s_crates_ruff_python_formatter_src_0067ef90);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
              (&local_70,param_5,param_6,uVar3);
    local_f0 = local_60;
    local_e8 = local_58;
    uVar3 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15partition_point17h454e79186506d216E
                      (local_70,local_68);
    if (local_68 < uVar3) goto LAB_0041ff87;
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h24a88d3a0c186412E
              (&local_50,local_70,local_68,uVar3);
    local_d8 = &DAT_0018d610 + *(int *)(&DAT_0018d610 + (ulong)param_3 * 4);
    local_148 = *(undefined ***)(&DAT_0018d620 + (ulong)param_3 * 8);
    local_d0 = *(undefined8 *)(&DAT_0018d638 + (ulong)param_3 * 8);
    if (param_4 == 0) {
      auStack_128._8_8_ = extraout_RDX;
      auStack_128._0_8_ = 0x5e;
    }
    else {
      auStack_128 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                              ();
    }
    local_138 = local_50;
    local_130 = local_48;
    local_118 = &local_d8;
    local_110 = &DAT_0067c890;
    local_108 = local_40;
    local_100 = local_38;
    local_78 = param_7;
    local_88 = local_40;
    local_80 = local_38;
    local_b0 = &local_148;
    local_a8 = &DAT_0067e140;
    local_a0 = &local_90;
    local_98 = &DAT_0067e160;
    local_140 = param_2;
    local_90 = lVar5;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_c8,param_8,&local_b0,2);
    param_5 = local_f0;
    param_6 = local_e8;
    if (local_c8 != 4) {
      local_f8[3] = local_b8;
      local_f8[1] = CONCAT44(uStack_c4,local_c8);
      local_f8[2] = uStack_c0;
      uVar4 = 1;
      goto LAB_0041ff3a;
    }
  }
  local_f8[1] = local_e0;
  local_f8[2] = param_5;
  local_f8[3] = param_6;
  uVar4 = 0;
LAB_0041ff3a:
  *local_f8 = uVar4;
  return;
}
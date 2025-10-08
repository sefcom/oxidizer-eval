void _ZN21ruff_python_formatter8verbatim57write_suppressed_statements_starting_with_leading_comment17h9aeed0f941d87403E
               (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_110;
  undefined local_108 [12];
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_a0;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar1 = *param_4;
  pcVar2 = *(code **)(param_4[1] + 0x30);
  local_d0 = param_3;
  lVar4 = (*pcVar2)(uVar1);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar4 + 0x10));
  lVar4 = *(long *)(lVar4 + 0x10);
  local_110 = lVar4;
                    /* try { // try from 0042a2e4 to 0042a478 has its CatchHandler @ 0042a47b */
  puVar5 = (undefined8 *)(*pcVar2)(uVar1);
  uVar1 = *puVar5;
  uVar3 = puVar5[1];
  _local_108 = (*(code *)
                 PTR__ZN21ruff_python_formatter9statement5suite156__LT_impl_u20_core__convert__From_LT_ruff_python_formatter__statement__suite__SuiteChildStatement_GT__u20_for_u20_ruff_python_ast__generated__AnyNodeRef_GT_4from17h1533b44ca56a2d08E_006bd648
               )(param_2);
  local_c0 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                       (lVar4 + 0x10,local_108);
  local_a0 = 0;
  local_b0 = uVar1;
  local_a8 = uVar3;
  (*(code *)
    PTR__ZN108__LT_ruff_python_formatter__verbatim__CommentRangeIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfeeb9aad30484eb3E_006bd620
  )(local_108,local_c0);
  if (local_108._0_4_ != 4) {
    local_38 = local_d8;
    local_48 = local_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
    local_58 = (undefined4)local_f8;
    uStack_54 = local_f8._4_4_;
    uStack_50 = (undefined4)uStack_f0;
    uStack_4c = uStack_f0._4_4_;
    local_68 = local_108._0_4_;
    uStack_64 = local_108._4_4_;
    uStack_60 = local_108._8_4_;
    uStack_5c = uStack_fc;
    _ZN21ruff_python_formatter8verbatim19SuppressionComments25unwrap_suppression_starts17heb5db1db35eb0c7eE
              (local_108,&local_68);
    lVar4 = (long)local_f8;
    local_78 = local_108._0_4_;
    uStack_74 = local_108._4_4_;
    uStack_70 = local_108._8_4_;
    uStack_6c = uStack_fc;
    local_80 = 1;
    local_c8 = (long)local_f8;
    local_108._0_8_ = &local_80;
    stack0xffffffffffffff00 = &DAT_0067cb70;
    local_f8 = &local_c8;
    uStack_f0 = &DAT_0067cb30;
    _ZN102__LT_ruff_formatter__formatter__Formatter_LT_Context_GT__u20_as_u20_ruff_formatter__buffer__Buffer_GT_9write_fmt17h7287e9dfefd137eaE
              (&local_98,param_4,local_108,2);
    if (local_98 == 4) {
      *(undefined *)(lVar4 + 8) = 1;
      _ZN21ruff_python_formatter8verbatim27write_suppressed_statements17h25ad3449fcbf65feE
                (param_1,lVar4,param_2,local_c0._0_8_,local_c0._8_8_,local_d0,param_4);
    }
    else {
      *(undefined8 *)(param_1 + 4) = local_88;
      *param_1 = local_98;
      param_1[1] = iStack_94;
      param_1[2] = iStack_90;
      param_1[3] = iStack_8c;
    }
    _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
              (&local_110);
    return;
  }
  (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
            ("Suppressed node to have leading comments",0x28,
             &PTR_s_crates_ruff_python_formatter_src_0067f870);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
void _ZN21ruff_python_formatter8verbatim58write_suppressed_statements_starting_with_trailing_comment17h5ee38bfc68f3f55eE
               (int *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined local_168 [16];
  int local_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long *local_e8;
  long local_e0;
  long local_d8;
  long local_d0 [5];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined local_88;
  undefined7 uStack_87;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar2 = *param_4;
  pcVar3 = *(code **)(param_4[1] + 0x30);
  local_e8 = param_3;
  lVar8 = (*pcVar3)(uVar2);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar8 + 0x10));
  lVar8 = *(long *)(lVar8 + 0x10);
  local_d0[0] = lVar8;
                    /* try { // try from 0042a4dc to 0042a63b has its CatchHandler @ 0042a9ba */
  puVar9 = (undefined8 *)(*pcVar3)(uVar2);
  uVar2 = *puVar9;
  uVar4 = puVar9[1];
  uVar5 = *param_2;
  uVar7 = _ZN21ruff_python_formatter8verbatim11Indentation9from_stmt17hc466a24ed7083ab9E
                    (uVar5,uVar2,uVar4);
  local_168 = (*(code *)
                PTR__ZN21ruff_python_formatter9statement5suite156__LT_impl_u20_core__convert__From_LT_ruff_python_formatter__statement__suite__SuiteChildStatement_GT__u20_for_u20_ruff_python_ast__generated__AnyNodeRef_GT_4from17h1533b44ca56a2d08E_006bd648
              )(param_2);
  lVar8 = lVar8 + 0x10;
  auVar11 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                      (lVar8,local_168);
  local_e0 = auVar11._8_8_;
  local_d8 = auVar11._0_8_;
  local_88 = 0;
  local_a8 = local_d8;
  uStack_a0 = local_e0;
  local_98 = uVar2;
  uStack_90 = uVar4;
  (*(code *)
    PTR__ZN108__LT_ruff_python_formatter__verbatim__CommentRangeIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfeeb9aad30484eb3E_006bd620
  )(local_168,&local_a8);
  local_128 = local_168._0_8_;
  if (local_168._0_4_ == 4) {
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("Suppressed statement to have trailing comments",0x2e,
               &PTR_s_crates_ruff_python_formatter_src_0067f888);
LAB_0042a9a1:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_f8 = local_138;
  local_108 = local_148;
  uStack_104 = uStack_144;
  uStack_100 = uStack_140;
  uStack_fc = uStack_13c;
  local_118 = local_158;
  iStack_114 = iStack_154;
  uStack_110 = uStack_150;
  uStack_10c = uStack_14c;
  uStack_120 = local_168._8_4_;
  uStack_11c = local_168._12_4_;
  _ZN21ruff_python_formatter8verbatim19SuppressionComments25unwrap_suppression_starts17heb5db1db35eb0c7eE
            (local_168,&local_128);
  lVar6 = CONCAT44(iStack_154,local_158);
  if (uStack_a0 != 0) {
    lVar10 = 0;
    do {
      *(undefined *)(local_a8 + 8 + lVar10) = 1;
      lVar10 = lVar10 + 0xc;
    } while (uStack_a0 * 0xc != lVar10);
  }
  *(undefined *)(lVar6 + 8) = 1;
  (*(code *)
    PTR__ZN158__LT_ruff_python_formatter__statement__suite__SuiteChildStatement_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17h8e2aba7b59e95cc5E_006be0f8
  )(local_168,param_2,param_4);
  if (local_168._0_4_ == 4) {
    *(undefined *)(lVar6 + 8) = 0;
    local_128 = lVar6;
    (*(code *)
      PTR__ZN155__LT_ruff_python_formatter__verbatim__TrailingFormatOffComment_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17h5ad2b4c313f266aeE_006be190
    )(local_168,&local_128,param_4);
    if (local_168._0_4_ == 4) {
      local_38 = CONCAT71(uStack_87,local_88);
      local_48 = (undefined4)local_98;
      uStack_44 = local_98._4_4_;
      uStack_40 = (undefined4)uStack_90;
      uStack_3c = uStack_90._4_4_;
      local_58 = (undefined4)local_a8;
      uStack_54 = local_a8._4_4_;
      uStack_50 = (undefined4)uStack_a0;
      uStack_4c = uStack_a0._4_4_;
                    /* try { // try from 0042a690 to 0042a7e3 has its CatchHandler @ 0042a9b8 */
      local_130 = uVar5;
      (*(code *)
        PTR__ZN108__LT_ruff_python_formatter__verbatim__CommentRangeIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfeeb9aad30484eb3E_006bd620
      )(local_168,&local_58);
      uVar2 = local_130;
      if (local_168._0_8_ != 4) {
                    /* WARNING: Could not recover jumptable at 0x0042a6ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00187bbc + *(int *)(&DAT_00187bbc + local_168._0_8_ * 4)))();
        return;
      }
      lVar10 = *local_e8;
      if (lVar10 != local_e8[1]) {
        *local_e8 = lVar10 + 0x80;
        uStack_120 = CONCAT31(uStack_120._1_3_,5);
        local_128 = lVar10;
        auVar11 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                            ();
                    /* try { // try from 0042a831 to 0042a9a0 has its CatchHandler @ 0042a9ba */
        local_168 = auVar11;
        auVar11 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                            (lVar8,local_168);
        _ZN21ruff_python_formatter8verbatim27write_suppressed_statements17h25ad3449fcbf65feE
                  (param_1,lVar6,&local_128,auVar11._0_8_,auVar11._8_8_,local_e8,param_4);
        goto LAB_0042a939;
      }
      lVar8 = local_d8 + local_e0 * 0xc;
      if (lVar8 == 0xc || local_e0 == 0) {
        *(undefined8 *)(param_1 + 2) = local_130;
      }
      else {
        uVar1 = *(uint *)(lVar8 + -8);
        if (uVar1 < *(uint *)(lVar6 + 4)) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,
                     &PTR_s_crates_ruff_python_formatter_src_0067f8a0);
          goto LAB_0042a9a1;
        }
        local_128 = CONCAT44(uVar1,*(uint *)(lVar6 + 4));
        uStack_120 = uVar7;
        (*(code *)
          PTR__ZN159__LT_ruff_python_formatter__verbatim__FormatVerbatimStatementRange_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hedec0059cabf53e0E_006be198
        )(local_168,&local_128,param_4);
        if (local_168._0_4_ != 4) goto LAB_0042a922;
        *(undefined8 *)(param_1 + 2) = uVar2;
      }
      *param_1 = 4;
      goto LAB_0042a939;
    }
  }
LAB_0042a922:
  param_1[5] = iStack_154;
  param_1[1] = local_168._4_4_;
  param_1[2] = local_168._8_4_;
  param_1[3] = local_168._12_4_;
  param_1[4] = local_158;
  *param_1 = local_168._0_4_;
LAB_0042a939:
  _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
            (local_d0);
  return;
}
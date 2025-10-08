void _ZN21ruff_python_formatter8verbatim27write_suppressed_statements17h25ad3449fcbf65feE
               (int *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               long *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong extraout_RDX;
  undefined auVar10 [16];
  long local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  undefined local_168 [4] [16];
  undefined local_120 [16];
  int iStack_110;
  int iStack_10c;
  long local_c8;
  long *local_c0;
  long local_b8;
  undefined local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar2 = *param_7;
  pcVar3 = *(code **)(param_7[1] + 0x30);
  local_70 = param_4;
  local_68 = param_5;
  lVar8 = (*pcVar3)(uVar2);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h8686aaaa10b78ebbE(*(undefined8 *)(lVar8 + 0x10));
  lVar8 = *(long *)(lVar8 + 0x10);
  local_b8 = lVar8;
                    /* try { // try from 0042aa40 to 0042aa68 has its CatchHandler @ 0042b277 */
  puVar9 = (undefined8 *)(*pcVar3)(uVar2);
  local_170 = *puVar9;
  uVar2 = puVar9[1];
  local_198 = *param_3;
  uStack_190 = *(undefined4 *)(param_3 + 1);
  uStack_18c = *(undefined4 *)((long)param_3 + 0xc);
  uVar6 = _ZN21ruff_python_formatter8verbatim11Indentation9from_stmt17hc466a24ed7083ab9E
                    (*param_3,local_170,uVar2);
  auVar10._8_8_ = local_68;
  auVar10._0_8_ = local_70;
  local_178 = lVar8 + 0x10;
  local_180 = uVar2;
  local_c8 = *param_6;
  local_c0 = param_6;
  while( true ) {
    local_a0 = local_170;
    local_90 = 1;
    local_98 = local_180;
    local_b0 = auVar10;
                    /* try { // try from 0042aaf0 to 0042ac65 has its CatchHandler @ 0042b275 */
    (*(code *)
      PTR__ZN108__LT_ruff_python_formatter__verbatim__CommentRangeIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfeeb9aad30484eb3E_006bd620
    )(local_120,local_b0);
    if (local_120._0_8_ != 4) {
                    /* WARNING: Could not recover jumptable at 0x0042ab2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00187bcc + *(int *)(&DAT_00187bcc + local_120._0_8_ * 4)))();
      return;
    }
    auVar10 = (*(code *)
                PTR__ZN21ruff_python_formatter9statement5suite156__LT_impl_u20_core__convert__From_LT_ruff_python_formatter__statement__suite__SuiteChildStatement_GT__u20_for_u20_ruff_python_ast__generated__AnyNodeRef_GT_4from17h1533b44ca56a2d08E_006bd648
              )(&local_198);
    local_120 = auVar10;
                    /* try { // try from 0042acdb to 0042ace7 has its CatchHandler @ 0042b271 */
    auVar10 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                        (local_178,local_120);
    local_a0 = local_170;
    local_98 = local_180;
    local_90 = 1;
                    /* try { // try from 0042ad20 to 0042aeb6 has its CatchHandler @ 0042b273 */
    local_b0 = auVar10;
    (*(code *)
      PTR__ZN108__LT_ruff_python_formatter__verbatim__CommentRangeIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hfeeb9aad30484eb3E_006bd620
    )(local_168,local_b0);
    lVar8 = local_198;
    if (local_168[0]._0_8_ != 4) {
                    /* WARNING: Could not recover jumptable at 0x0042ad5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00187bdc + *(int *)(&DAT_00187bdc + local_168[0]._0_8_ * 4)))();
      return;
    }
    if (local_c8 == local_c0[1]) break;
    lVar8 = local_c8 + 0x80;
    *local_c0 = lVar8;
    local_198 = local_c8;
    uStack_190 = CONCAT31(uStack_190._1_3_,5);
    auVar10 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                        ();
    local_120 = auVar10;
                    /* try { // try from 0042af5e to 0042af6a has its CatchHandler @ 0042b271 */
    auVar10 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_7leading17hb31877b14c47a989E
                        (local_178,local_120);
    local_c8 = lVar8;
  }
  auVar10 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                      (local_198);
  lVar5 = local_178;
  puVar4 = 
  PTR__ZN15ruff_python_ast4node56__LT_impl_u20_ruff_python_ast__generated__AnyNodeRef_GT_18last_child_in_body17h106de3f3c845d12eE_006bd958
  ;
  do {
    local_168[0] = auVar10;
    local_120 = auVar10;
                    /* try { // try from 0042b0d5 to 0042b0fd has its CatchHandler @ 0042b26f */
    auVar10 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                        (lVar5,local_120);
    lVar1 = auVar10._0_8_ + auVar10._8_8_ * 0xc;
    if (lVar1 != 0xc && auVar10._8_8_ != 0) {
      uVar7 = *(uint *)(lVar1 + -8);
      auVar10 = local_b0;
      goto LAB_0042b182;
    }
    auVar10 = (*(code *)puVar4)(local_168);
  } while (auVar10._0_8_ != 0x5e);
                    /* try { // try from 0042b151 to 0042b254 has its CatchHandler @ 0042b277 */
  _ZN21ruff_python_formatter9statement18trailing_semicolon17h3caa94f8332101f0E
            (local_120,local_168[0]._0_8_,local_168[0]._8_8_,local_170,local_180);
  (*(code *)
    PTR__ZN111__LT_ruff_python_formatter__statement__suite__SuiteChildStatement_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h8612c18e9704ac05E_006be118
  )(&local_198);
  uVar7 = _ZN4core6option15Option_LT_T_GT_6map_or17h64e018d7ba021b4cE
                    (local_120,extraout_RDX & 0xffffffff);
  auVar10 = local_b0;
LAB_0042b182:
  if (uVar7 < *(uint *)(param_2 + 4)) {
    local_b0 = auVar10;
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067f908);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_b0._4_4_ = uVar7;
  local_b0._0_4_ = *(uint *)(param_2 + 4);
  local_b0._12_4_ = auVar10._12_4_;
  local_b0._8_4_ = uVar6;
  (*(code *)
    PTR__ZN159__LT_ruff_python_formatter__verbatim__FormatVerbatimStatementRange_u20_as_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__GT_3fmt17hedec0059cabf53e0E_006be198
  )(local_120,local_b0,param_7);
  if (local_120._0_4_ == 4) {
    *(long *)(param_1 + 2) = lVar8;
  }
  else {
    param_1[5] = iStack_10c;
    param_1[1] = local_120._4_4_;
    param_1[2] = local_120._8_4_;
    param_1[3] = local_120._12_4_;
    param_1[4] = iStack_110;
  }
  *param_1 = local_120._0_4_;
  _ZN4core3ptr62drop_in_place_LT_ruff_python_formatter__comments__Comments_GT_17he9abffb240eba4a8E
            (&local_b8);
  return;
}
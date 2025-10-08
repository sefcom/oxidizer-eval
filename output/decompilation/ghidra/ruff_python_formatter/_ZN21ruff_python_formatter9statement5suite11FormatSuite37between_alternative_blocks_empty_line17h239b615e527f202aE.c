void _ZN21ruff_python_formatter9statement5suite11FormatSuite37between_alternative_blocks_empty_line17h239b615e527f202aE
               (undefined4 *param_1,byte param_2,long param_3,long param_4,long *param_5,
               undefined8 param_6,long param_7)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined local_50 [16];
  undefined local_38 [16];
  
  if ((1 < param_2) || ((param_2 & 1) != 0)) {
    *param_1 = 4;
    return;
  }
  lVar4 = param_3 + -0x80 + param_4 * 0x80;
  if (param_4 == 0) {
    lVar4 = 0;
  }
  auVar6 = _ZN21ruff_python_formatter9statement5suite30trailing_function_or_class_def17h092984c02e8033d6E
                     (lVar4,param_5);
  local_38._8_8_ = auVar6._8_8_;
  if (auVar6._0_8_ == 0x5e) goto LAB_004218c9;
  if (lVar4 == 0) {
    local_50._0_8_ = 0x5e;
  }
  else {
    local_38 = auVar6;
    auVar7 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                       (lVar4);
    auVar6._8_8_ = auVar7._8_8_;
    auVar6._0_8_ = local_38._0_8_;
    local_50._0_8_ = auVar7._0_8_;
  }
  local_50._8_8_ = auVar6._8_8_;
  local_38._0_8_ = auVar6._0_8_;
  auVar6 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hf60f71f95bfbd5b9E(local_50,param_5);
  if (auVar6._0_8_ == 0x5e) {
LAB_00421865:
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(local_38);
    uVar5 = extraout_EDX;
  }
  else {
    local_50 = auVar6;
    auVar6 = _ZN21ruff_python_formatter8comments3map21MultiMap_LT_K_C_V_GT_8trailing17hdc749e0acdbc0869E
                       (*param_5 + 0x10,local_50);
    if (auVar6._8_8_ == 0) goto LAB_00421865;
    uVar5 = *(undefined4 *)(auVar6._0_8_ + -8 + auVar6._8_8_ * 0xc);
    (*(code *)
      PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
    )(local_38);
  }
  pcVar1 = *(code **)(param_7 + 0x30);
  puVar3 = (undefined8 *)(*pcVar1)(param_6);
  uVar2 = (*(code *)
            PTR__ZN18ruff_python_trivia9tokenizer39lines_after_ignoring_end_of_line_trivia17h8509e8935b592fafE_006be058
          )(uVar5,*puVar3,puVar3[1]);
  if (1 < uVar2) goto LAB_004218c9;
  lVar4 = (*pcVar1)(param_6);
  if (*(char *)(lVar4 + 0x3a) != '\x01') {
    if (local_38._0_4_ != 3) goto LAB_004218c9;
    lVar4 = _ZN14ruff_formatter9formatter24Formatter_LT_Context_GT_7options17he55f9fce45a2dc4aE
                      (param_6,param_7);
    if (*(char *)(lVar4 + 7) != '\x01') goto LAB_004218c9;
  }
  local_50._0_2_ = 0x301;
  (**(code **)(param_7 + 0x18))(param_6,local_50);
LAB_004218c9:
  *param_1 = 4;
  return;
}
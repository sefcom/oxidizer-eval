void _ZN21ruff_python_formatter9statement5suite21stub_file_empty_lines17haf594069f87eb5c4E
               (undefined4 *param_1,char param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 extraout_EDX;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined2 local_68 [12];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  pcVar1 = *(code **)(param_8 + 0x30);
  local_38 = param_1;
  puVar5 = (undefined8 *)(*pcVar1)(param_7);
  local_48 = *puVar5;
  local_50 = puVar5[1];
  bVar2 = 1;
  if (param_5 == 0 && param_6 == 0) {
    bVar2 = _ZN21ruff_python_formatter9statement5suite30stub_suite_can_omit_empty_line17h43e547e2359e7308E
                      (param_3,param_4,param_7,param_8);
    bVar2 = bVar2 ^ 1;
  }
  local_40 = param_3;
  auVar7 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                     (param_3);
  auVar8 = _ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Stmt_GT__GT_4from17h095e0f7c3429d85dE
                     (param_4);
  uVar6 = (*pcVar1)(param_7);
  cVar3 = _ZN21ruff_python_formatter9statement5suite49should_insert_blank_line_after_class_in_stub_file17h5a93a285ad0ff8fdE
                    (auVar7._0_8_,auVar7._8_8_,auVar8._0_8_,auVar8._8_8_,uVar6);
  if (param_2 == '\x02') {
    if (bVar2 == 0 && cVar3 == '\0') {
      local_68[0] = 0x201;
    }
    else {
      local_68[0] = 0x301;
    }
    goto LAB_00421a99;
  }
  if (bVar2 == 0) {
    if (cVar3 == '\0') goto LAB_00421a52;
  }
  else {
    _ZN83__LT_ruff_python_ast__generated__Stmt_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h6da43eeee2e8d007E
              (local_40);
    uVar4 = (*(code *)
              PTR__ZN18ruff_python_trivia9tokenizer39lines_after_ignoring_end_of_line_trivia17h8509e8935b592fafE_006be058
            )(extraout_EDX,local_48,local_50);
    if (cVar3 == '\0' && uVar4 < 2) {
LAB_00421a52:
      local_68[0] = 0x201;
      goto LAB_00421a99;
    }
  }
  local_68[0] = 0x301;
LAB_00421a99:
  (**(code **)(param_8 + 0x18))(param_7,local_68);
  *local_38 = 4;
  return;
}
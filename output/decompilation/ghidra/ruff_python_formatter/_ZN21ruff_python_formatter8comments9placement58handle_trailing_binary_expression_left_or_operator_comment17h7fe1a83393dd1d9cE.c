void _ZN21ruff_python_formatter8comments9placement58handle_trailing_binary_expression_left_or_operator_comment17h7fe1a83393dd1d9cE
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined auVar15 [16];
  uint local_78 [2];
  char local_70;
  undefined local_68 [48];
  undefined local_38 [8];
  
  puVar11 = 
  PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  ;
  if ((*(int *)(param_2 + 2) == 0x5e) || (param_2[4] == 0x5e)) goto LAB_004028dc;
  (*(code *)
    PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  )(*param_3);
  uVar13 = (*(code *)puVar11)(param_3[1]);
  if (uVar13 < (uint)extraout_RDX) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d198);
LAB_0040292f:
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_006bd3c8)
              ("Expected a token for the operator",0x21,&PTR_DAT_0067d1b0);
  }
  else {
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_68,param_4,param_5,extraout_RDX & 0xffffffff,uVar13);
    local_38[0] = 0;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h574e0d0b6077c929E(local_78,local_68,local_38);
    if (local_70 == 'Z') goto LAB_0040292f;
    uVar13 = *(uint *)((long)param_2 + 0x44);
    if (uVar13 < local_78[0]) {
      uVar1 = *(undefined *)(param_2 + 9);
      uVar2 = *(undefined4 *)(param_2 + 8);
      auVar15 = (*(code *)
                  PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                )(*param_3);
      *(undefined (*) [16])(param_1 + 1) = auVar15;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(uint *)((long)param_1 + 0x1c) = uVar13;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x5f;
      return;
    }
    if (*(char *)(param_2 + 9) != '\0') goto LAB_004028dc;
    (*(code *)
      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
    )(*param_3);
    if ((uint)extraout_RDX_00 <= local_78[0]) {
      cVar12 = (*(code *)
                 PTR__ZN65__LT_str_u20_as_u20_ruff_source_file__line_ranges__LineRanges_GT_19contains_line_break17hf0570f0be9a9b684E_006bdc68
               )(param_4,param_5,extraout_RDX_00,local_78[0]);
      if (cVar12 == '\0') {
LAB_004028dc:
        uVar4 = param_2[9];
        param_1[8] = param_2[8];
        param_1[9] = uVar4;
        uVar4 = *param_2;
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        uVar7 = param_2[3];
        uVar8 = param_2[4];
        uVar9 = param_2[5];
        uVar10 = param_2[7];
        param_1[6] = param_2[6];
        param_1[7] = uVar10;
        param_1[4] = uVar8;
        param_1[5] = uVar9;
        param_1[2] = uVar6;
        param_1[3] = uVar7;
        *param_1 = uVar4;
        param_1[1] = uVar5;
        return;
      }
      uVar14 = (*(code *)
                 PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
               )(param_3[1]);
      if (local_78[0] <= uVar14) {
        cVar12 = (*(code *)
                   PTR__ZN65__LT_str_u20_as_u20_ruff_source_file__line_ranges__LineRanges_GT_19contains_line_break17hf0570f0be9a9b684E_006bdc68
                 )(param_4,param_5,local_78[0],uVar14);
        if (cVar12 != '\0') {
          uVar2 = *(undefined4 *)(param_2 + 8);
          param_1[1] = 0x1d;
          param_1[2] = param_3;
          *(undefined4 *)(param_1 + 3) = uVar2;
          *(uint *)((long)param_1 + 0x1c) = uVar13;
          *(undefined2 *)(param_1 + 4) = 0;
          *param_1 = 0x60;
          return;
        }
        goto LAB_004028dc;
      }
      goto LAB_00402961;
    }
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d1c8);
LAB_00402961:
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d1e0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}
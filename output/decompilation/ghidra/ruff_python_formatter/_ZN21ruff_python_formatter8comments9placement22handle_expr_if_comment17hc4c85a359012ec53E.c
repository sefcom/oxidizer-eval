void _ZN21ruff_python_formatter8comments9placement22handle_expr_if_comment17hc4c85a359012ec53E
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar12;
  uint local_48 [3];
  uint local_3c [3];
  
  puVar9 = 
  PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  ;
  if (*(char *)(param_2 + 9) == '\x01') goto LAB_00403701;
  (*(code *)
    PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  )(param_3[1]);
  uVar10 = (*(code *)puVar9)(*param_3);
  if (uVar10 < (uint)extraout_RDX) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d2d0);
    goto LAB_00403754;
  }
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80)
            (local_48,extraout_RDX & 0xffffffff,uVar10,0x45,param_4,param_5);
  uVar10 = *(uint *)(param_2 + 8);
  if (local_48[0] < uVar10) {
    uVar11 = (*(code *)
               PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
             )(*param_3);
    if (uVar11 <= uVar10) goto LAB_00403684;
    uVar12 = *param_3;
LAB_004036d9:
    uVar1 = *(undefined4 *)((long)param_2 + 0x44);
    uVar12 = (*(code *)
               PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
             )(uVar12);
    param_1[1] = uVar12;
    param_1[2] = extraout_RDX_01;
    *(uint *)(param_1 + 3) = uVar10;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar1;
    *(undefined2 *)(param_1 + 4) = 0;
    *param_1 = 0x5e;
  }
  else {
LAB_00403684:
    puVar9 = 
    PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
    ;
    (*(code *)
      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
    )(*param_3);
    uVar11 = (*(code *)puVar9)(param_3[2]);
    if (uVar11 < (uint)extraout_RDX_00) {
LAB_00403754:
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d2e8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80)
              (local_3c,extraout_RDX_00 & 0xffffffff,uVar11,0x3f,param_4,param_5);
    if (local_3c[0] < uVar10) {
      uVar11 = (*(code *)
                 PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
               )(param_3[2]);
      if (uVar10 < uVar11) {
        uVar12 = param_3[2];
        goto LAB_004036d9;
      }
    }
LAB_00403701:
    uVar12 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar12;
    uVar12 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar8;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    *param_1 = uVar12;
    param_1[1] = uVar3;
  }
  return;
}
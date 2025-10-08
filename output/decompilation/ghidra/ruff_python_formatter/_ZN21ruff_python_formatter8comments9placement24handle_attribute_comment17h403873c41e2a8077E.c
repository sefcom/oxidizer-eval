void _ZN21ruff_python_formatter8comments9placement24handle_attribute_comment17h403873c41e2a8077E
               (undefined8 *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  uint uVar6;
  undefined auVar7 [16];
  uint local_80 [2];
  char local_78;
  undefined local_74 [8];
  undefined local_6c;
  uint local_68 [12];
  undefined local_38;
  
  if (*(int *)(param_2 + 2) == 0x5e) {
    uVar1 = *(undefined *)(param_2 + 9);
    auVar7 = (*(code *)
               PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
             )(*(undefined8 *)(param_3 + 10));
    *(undefined (*) [16])(param_1 + 1) = auVar7;
    param_1[3] = param_2[8];
    *(undefined *)(param_1 + 4) = 0;
    *(undefined *)((long)param_1 + 0x21) = uVar1;
    *param_1 = 0x5e;
  }
  else {
    (*(code *)
      PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
    )(*(undefined8 *)(param_3 + 10));
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
              (local_68,extraout_EDX,param_4,param_5);
    local_38 = 0;
    local_6c = 0x5a;
    _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h8cf438245f98d522E
              (local_80,local_68,local_74);
    if ((local_78 == 'Z') || (uVar6 = *(uint *)(param_2 + 8), local_80[0] <= uVar6)) {
      cVar2 = *(char *)(param_2 + 9);
      if (cVar2 == '\0') {
        (*(code *)
          PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
        )(*(undefined8 *)(param_3 + 10));
        if (*param_3 < extraout_EDX_00) {
          (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                    ("assertion failed: start.raw <= end.raw",0x26,&PTR_DAT_0067d2b8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)
          PTR__ZN18ruff_python_trivia9tokenizer24find_only_token_in_range17hf615155300975391E_006bdc80
        )(local_68,extraout_EDX_00,*param_3,0x10,param_4,param_5);
        uVar6 = *(uint *)((long)param_2 + 0x44);
        if (uVar6 < local_68[0]) {
          uVar3 = *(undefined4 *)(param_2 + 8);
          auVar7 = (*(code *)
                     PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
                   )(*(undefined8 *)(param_3 + 10));
          *(undefined (*) [16])(param_1 + 1) = auVar7;
          *(undefined4 *)(param_1 + 3) = uVar3;
          *(uint *)((long)param_1 + 0x1c) = uVar6;
          *(undefined2 *)(param_1 + 4) = 0;
          *param_1 = 0x5f;
          return;
        }
      }
      else {
        uVar6 = *(uint *)((long)param_2 + 0x44);
      }
      uVar5 = param_2[1];
      uVar3 = *(undefined4 *)(param_2 + 8);
      param_1[1] = *param_2;
      param_1[2] = uVar5;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar6;
      *(undefined *)(param_1 + 4) = 0;
      *(char *)((long)param_1 + 0x21) = cVar2;
      *param_1 = 0x60;
    }
    else {
      uVar1 = *(undefined *)(param_2 + 9);
      uVar3 = *(undefined4 *)((long)param_2 + 0x44);
      auVar7 = (*(code *)
                 PTR__ZN122__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__generated__Expr_GT__GT_4from17h1da68d87fdef299eE_006bd858
               )(*(undefined8 *)(param_3 + 10));
      *(undefined (*) [16])(param_1 + 1) = auVar7;
      *(uint *)(param_1 + 3) = uVar6;
      *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
      *(undefined *)(param_1 + 4) = 0;
      *(undefined *)((long)param_1 + 0x21) = uVar1;
      *param_1 = 0x5f;
    }
  }
  return;
}
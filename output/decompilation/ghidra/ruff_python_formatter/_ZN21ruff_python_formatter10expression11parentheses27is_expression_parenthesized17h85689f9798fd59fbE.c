bool _ZN21ruff_python_formatter10expression11parentheses27is_expression_parenthesized17h85689f9798fd59fbE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  bool bVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_7c [8];
  char local_74;
  undefined local_70 [8];
  char local_68;
  
  local_90 = param_1;
  local_88 = param_2;
  (*(code *)
    PTR__ZN86__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17hfa55c2f3b847fdb7E_006bde98
  )(&local_90);
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer22first_non_trivia_token17h0374298a6b2ddd94E_006bdc60)
            (local_70,extraout_EDX,param_5,param_6);
  if (local_68 == '\x06') {
    uVar1 = (*(code *)
              PTR__ZN86__LT_ruff_python_ast__generated__ExprRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17hfa55c2f3b847fdb7E_006bde98
            )(&local_90);
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer18BackwardsTokenizer5up_to17h10c703c3dd949d71E_006bdc70)
              (local_70,uVar1,param_5,param_6,param_3,param_4);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h84c5c22150ea5174E(local_7c,local_70);
    bVar2 = local_74 == '\x05';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
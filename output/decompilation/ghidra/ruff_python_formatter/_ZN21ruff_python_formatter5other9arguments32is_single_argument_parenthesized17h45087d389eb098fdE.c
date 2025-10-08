undefined8
_ZN21ruff_python_formatter5other9arguments32is_single_argument_parenthesized17h45087d389eb098fdE
          (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  uint extraout_EDX;
  undefined local_5c [8];
  char local_54;
  undefined local_50 [48];
  
  (*(code *)
    PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
  )();
  if (param_2 < extraout_EDX) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067dfb0);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  (*(code *)PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
            (local_50,param_3,param_4,extraout_EDX,param_2);
  do {
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_5c,local_50);
  } while (local_54 == '\v');
  if (local_54 == '\x06') {
    do {
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_5c,local_50);
    } while (local_54 == '\v');
    if (local_54 == '\x06') {
      return 1;
    }
  }
  return 0;
}
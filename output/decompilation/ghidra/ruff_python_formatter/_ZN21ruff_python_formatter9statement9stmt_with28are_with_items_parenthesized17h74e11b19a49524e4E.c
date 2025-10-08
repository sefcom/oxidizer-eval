void _ZN21ruff_python_formatter9statement9stmt_with28are_with_items_parenthesized17h74e11b19a49524e4E
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined local_5c [8];
  char local_54;
  undefined local_50 [48];
  undefined local_20 [8];
  
  if (*(ulong *)(param_2 + 0x10) < 2) {
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    if (*(uint *)(*(long *)(param_2 + 8) + 0x50) < *(uint *)(param_2 + 0x30)) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                ("assertion failed: start.raw <= end.raw",0x26,
                 &PTR_s_crates_ruff_python_formatter_src_0067f028);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
              (local_50,param_3,param_4,*(uint *)(param_2 + 0x30));
    local_20[0] = 0;
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hf29dc40a84c0638cE(local_5c,local_50,local_20);
    if (local_54 == 'Z') {
      *param_1 = 0;
      *(char **)(param_1 + 2) = "Expected a with keyword, didn\'t find any token";
      *(undefined8 *)(param_1 + 4) = 0x2e;
      return;
    }
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hf29dc40a84c0638cE(local_5c,local_50,local_20);
    *(bool *)(param_1 + 1) = local_54 != 'Z';
  }
  *param_1 = 4;
  return;
}
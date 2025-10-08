undefined8
_ZN21ruff_python_formatter7pattern17pattern_arguments32is_single_argument_parenthesized17h5afbb12dd64c2cddE
          (ulong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined local_4c [8];
  char local_44;
  undefined local_40 [48];
  
  uVar3 = 3;
  if ((*param_1 ^ 0x8000000000000000) < 8) {
    uVar3 = *param_1 ^ 0x8000000000000000;
  }
  if (param_2 < *(uint *)((long)param_1 + *(long *)(&DAT_0018d590 + uVar3 * 8))) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
              ("assertion failed: start.raw <= end.raw",0x26,
               &PTR_s_crates_ruff_python_formatter_src_0067e5f8);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  (*(code *)PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer3new17h4feeda0403e55ee2E_006bdc38)
            (local_40,param_3,param_4,
             *(uint *)((long)param_1 + *(long *)(&DAT_0018d590 + uVar3 * 8)));
  do {
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_4c,local_40);
  } while (local_44 == '\v');
  if (local_44 == '\x06') {
    do {
      _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(local_4c,local_40);
    } while (local_44 == '\v');
    if (local_44 == '\x06') {
      return 1;
    }
  }
  return 0;
}
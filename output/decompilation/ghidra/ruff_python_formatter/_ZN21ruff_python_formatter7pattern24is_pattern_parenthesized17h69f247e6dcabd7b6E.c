bool _ZN21ruff_python_formatter7pattern24is_pattern_parenthesized17h69f247e6dcabd7b6E
               (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  bool bVar2;
  undefined local_84 [8];
  char local_7c;
  undefined local_78 [8];
  char local_70;
  
  uVar1 = *param_1 ^ 0x8000000000000000;
  if (7 < uVar1) {
    uVar1 = 3;
  }
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer22first_non_trivia_token17h0374298a6b2ddd94E_006bdc60)
            (local_78,*(undefined4 *)((long)param_1 + *(long *)(&DAT_0018d590 + uVar1 * 8)),param_4,
             param_5);
  if (local_70 == '\x06') {
    uVar1 = 3;
    if ((*param_1 ^ 0x8000000000000000) < 8) {
      uVar1 = *param_1 ^ 0x8000000000000000;
    }
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer18BackwardsTokenizer5up_to17h10c703c3dd949d71E_006bdc70)
              (local_78,*(undefined4 *)((long)param_1 + *(long *)(&DAT_0018d5d0 + uVar1 * 8)),
               param_4,param_5,param_2,param_3);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17h84c5c22150ea5174E(local_84,local_78);
    bVar2 = local_7c == '\x05';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
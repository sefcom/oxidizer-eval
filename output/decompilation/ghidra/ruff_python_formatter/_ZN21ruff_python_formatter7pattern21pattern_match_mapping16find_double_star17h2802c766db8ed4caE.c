void _ZN21ruff_python_formatter7pattern21pattern_match_mapping16find_double_star17h2802c766db8ed4caE
               (undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_68;
  char local_60;
  undefined local_58 [48];
  
  if (*(char *)(param_2 + 0x4f) != -0x26) {
    if (*(long *)(param_2 + 0x28) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x28) * 0x68 + -0x68;
    }
    uVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17he858cb0ee03f81dcE
                      (lVar2,*(undefined4 *)(param_2 + 0x58));
    (*(code *)
      PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
              (local_58,uVar1,param_3,param_4);
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hd74ba33ea4c4c1adE(&local_68,local_58);
    if (local_60 != 'Z') {
      *(undefined8 *)(param_1 + 1) = local_68;
      *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 0x30);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}
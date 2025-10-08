void _ZN21ruff_python_formatter9statement6clause12find_keyword17h191773aebb391b5bE
               (undefined4 *param_1,undefined8 param_2,char param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 local_58;
  char local_50;
  undefined local_48 [48];
  
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
            (local_48,param_2,param_4,param_5);
  _ZN4core4iter6traits8iterator8Iterator8try_fold17hef860e9780b175faE(&local_58,local_48);
  if (local_50 == 'Z') {
    *param_1 = 0;
    *(char **)(param_1 + 2) =
         "Expected the case header keyword token but reached the end of the source instead.";
    *(undefined8 *)(param_1 + 4) = 0x51;
  }
  else if (param_3 == local_50) {
    *(undefined8 *)(param_1 + 1) = local_58;
    *param_1 = 4;
  }
  else {
    *param_1 = 0;
    *(char **)(param_1 + 2) = "Expected the keyword token but found another token instead.";
    *(undefined8 *)(param_1 + 4) = 0x3b;
  }
  return;
}
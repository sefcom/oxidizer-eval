void _ZN21ruff_python_formatter9statement6clause11colon_range17ha3df4110d5faf4caE
               (undefined4 *param_1)

{
  undefined8 local_58;
  char local_50;
  undefined local_48 [48];
  undefined local_18 [8];
  
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
            (local_48);
  local_18[0] = 0;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17he09c5ab8ab2b918dE(&local_58,local_48,local_18);
  if (local_50 == '\f') {
    *(undefined8 *)(param_1 + 1) = local_58;
    *param_1 = 4;
    return;
  }
  if (local_50 == 'Z') {
    *param_1 = 0;
    *(char **)(param_1 + 2) =
         "Expected the colon marking the end of the case header but found the end of the range.";
    *(undefined8 *)(param_1 + 4) = 0x55;
    return;
  }
  *param_1 = 0;
  *(char **)(param_1 + 2) =
       "Expected colon marking the end of the case header but found another token instead.";
  *(undefined8 *)(param_1 + 4) = 0x52;
  return;
}
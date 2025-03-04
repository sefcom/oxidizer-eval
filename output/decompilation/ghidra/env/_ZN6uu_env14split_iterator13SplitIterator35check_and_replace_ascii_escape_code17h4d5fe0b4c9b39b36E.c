void _ZN6uu_env14split_iterator13SplitIterator35check_and_replace_ascii_escape_code17h4d5fe0b4c9b39b36E
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_50 = &DAT_001252d0;
  local_48 = &DAT_00125318;
  local_54 = param_3;
  lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17hfeef1e69f7fc6ffeE
                    (&local_50,&local_54);
  if (lVar1 == 0) {
    *(undefined *)((long)param_1 + 4) = 0;
    *(undefined4 *)param_1 = 8;
  }
  else {
    _ZN6uu_env14split_iterator13SplitIterator8skip_one17hcd63dec953ae1fd1E(&local_40,param_2);
    if (local_40 == 8) {
      _ZN6uu_env14split_iterator13SplitIterator17push_char_to_word17h02dd43edde3f93feE
                (param_2,*(undefined4 *)(lVar1 + 4));
      *(undefined *)((long)param_1 + 4) = 1;
      *(undefined4 *)param_1 = 8;
    }
    else {
      param_1[4] = local_20;
      param_1[2] = local_30;
      param_1[3] = uStack_28;
      *param_1 = CONCAT44(uStack_3c,local_40);
      param_1[1] = uStack_38;
    }
  }
  return;
}
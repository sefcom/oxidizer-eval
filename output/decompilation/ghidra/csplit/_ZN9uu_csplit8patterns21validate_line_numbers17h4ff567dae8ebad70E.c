void _ZN9uu_csplit8patterns21validate_line_numbers17h4ff567dae8ebad70E
               (long *param_1,long param_2,long param_3)

{
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long lStack_18;
  long local_10;
  
  local_38 = param_3 * 0x38 + param_2;
  local_40 = param_2;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h6b97f2503d926af3E(&local_30,&local_40);
  if (local_30 != 0xd) {
    param_1[4] = local_10;
    param_1[2] = local_20;
    param_1[3] = lStack_18;
    param_1[1] = local_28;
  }
  *param_1 = local_30;
  return;
}
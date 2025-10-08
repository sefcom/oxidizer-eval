void _ZN5uu_dd9parseargs6Parser7parse_n17heb126d767e01e2d5E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long local_48;
  ulong local_40;
  long local_38;
  long lStack_30;
  
  _ZN5uu_dd9parseargs31parse_bytes_with_opt_multiplier17hba7bf735da655d4cE(&local_48);
  if (local_48 == 0xe) {
    bVar1 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                      (param_2,param_3);
    param_1[2] = local_40;
    local_40 = (ulong)bVar1;
  }
  else {
    param_1[2] = local_38;
    param_1[3] = lStack_30;
  }
  param_1[1] = local_40;
  *param_1 = local_48;
  return;
}
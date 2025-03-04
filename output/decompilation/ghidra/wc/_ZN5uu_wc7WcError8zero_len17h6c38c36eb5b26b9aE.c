void _ZN5uu_wc7WcError8zero_len17h6c38c36eb5b26b9aE
               (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  if (param_2 != (long *)0x0) {
    if (*param_2 == -0x7fffffffffffffff) {
      local_20 = &DAT_0011e2e7;
      local_18 = 1;
      local_28 = 0x8000000000000000;
    }
    else {
      _ZN6uucore8features13quoting_style11escape_name17ha9b5831150e16363E
                (&local_28,param_2[1],param_2[2],
                 &anon_7c7385208ddd1e4e4d864dc74576bdf1_19_llvm_3329604763963259673);
    }
    *param_1 = local_28;
    param_1[1] = local_20;
    param_1[2] = local_18;
    param_1[3] = param_3;
    return;
  }
  *param_1 = 0x8000000000000003;
  return;
}
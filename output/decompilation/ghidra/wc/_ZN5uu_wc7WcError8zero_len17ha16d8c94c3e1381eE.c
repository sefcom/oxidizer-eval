void _ZN5uu_wc7WcError8zero_len17ha16d8c94c3e1381eE
               (undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  if (param_2 != (long *)0x0) {
    if (*param_2 == -0x7fffffffffffffff) {
      local_20 = &DAT_0011a13e;
      local_18 = 1;
      local_28 = 0x8000000000000000;
    }
    else {
      (*(code *)PTR__ZN5uu_wc19escape_name_wrapper17haaae7e5c159f0dd0E_001ffcb8)
                (&local_28,param_2[1],param_2[2]);
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
void _ZN6uu_fmt9linebreak15build_best_path17h4613d5d21e8bb56eE
               (long *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long local_38;
  long local_30;
  long lStack_28;
  undefined8 local_20;
  
  local_30 = param_4 + param_5 * 8;
  local_38 = param_4;
  lStack_28 = param_2;
  local_20 = param_3;
  puVar1 = (undefined8 *)
           _ZN4core4iter6traits8iterator8Iterator6reduce17h85ec73be1843f734E(&local_38);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[1] = 8;
    param_1[2] = 0;
    local_38 = 0;
  }
  else {
    _ZN6uu_fmt9linebreak15build_best_path28__u7b__u7b_closure_u7d__u7d_17h3d0ca2fa363527c2E
              (&local_38,param_2,param_3,*puVar1);
    param_1[1] = local_30;
    param_1[2] = lStack_28;
  }
  *param_1 = local_38;
  return;
}
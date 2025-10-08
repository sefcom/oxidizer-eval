void _ZN2rg5flags5parse20ParseResult_LT_T_GT_8and_then17h6bcb279c98caa42fE
               (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined local_270 [608];
  
  uVar1 = 1;
  if (*param_2 - 2U < 3) {
    uVar1 = *param_2 - 2U;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      (*(code *)PTR_memcpy_00526658)(local_270,param_2,0x260);
      _ZN2rg5flags5parse5parse28__u7b__u7b_closure_u7d__u7d_17h078e73d04d1b17d8E(param_1,local_270);
      return;
    }
    param_1[1] = param_2[1];
    *param_1 = 4;
    return;
  }
  *(undefined *)(param_1 + 1) = *(undefined *)(param_2 + 1);
  *param_1 = 2;
  return;
}
ulong * _ZN4just8function11module_file17hd15dea5ff665aa02E(ulong *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int local_28;
  undefined4 uStack_24;
  ulong local_20;
  ulong uStack_18;
  
  lVar1 = *(long *)(*param_2 + 0x10);
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_28,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  bVar2 = local_28 != 1;
  if (bVar2) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_28,local_20,uStack_18);
    param_1[2] = local_20;
    param_1[3] = uStack_18;
    param_1[1] = CONCAT44(uStack_24,local_28);
  }
  else {
    _ZN4just8function11module_file28__u7b__u7b_closure_u7d__u7d_17ha63e0615b0ae1fe0E
              (param_1 + 1,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  }
  *param_1 = (ulong)!bVar2;
  return param_1;
}
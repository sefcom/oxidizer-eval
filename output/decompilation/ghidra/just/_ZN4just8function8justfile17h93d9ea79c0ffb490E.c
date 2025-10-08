ulong * _ZN4just8function8justfile17h93d9ea79c0ffb490E(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int local_28;
  undefined4 uStack_24;
  ulong local_20;
  ulong uStack_18;
  
  lVar1 = *param_2;
  lVar2 = *(long *)(lVar1 + 0x18);
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_28,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  bVar3 = local_28 != 1;
  if (bVar3) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_28,local_20,uStack_18);
    param_1[2] = local_20;
    param_1[3] = uStack_18;
    param_1[1] = CONCAT44(uStack_24,local_28);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    _ZN4just8function8justfile28__u7b__u7b_closure_u7d__u7d_17h90a61bfe481a18c7E
              (param_1 + 1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
  }
  *param_1 = (ulong)!bVar3;
  return param_1;
}
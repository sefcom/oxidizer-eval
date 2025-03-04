void _ZN7uu_sort14GlobalSettings16init_precomputed17h2e4e09def4bcf2a9E(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined uVar3;
  long lVar4;
  long local_28;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) * 0x38 + lVar1;
  local_28 = lVar1;
  local_20 = lVar4;
  uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hfd9cbea3530c9fd0E
                    (&local_28);
  *(undefined *)(param_1 + 0x60) = uVar3;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17ha92c83caa8027c63E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17hefb188d1a39a24e8E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17ha576350b6c5181b6E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return;
}
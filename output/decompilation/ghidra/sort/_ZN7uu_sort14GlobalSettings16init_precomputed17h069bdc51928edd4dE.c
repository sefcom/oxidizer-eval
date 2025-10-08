void _ZN7uu_sort14GlobalSettings16init_precomputed17h069bdc51928edd4dE(long param_1)

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
  uVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17he9599d49993e5e80E
                    (&local_28);
  *(undefined *)(param_1 + 0x60) = uVar3;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h0275dad68c5e5a70E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h1f5e890a7cbe0df4E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h392322c9088400e9E
                    (lVar1,lVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return;
}
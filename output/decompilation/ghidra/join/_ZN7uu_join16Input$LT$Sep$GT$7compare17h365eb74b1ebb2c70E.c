ulong _ZN7uu_join16Input_LT_Sep_GT_7compare17h365eb74b1ebb2c70E
                (ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  ulong local_20;
  long local_18;
  ulong local_10;
  
  if (param_2 == 0 || param_4 == 0) {
    uVar2 = 1;
    if (param_2 == 0) {
      uVar2 = (ulong)-(uint)(param_4 != 0);
    }
    return uVar2;
  }
  if ((param_1 & 1) != 0) {
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    local_10 = param_5;
    uVar2 = (*(code *)
              PTR__ZN64__LT_uu_join__CaseInsensitiveSlice_u20_as_u20_core__cmp__Ord_GT_3cmp17hd7c29e2189cad42aE_00204f00
            )(&local_28,&local_18);
    return uVar2;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  iVar1 = (*(code *)PTR_memcmp_00204f08)(param_2,param_4,uVar2);
  lVar3 = param_3 - param_5;
  if (iVar1 != 0) {
    lVar3 = (long)iVar1;
  }
  return CONCAT71((int7)(int3)((uint)iVar1 >> 8),(0 < lVar3) - (lVar3 < 0));
}
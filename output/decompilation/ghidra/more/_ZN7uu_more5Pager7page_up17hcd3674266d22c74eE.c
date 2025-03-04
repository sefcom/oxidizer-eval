void _ZN7uu_more5Pager7page_up17hcd3674266d22c74eE(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long local_40;
  long local_38;
  ulong local_30;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar2 = 0xffffffffffffffff;
  if (!CARRY8((ulong)*(ushort *)(param_1 + 0x40),*(ulong *)(param_1 + 0x38))) {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x38);
  }
  local_30 = 0;
  if (uVar2 <= uVar3) {
    local_30 = uVar3 - uVar2;
  }
  *(ulong *)(param_1 + 0x18) = local_30;
  if (*(char *)(param_1 + 0x43) != '\0') {
    local_40 = *(long *)(param_1 + 8);
    local_38 = local_40 + *(long *)(param_1 + 0x10) * 0x18;
    if (uVar2 < uVar3) {
      uVar3 = local_30;
      do {
        uVar2 = (ulong)(local_38 - local_40) / 0x18;
        lVar1 = uVar2 - local_30;
        if (uVar2 < local_30) {
          lVar1 = 0;
        }
        local_30 = local_30 - 1;
        lVar1 = _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_8nth_back17h9be320c1ff82071cE
                          (&local_40,lVar1);
        if (lVar1 == 0) {
          return;
        }
        if (*(long *)(lVar1 + 0x10) != 0) {
          return;
        }
        bVar4 = uVar3 == 0;
        uVar3 = uVar3 - 1;
        if (bVar4) {
          uVar3 = 0;
        }
        *(ulong *)(param_1 + 0x18) = uVar3;
      } while (local_30 != 0);
    }
  }
  return;
}
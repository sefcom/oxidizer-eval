void _ZN7uu_more5Pager9page_down17h5965084d09aa1aceE(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  uVar2 = *(ulong *)(param_1 + 0x58);
  uVar4 = uVar2 * 2 + uVar1;
  if (CARRY8(uVar2 * 2,uVar1)) {
    uVar4 = 0xffffffffffffffff;
  }
  if (uVar4 < *(ulong *)(param_1 + 0x70)) {
    lVar3 = uVar1 + uVar2;
    if (CARRY8(uVar1,uVar2)) {
      lVar3 = -1;
    }
    *(long *)(param_1 + 0x50) = lVar3;
    return;
  }
  *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0x70) - uVar2;
  return;
}
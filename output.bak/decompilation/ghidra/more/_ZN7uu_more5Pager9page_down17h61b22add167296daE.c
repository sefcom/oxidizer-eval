void __rustcall uu_more::Pager::page_down(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x40);
  uVar3 = (ulong)((uint)*(ushort *)(param_1 + 0x40) * 2);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar4 = uVar3 + uVar1;
  if (CARRY8(uVar3,uVar1)) {
    uVar4 = 0xffffffffffffffff;
  }
  lVar5 = uVar1 + uVar2;
  if (CARRY8(uVar1,uVar2)) {
    lVar5 = -1;
  }
  lVar6 = *(ulong *)(param_1 + 0x30) - uVar2;
  if (uVar4 < *(ulong *)(param_1 + 0x30)) {
    lVar6 = lVar5;
  }
  *(long *)(param_1 + 0x18) = lVar6;
  return;
}
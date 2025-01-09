undefined8 __rustcall uu_more::Pager::should_close(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x18);
  uVar2 = 0xffffffffffffffff;
  if (!CARRY8((ulong)*(ushort *)(param_1 + 0x40),*(ulong *)(param_1 + 0x18))) {
    uVar2 = uVar1;
  }
  return CONCAT71((int7)(uVar1 >> 8),*(ulong *)(param_1 + 0x30) <= uVar2);
}
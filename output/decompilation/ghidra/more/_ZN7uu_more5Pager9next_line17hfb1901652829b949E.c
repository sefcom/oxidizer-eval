void _ZN7uu_more5Pager9next_line17hfb1901652829b949E(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(long *)(param_1 + 0x70) - 1;
  }
  if (*(ulong *)(param_1 + 0x50) < uVar1) {
    *(ulong *)(param_1 + 0x50) = *(ulong *)(param_1 + 0x50) + 1;
  }
  return;
}
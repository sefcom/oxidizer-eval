undefined8 _ZN7uu_more5Pager12should_close17h4a303d1ec4dab858E(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x58);
  uVar2 = 0xffffffffffffffff;
  if (!CARRY8(*(ulong *)(param_1 + 0x50),*(ulong *)(param_1 + 0x58))) {
    uVar2 = uVar1;
  }
  return CONCAT71((int7)(uVar1 >> 8),*(ulong *)(param_1 + 0x70) <= uVar2);
}
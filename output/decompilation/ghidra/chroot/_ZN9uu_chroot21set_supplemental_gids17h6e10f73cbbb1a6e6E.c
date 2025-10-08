ulong _ZN9uu_chroot21set_supplemental_gids17h6e10f73cbbb1a6e6E
                (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = (*(code *)PTR_setgroups_002018c8)(param_2,param_1);
  if (iVar1 != 0) {
    puVar2 = (uint *)(*(code *)PTR___errno_location_002018d0)();
    return (ulong)*puVar2 << 0x20 | 2;
  }
  return 0;
}
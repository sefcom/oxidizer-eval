ulong _ZN9uu_chroot7set_gid17h96b8c03f678d01e3E(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = (*(code *)PTR_setgid_002018d8)();
  if (iVar1 != 0) {
    puVar2 = (uint *)(*(code *)PTR___errno_location_002018d0)();
    return (ulong)*puVar2 << 0x20 | 2;
  }
  return 0;
}
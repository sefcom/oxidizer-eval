ulong _ZN9uu_chroot7set_uid17haa9800f67f007aa3E(void)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = (*(code *)PTR_setuid_002018e0)();
  if (iVar1 != 0) {
    puVar2 = (uint *)(*(code *)PTR___errno_location_002018d0)();
    return (ulong)*puVar2 << 0x20 | 2;
  }
  return 0;
}
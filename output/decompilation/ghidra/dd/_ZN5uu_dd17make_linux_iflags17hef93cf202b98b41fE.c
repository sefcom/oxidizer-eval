bool _ZN5uu_dd17make_linux_iflags17hef93cf202b98b41fE(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + 1) << 0xe;
  uVar2 = uVar1 | 0x10000;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 0x1000;
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x40000;
  if (*(char *)(param_1 + 7) == '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x100;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x20000;
  if (*(char *)(param_1 + 9) == '\0') {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x800;
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x101000;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = uVar1;
  }
  return uVar2 != 0;
}
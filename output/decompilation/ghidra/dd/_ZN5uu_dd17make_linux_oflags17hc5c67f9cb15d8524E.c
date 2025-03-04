bool _ZN5uu_dd17make_linux_oflags17hc5c67f9cb15d8524E(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1 << 10 | 0x4000;
  if (param_1[2] == 0) {
    uVar2 = (uint)*param_1 << 10;
  }
  uVar1 = uVar2 | 0x10000;
  if (param_1[3] == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x1000;
  if (param_1[4] == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x40000;
  if (param_1[8] == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x100;
  if (param_1[9] == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x20000;
  if (param_1[10] == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x800;
  if (param_1[7] == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 | 0x101000;
  if (param_1[5] == 0) {
    uVar1 = uVar2;
  }
  return uVar1 != 0;
}
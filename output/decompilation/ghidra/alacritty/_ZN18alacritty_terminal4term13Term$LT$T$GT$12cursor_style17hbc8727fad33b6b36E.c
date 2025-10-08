uint _ZN18alacritty_terminal4term13Term_LT_T_GT_12cursor_style17hbc8727fad33b6b36E(long param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x6e0);
  if ((char)uVar2 == '\x02') {
    uVar2 = *(uint *)(param_1 + 0x238);
    bVar1 = *(byte *)(param_1 + 0x6de);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x6de);
  }
  if ((bVar1 & 1) != 0) {
    uVar2 = uVar2 & 0xff;
    if (*(byte *)(param_1 + 0x23a) != 2) {
      uVar2 = (uint)*(byte *)(param_1 + 0x23a);
    }
  }
  return uVar2;
}
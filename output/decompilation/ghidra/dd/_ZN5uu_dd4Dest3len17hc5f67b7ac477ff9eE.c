undefined  [16] _ZN5uu_dd4Dest3len17hc5f67b7ac477ff9eE(char *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  int local_b0 [2];
  ulong local_a8;
  ulong local_60;
  
  uVar1 = 0;
  uVar2 = 0;
  if (*param_1 == '\x01') {
    _ZN3std2fs4File8metadata17he899a18112e6f19eE(local_b0,param_1 + 4,0);
    if (local_b0[0] == 2) {
      uVar1 = 1;
      uVar2 = local_a8;
    }
    else {
      uVar2 = 0x7fffffffffffffff;
      if (local_60 < 0x7fffffffffffffff) {
        uVar2 = local_60;
      }
      uVar1 = 0;
    }
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}
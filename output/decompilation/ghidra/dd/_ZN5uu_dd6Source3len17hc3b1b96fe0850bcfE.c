undefined  [16] _ZN5uu_dd6Source3len17hc3b1b96fe0850bcfE(int *param_1)

{
  undefined auVar1 [16];
  ulong uVar2;
  undefined auVar3 [16];
  int local_b0 [2];
  undefined8 local_a8;
  ulong local_60;
  
  if (*param_1 != 0) {
    return ZEXT816(0) << 0x40;
  }
  _ZN3std2fs4File8metadata17he899a18112e6f19eE(local_b0,param_1 + 1,0);
  if (local_b0[0] == 2) {
    auVar3._8_8_ = local_a8;
    auVar3._0_8_ = 1;
    return auVar3;
  }
  uVar2 = 0x7fffffffffffffff;
  if (local_60 < 0x7fffffffffffffff) {
    uVar2 = local_60;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}
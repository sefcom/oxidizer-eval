undefined  [16] _ZN4just9attribute9Attribute4name17hcaaec6ee6cc444eeE(long param_1)

{
  ulong uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0x10;
  if (param_1 + 0x7fffffffffffffffU < 0x14) {
    uVar1 = param_1 + 0x7fffffffffffffffU;
  }
  auVar2._0_8_ = &DAT_0019fd38 + *(int *)(&DAT_0019fd38 + uVar1 * 4);
  auVar2._8_8_ = *(undefined8 *)(&DAT_0019fc98 + uVar1 * 8);
  return auVar2;
}
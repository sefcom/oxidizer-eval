undefined  [16] _ZN7uu_tail6follow5watch8Observer12add_bad_path17h4375069fa57482bbE(long param_1)

{
  undefined8 uVar1;
  ulong in_R10;
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    if (*(char *)(param_1 + 0x8e) != '\x02') {
      auVar2 = _ZN7uu_tail6follow5watch8Observer8add_path17h2539e8b9bde14502E();
      in_R10 = auVar2._8_8_;
      uVar1 = auVar2._0_8_;
    }
    auVar3._8_8_ = in_R10;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_R10;
  return auVar2 << 0x40;
}
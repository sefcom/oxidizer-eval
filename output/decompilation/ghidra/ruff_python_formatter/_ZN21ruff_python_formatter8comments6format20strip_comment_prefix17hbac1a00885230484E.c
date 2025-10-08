void _ZN21ruff_python_formatter8comments6format20strip_comment_prefix17hbac1a00885230484E
               (int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined4 local_1c;
  
  local_1c = 0;
  auVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x23,&local_1c);
  auVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                     (auVar4._0_8_,auVar4._8_8_,param_2,param_3);
  bVar3 = auVar4._0_8_ != (undefined *)0x0;
  puVar2 = &DAT_0018a7af;
  if (bVar3) {
    puVar2 = auVar4._0_8_;
  }
  uVar1 = 0x26;
  if (bVar3) {
    uVar1 = auVar4._8_8_;
  }
  *param_1 = (uint)bVar3 << 2;
  *(undefined **)(param_1 + 2) = puVar2;
  *(undefined8 *)(param_1 + 4) = uVar1;
  return;
}
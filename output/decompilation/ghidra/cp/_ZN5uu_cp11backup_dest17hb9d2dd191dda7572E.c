void _ZN5uu_cp11backup_dest17hb9d2dd191dda7572E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int param_6)

{
  long lVar1;
  undefined auVar2 [16];
  
  if (param_6 == 0) {
    auVar2 = _ZN3std2fs4copy17h82e95226cca79e6aE(param_2,param_3,param_4,param_5);
    if (auVar2._0_8_ != 0) {
      *param_1 = 2;
      param_1[1] = auVar2._8_8_;
      return;
    }
  }
  else {
    lVar1 = _ZN3std2fs6rename17h07c9d3c373504b5fE();
    if (lVar1 != 0) {
      *param_1 = 2;
      param_1[1] = lVar1;
      return;
    }
  }
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(param_1 + 1,param_4,param_5);
  *param_1 = 0xd;
  return;
}
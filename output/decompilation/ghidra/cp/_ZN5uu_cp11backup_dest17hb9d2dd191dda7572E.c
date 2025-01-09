void __rustcall
uu_cp::backup_dest(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  undefined auVar2 [16];
  
  if (param_6 == 0) {
    auVar2 = std::fs::copy(param_2,param_3,param_4,param_5);
    if (auVar2._0_8_ != 0) {
      *param_1 = 2;
      param_1[1] = auVar2._8_8_;
      return;
    }
  }
  else {
    lVar1 = std::fs::rename();
    if (lVar1 != 0) {
      *param_1 = 2;
      param_1[1] = lVar1;
      return;
    }
  }
  std::sys::os_str::bytes::Slice::to_owned(param_1 + 1,param_4,param_5);
  *param_1 = 0xd;
  return;
}
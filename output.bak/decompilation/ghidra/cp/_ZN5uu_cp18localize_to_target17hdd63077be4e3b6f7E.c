undefined8 * __rustcall
uu_cp::localize_to_target
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  auVar2 = std::path::Path::strip_prefix(param_4,param_5,param_2,param_3);
  if (auVar2._0_8_ == 0) {
    uVar1 = 7;
  }
  else {
    std::path::Path::join(param_1 + 1,param_6,param_7,auVar2._0_8_,auVar2._8_8_);
    uVar1 = 0xd;
  }
  *param_1 = uVar1;
  return param_1;
}
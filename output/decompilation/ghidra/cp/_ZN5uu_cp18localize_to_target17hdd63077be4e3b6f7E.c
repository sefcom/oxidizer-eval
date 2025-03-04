undefined8 *
_ZN5uu_cp18localize_to_target17hdd63077be4e3b6f7E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  auVar2 = _ZN3std4path4Path12strip_prefix17h5d7e53b0b6c79402E(param_4,param_5,param_2,param_3);
  if (auVar2._0_8_ == 0) {
    uVar1 = 7;
  }
  else {
    _ZN3std4path4Path4join17hb28666e9f3e91503E
              (param_1 + 1,param_6,param_7,auVar2._0_8_,auVar2._8_8_);
    uVar1 = 0xd;
  }
  *param_1 = uVar1;
  return param_1;
}
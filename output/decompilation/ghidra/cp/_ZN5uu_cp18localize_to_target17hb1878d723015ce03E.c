undefined8 *
_ZN5uu_cp18localize_to_target17hb1878d723015ce03E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = 0x8000000000000006;
  auVar2 = _ZN3std4path4Path12strip_prefix17hf232be0ca9110327E(param_4,param_5,param_2,param_3);
  if (auVar2._0_8_ != 0) {
    _ZN3std4path4Path4join17h10fbe6df042abedeE
              (param_1 + 1,param_6,param_7,auVar2._0_8_,auVar2._8_8_);
    uVar1 = 0x800000000000000c;
  }
  *param_1 = uVar1;
  return param_1;
}
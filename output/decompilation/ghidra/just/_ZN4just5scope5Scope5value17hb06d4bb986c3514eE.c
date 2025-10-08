undefined  [16]
_ZN4just5scope5Scope5value17hb06d4bb986c3514eE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar2 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h0d5be91b1068c8c2E
                     (*param_1,param_1[1],param_2,param_3);
  if (auVar2._0_8_ != 0) {
    return *(undefined (*) [16])(auVar2._0_8_ + 8);
  }
  if (param_1[3] != 0) {
    auVar2 = _ZN4just5scope5Scope5value17hb06d4bb986c3514eE(param_1[3],param_2,param_3);
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar2._8_8_;
  return auVar1 << 0x40;
}
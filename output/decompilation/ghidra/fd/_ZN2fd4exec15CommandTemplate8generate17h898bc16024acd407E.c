void _ZN2fd4exec15CommandTemplate8generate17h898bc16024acd407E
               (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined local_130 [24];
  undefined local_118 [232];
  
  if (param_3 == 0) {
    uVar1 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0053fd98)
                      (0,0,&PTR_s_src_exec_mod_rs_00502288);
                    /* catch() { ... } // from try @ 002f3e80 with catch @ 002f3f0f */
                    /* try { // try from 002f3f12 to 002f3f1b has its CatchHandler @ 002f3f24 */
    _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(local_118);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar1);
  }
  _ZN2fd3fmt14FormatTemplate8generate17hfff854f5585a67ffE
            (local_130,param_2,param_4,param_5,param_6,param_7);
  _ZN6argmax7Command3new17h0ff314cd1dda056eE(local_118,local_130);
  if (param_3 * 0x20 != 0x20) {
    param_2 = param_2 + 0x20;
    lVar2 = param_3 * 0x20 + -0x20;
    do {
                    /* try { // try from 002f3e80 to 002f3ea8 has its CatchHandler @ 002f3f0f */
      _ZN2fd3fmt14FormatTemplate8generate17hfff854f5585a67ffE
                (local_130,param_2,param_4,param_5,param_6,param_7);
      auVar3 = _ZN6argmax7Command7try_arg17ha49bcf2cb4dd0994E(local_118,local_130);
      if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        param_1[1] = auVar3._8_8_;
        *param_1 = 0x8000000000000000;
        _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(local_118);
        return;
      }
      param_2 = param_2 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  (*(code *)PTR_memcpy_0053fd28)(param_1,local_118,0xe8);
  return;
}
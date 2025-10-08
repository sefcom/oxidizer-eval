void _ZN2fd4exec14CommandBuilder11new_command17hd2fd042878a0df86E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auStack_108 [232];
  
  if (param_3 != 0) {
    _ZN6argmax7Command3new17habaac7a58701f95aE(auStack_108);
                    /* try { // try from 002f378b to 002f37b7 has its CatchHandler @ 002f3808 */
    _ZN3std7process7Command5stdin17h6a646153670912e8E(auStack_108);
    _ZN3std7process7Command6stdout17h015ae6fd745f4422E(auStack_108);
    _ZN3std7process7Command6stderr17hf8aae86f4e8c2dfdE(auStack_108);
    auVar2 = _ZN6argmax7Command8try_args17h67b21b8585c12cd1E
                       (auStack_108,param_2 + 0x18,param_3 + -1);
    if ((auVar2 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      (*(code *)PTR_memcpy_0053fd28)(param_1,auStack_108,0xe8);
    }
    else {
      param_1[1] = auVar2._8_8_;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(auStack_108);
    }
    return;
  }
  uVar1 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0053fd98)
                    (0,0,&PTR_s_src_exec_mod_rs_00502230);
                    /* catch() { ... } // from try @ 002f378b with catch @ 002f3808 */
                    /* try { // try from 002f380b to 002f3812 has its CatchHandler @ 002f381b */
  _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(auStack_108);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar1);
}
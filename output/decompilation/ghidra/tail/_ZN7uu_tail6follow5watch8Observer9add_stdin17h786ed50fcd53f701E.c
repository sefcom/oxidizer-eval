undefined  [16]
_ZN7uu_tail6follow5watch8Observer9add_stdin17h786ed50fcd53f701E
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(byte *)(param_1 + 0x8e) == 2 || (*(byte *)(param_1 + 0x8e) & 1) != 0) {
    _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1ddfbf499f92a46cE
              (param_4,&
                       PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h8c3263317abf16b8E_00273ad0
              );
    uVar1 = 0;
  }
  else {
                    /* try { // try from 001a35d6 to 001a35f2 has its CatchHandler @ 001a3672 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
              (&local_48,&DAT_00124c84,10);
                    /* try { // try from 001a3601 to 001a3622 has its CatchHandler @ 001a365c */
    auVar2 = _ZN7uu_tail6follow5watch8Observer8add_path17h2513ec520b230a37E
                       (param_1,local_40,local_38,param_2,param_3,param_4,
                        &
                        PTR__ZN4core3ptr89drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__Stdin_GT__GT_17h8c3263317abf16b8E_00273ad0
                        ,1);
    param_4 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_48,local_40);
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = uVar1;
  return auVar2;
}
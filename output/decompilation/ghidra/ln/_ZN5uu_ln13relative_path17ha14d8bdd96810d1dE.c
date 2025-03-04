void _ZN5uu_ln13relative_path17ha14d8bdd96810d1dE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN6uucore8features2fs12canonicalize17h71a1e0c6a304f51bE(&local_d8,param_2,param_3,2,1);
  if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) {
    local_98 = local_c8;
    local_a8 = local_d8;
    uStack_a4 = uStack_d4;
    uStack_a0 = uStack_d0;
    uStack_9c = uStack_cc;
                    /* try { // try from 001ba32b to 001ba368 has its CatchHandler @ 001ba42d */
    auVar2 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(param_4,param_5);
    if (auVar2._0_8_ == 0) {
                    /* try { // try from 001ba403 to 001ba40f has its CatchHandler @ 001ba42d */
      uVar1 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
                        (&PTR_s_src_uu_ln_src_ln_rs_0022d040);
                    /* catch() { ... } // from try @ 001ba3e2 with catch @ 001ba410 */
                    /* catch() { ... } // from try @ 001ba369 with catch @ 001ba412 */
      if (CONCAT44(uStack_d4,local_d8) == -0x8000000000000000) {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hb015fef5ec46fd2fE
                  (&local_d8);
      }
      _Unwind_Resume(uVar1);
      return;
    }
    _ZN6uucore8features2fs12canonicalize17h71a1e0c6a304f51bE
              (&local_c0,auVar2._0_8_,auVar2._8_8_,2,1);
    if (local_c0 != -0x8000000000000000) {
      local_78 = local_b0;
      local_88 = local_c0;
      uStack_80 = uStack_b8;
      local_58 = local_98;
      local_68 = local_a8;
      uStack_64 = uStack_a4;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
                    /* try { // try from 001ba3ad to 001ba3c3 has its CatchHandler @ 001ba417 */
      _ZN6uucore8features2fs21make_path_relative_to17h64cbefd3f33a6974E
                (&local_48,&local_68,&local_88);
      param_1[2] = local_38;
      *(undefined4 *)param_1 = local_48;
      *(undefined4 *)((long)param_1 + 4) = uStack_44;
      *(undefined4 *)(param_1 + 1) = uStack_40;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
      if (local_c0 == -0x8000000000000000) {
                    /* try { // try from 001ba3e2 to 001ba3eb has its CatchHandler @ 001ba410 */
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hb015fef5ec46fd2fE
                  (&local_c0);
      }
      if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) {
        return;
      }
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hb015fef5ec46fd2fE
                (&local_d8);
      return;
    }
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hb015fef5ec46fd2fE
              (&local_c0);
                    /* try { // try from 001ba369 to 001ba372 has its CatchHandler @ 001ba412 */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff8990cc0a5456e3E(&local_a8);
    if (CONCAT44(uStack_d4,local_d8) != -0x8000000000000000) goto LAB_001ba2fb;
  }
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hb015fef5ec46fd2fE
            (&local_d8);
LAB_001ba2fb:
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0x8000000000000000;
  return;
}
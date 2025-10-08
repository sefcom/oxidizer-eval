void _ZN4just8compiler8Compiler12expand_tilde17he94855b8847afd9bE
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 local_80;
  
  auVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                     (&DAT_0016ee16,2,param_2,param_3);
  if (auVar1._0_8_ == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_90,param_2,param_3);
  }
  else {
    (*(code *)PTR__ZN4dirs8home_dir17h56798f98581d6ac2E_00566ab8)(local_a8);
    local_90 = 0x1b;
    _ZN4core3ptr39drop_in_place_LT_just__error__Error_GT_17ha62e3e0ecfcf56b5E(&local_90);
    auVar1 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17h255918ccc9205e78E
                       (auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 0035c549 to 0035c55b has its CatchHandler @ 0035c58b */
    _ZN3std4path4Path4join17h1eac0ae5e7efa361E
              (&local_90,local_a0,local_98,auVar1._0_8_,auVar1._8_8_);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_a8);
  }
  *(undefined8 *)(param_1 + 0x18) = local_80;
  *(ulong *)(param_1 + 8) = CONCAT71(uStack_8f,local_90);
  *(undefined8 *)(param_1 + 0x10) = uStack_88;
  *param_1 = 0x38;
  return;
}
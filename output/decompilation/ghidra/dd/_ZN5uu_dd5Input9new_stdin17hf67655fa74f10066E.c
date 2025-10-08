undefined8 * _ZN5uu_dd5Input9new_stdin17hf67655fa74f10066E(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_90;
  
  _ZN5uu_dd6Source13stdin_as_file17h88ed056d97613b9fE();
  local_e8 = 1;
  if (*(char *)(param_2 + 0x42) == '\0') {
LAB_0018fa6b:
    if (*(long *)(param_2 + 0x80) != 0) {
      auVar2 = _ZN5uu_dd6Source4skip17h56a70907a2f0c0f8E(&local_e8);
      if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        auVar2 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                 )(auVar2._8_8_);
        goto LAB_0018fae6;
      }
    }
    param_1[1] = local_e8;
    param_1[2] = param_2;
    *param_1 = 0;
  }
  else {
                    /* try { // try from 0018fa34 to 0018fade has its CatchHandler @ 0018fb0c */
    (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00246cd8)
              (&local_c8,(long)&local_e8 + 4);
    if (local_c8 == 2) {
      auVar2 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
               )(CONCAT44(uStack_bc,uStack_c0));
    }
    else {
      if ((local_90 & 0xf000) == 0x4000) goto LAB_0018fa6b;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                (&local_e0,&DAT_00121cd5,0x33);
      local_b8 = local_d0;
      local_c8 = local_e0;
      uStack_c4 = uStack_dc;
      uStack_c0 = uStack_d8;
      uStack_bc = uStack_d4;
      local_b0 = 1;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17he73dee4c808ee59fE(&local_c8);
      auVar2._8_8_ = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h15378789d150a413E_0023dcd8
      ;
      auVar2._0_8_ = uVar1;
    }
LAB_0018fae6:
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 1;
    _ZN4core3ptr34drop_in_place_LT_uu_dd__Source_GT_17h0f98b01c459a3648E(local_e8._4_4_);
  }
  return param_1;
}
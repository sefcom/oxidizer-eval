undefined8 *
_ZN9uu_stdbuf15get_preload_env17hcdd0d7c41618a612E(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined auVar3 [16];
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  _ZN3std4path4Path4join17hb4d8c8bc03e2bc06E(&local_78,*param_2,param_2[1]);
  uVar1 = uStack_70;
                    /* try { // try from 005104a8 to 005104b4 has its CatchHandler @ 005105d0 */
  _ZN3std4path4Path14with_extension17h2eecadfad52b8ff1E(&local_40,uStack_70,local_68);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb266f29cb85e941fE(local_78,uVar1);
                    /* try { // try from 005104c2 to 005104e2 has its CatchHandler @ 005105e8 */
  _ZN3std2fs4File6create17hcd4eb751c6dbc5c0E(&local_78,&local_40);
  if ((int)local_78 == 1) {
    auVar3 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_005af758
             )(uStack_70);
    *(undefined (*) [16])(param_1 + 1) = auVar3;
    *param_1 = 0x8000000000000000;
  }
  else {
    local_7c = local_78._4_4_;
                    /* try { // try from 00510502 to 00510567 has its CatchHandler @ 005105c2 */
    lVar2 = _ZN3std2io5Write9write_all17h6140e7df6d61f873E(&local_7c);
    if (lVar2 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1f3fa2d8817656eeE
                (&local_28,&DAT_0011b79c,10);
      local_68 = local_18;
      local_78 = local_28;
      uStack_70 = uStack_20;
      local_50 = local_30;
      local_60 = local_40;
      uStack_58 = uStack_38;
      param_1[4] = uStack_38;
      param_1[5] = local_30;
      param_1[2] = local_18;
      param_1[3] = local_40;
      *param_1 = local_28;
      param_1[1] = uStack_20;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10eab31abeb771e6E(local_7c);
      return param_1;
    }
    auVar3 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_005af758
             )(lVar2);
    *(undefined (*) [16])(param_1 + 1) = auVar3;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h10eab31abeb771e6E(local_7c);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb266f29cb85e941fE(local_40,uStack_38);
  return param_1;
}
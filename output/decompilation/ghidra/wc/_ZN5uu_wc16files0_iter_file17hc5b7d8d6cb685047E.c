void _ZN5uu_wc16files0_iter_file17hc5b7d8d6cb685047E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN3std2fs4File4open17h2ac8fc8643c389e6E(&local_68);
  if (local_68 == 1) {
    uVar1 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17he406d8bf057b4e96E
                      (local_60,param_2,param_3);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar1;
    param_1[2] = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h59967059a88e683eE_001f9240
    ;
  }
  else {
                    /* try { // try from 00169653 to 00169662 has its CatchHandler @ 00169691 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h805faec68bbcdbafE
              (&local_38,param_2,param_3);
    local_48 = local_28;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    _ZN5uu_wc11files0_iter17h3a2520d8f4dd46d9E(param_1,local_64,&local_58);
  }
  return;
}
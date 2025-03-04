void _ZN5uu_wc16files0_iter_file17h4e3b8ab8e030dfcaE
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
  
  _ZN3std2fs4File4open17h104bd9348fd76b4fE(&local_68);
  if (local_68 == 0) {
                    /* try { // try from 001bd143 to 001bd153 has its CatchHandler @ 001bd182 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_38,param_2,param_3);
    local_48 = local_28;
    local_58 = local_38;
    uStack_54 = uStack_34;
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    _ZN5uu_wc11files0_iter17h0e34cd9488cdd310E(param_1,local_64,&local_58);
  }
  else {
    uVar1 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17h3635bd652e6372faE
                      (local_60,param_2,param_3);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar1;
    param_1[2] = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h0297536b43dafb9eE_00231158
    ;
  }
  return;
}
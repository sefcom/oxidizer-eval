undefined8 *
_ZN7uu_tail6chunks10BytesChunk4fill17h4a717c5d739984d3E
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  
  auVar2 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_4read17h06966d2507d1fcfaE
                     (param_3,param_2,0x2000);
  lVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    *(long *)(param_2 + 0x2000) = lVar1;
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      param_1[1] = 1;
      param_1[2] = lVar1;
      *param_1 = 0;
    }
  }
  else {
    auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       (lVar1);
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 1;
  }
  return param_1;
}
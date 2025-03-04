void _ZN7uu_uniq4Uniq10print_line17h32e5970fdc1721c7E
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               long param_6,char param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined local_b8;
  long local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  long *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  long **local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined local_50 [32];
  
  uVar3 = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    uVar3 = 0;
  }
  local_b0 = param_6;
  if (((param_6 == 1) && (*(byte *)(param_1 + 0x36) != 4)) &&
     ((param_7 != '\0' || ((*(byte *)(param_1 + 0x36) | 2) == 3)))) {
    local_e8 = CONCAT71(local_e8._1_7_,uVar3);
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17ha26dee22509071d6E
                      (param_2,param_3,&local_e8,1);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hfa9427f084ffcfe7E
                      (uVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17ha26dee22509071d6E
                      (param_2,param_3,param_4,param_5);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4767a6aafdc81322E
                      (uVar1);
  }
  else {
    local_90 = &local_b0;
    local_88 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE_00234788
    ;
    local_e8 = 2;
    local_d8 = 0;
    local_d0 = 7;
    local_c8 = 0;
    local_c0 = 0x20;
    local_b8 = 3;
    local_80 = &DAT_0022d918;
    local_78 = 2;
    local_58 = 1;
    local_70 = &local_90;
    local_68 = 1;
    local_60 = (undefined *)&local_e8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hf9a5e71691484ed0E(local_a8,&local_80);
    _ZN4core4iter6traits8iterator8Iterator5chain17hdcb7d762b52e317bE
              (local_50,local_a0,local_98 + local_a0,param_4,param_5 + param_4);
                    /* try { // try from 00170549 to 00170553 has its CatchHandler @ 001705ec */
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hac39029f6d8a5f03E
              (&local_e8,local_50);
                    /* try { // try from 0017055e to 00170568 has its CatchHandler @ 001705df */
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17ha26dee22509071d6E
                      (param_2,param_3,local_e0,local_d8);
                    /* try { // try from 00170569 to 00170573 has its CatchHandler @ 001705ec */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0b327608f4b568deE(&local_e8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h79de3313e0d66245E(local_a8);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h4767a6aafdc81322E
                      (uVar1);
  }
  if (lVar2 == 0) {
    local_e8._1_7_ = (undefined7)((ulong)local_e8 >> 8);
    local_e8 = CONCAT71(local_e8._1_7_,uVar3);
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17ha26dee22509071d6E
                      (param_2,param_3,&local_e8,1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h7b8303005c683faeE
              (uVar1);
  }
  return;
}
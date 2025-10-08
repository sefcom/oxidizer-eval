void _ZN7uu_uniq4Uniq10print_line17h83673033b9795089E
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               long param_6,char param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined uVar4;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined *local_70;
  undefined8 local_68;
  long **local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  long *local_40;
  undefined *local_38;
  
  uVar4 = 10;
  if (*(char *)(param_1 + 0x35) != '\0') {
    uVar4 = 0;
  }
  local_78 = param_6;
  if ((param_6 == 1 && *(byte *)(param_1 + 0x36) != 4) &&
     ((param_7 != '\0' || ((*(byte *)(param_1 + 0x36) | 2) == 3)))) {
    local_70 = (undefined *)CONCAT71(local_70._1_7_,uVar4);
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6df7c91e7a49ffa3E
                      (param_2,param_3,&local_70,1);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6fd0b16c849806ebE
                      (uVar1);
    if (lVar2 != 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6df7c91e7a49ffa3E
                      (param_2,param_3,param_4,param_5);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8767c281263d92b0E
                      (uVar1);
  }
  else {
    local_40 = &local_78;
    local_38 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001fc2e8
    ;
    local_70 = &DAT_001f46e0;
    local_68 = 2;
    local_50 = &DAT_00119460;
    local_48 = 1;
    local_60 = &local_40;
    local_58 = 1;
    local_80 = param_3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h5c88071545ab2f48E(&local_98,&local_70);
    lVar2 = local_90;
    uVar1 = local_98;
    _ZN4core4iter6traits8iterator8Iterator5chain17h9a7e3a90ed01e4ceE
              (&local_70,local_90,local_88 + local_90,param_4,param_5 + param_4);
                    /* try { // try from 0015cf13 to 0015cf1f has its CatchHandler @ 0015cfd3 */
    _ZN4core4iter6traits8iterator8Iterator7collect17h5ff8954b863752aeE(&local_98,&local_70);
    param_3 = local_80;
                    /* try { // try from 0015cf2a to 0015cf3c has its CatchHandler @ 0015cfc1 */
    uVar3 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6df7c91e7a49ffa3E
                      (param_2,local_80,local_90,local_88);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3f599eadcec40bb4E
              (local_98,local_90);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6d1453c045ffd4fdE(uVar1,lVar2);
    lVar2 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h8767c281263d92b0E
                      (uVar3);
  }
  if (lVar2 == 0) {
    local_70._1_7_ = (undefined7)((ulong)local_70 >> 8);
    local_70 = (undefined *)CONCAT71(local_70._1_7_,uVar4);
    uVar1 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6df7c91e7a49ffa3E
                      (param_2,param_3,&local_70,1);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h6fd0b16c849806ebE
              (uVar1);
  }
  return;
}
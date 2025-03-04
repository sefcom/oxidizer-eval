undefined *
_ZN5uu_dd6Output8new_fifo17h5805a896b59d1442E
          (undefined *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined auVar3 [16];
  undefined4 local_48;
  undefined8 local_44;
  byte local_3c;
  undefined local_3b;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  lVar1 = param_4[0x11];
  if (lVar1 == 0) {
LAB_001d7a7d:
    if (((*param_4 == 0) || ((int)*param_4 == 1)) && (param_4[1] == 0)) {
      *param_1 = 3;
    }
    else {
      local_3c = *(byte *)((long)param_4 + 0x92) ^ 1;
      local_3b = *(undefined *)((long)param_4 + 0x91);
      local_44 = (ulong)CONCAT16(*(undefined *)((long)param_4 + 0x96),0x100000001b6);
      iVar2 = _ZN5uu_dd17make_linux_oflags17hc5c67f9cb15d8524E((long)param_4 + 0x96);
      local_48 = extraout_EDX;
      if (iVar2 == 0) {
        local_48 = 0;
      }
      _ZN3std2fs11OpenOptions4open17h1ecb7e9f905cf1c8E(&local_38,&local_48,param_2,param_3);
      if (local_38 != 0) goto LAB_001d7af8;
      *param_1 = 2;
      *(undefined4 *)(param_1 + 4) = local_34;
    }
    *(long **)(param_1 + 0x10) = param_4;
  }
  else {
    _ZN3std2fs4File4open17h7106e998c3d1654bE(&local_38,param_2,param_3);
    if (local_38 == 0) {
      local_44 = CONCAT44(local_44._4_4_,local_34);
      local_48 = CONCAT31(local_48._1_3_,2);
                    /* try { // try from 001d7a3c to 001d7a54 has its CatchHandler @ 001d7b34 */
      auVar3 = _ZN5uu_dd4Dest4seek17hf206f28f02b500d6E(&local_48,lVar1);
      if (auVar3._0_8_ != 0) {
        auVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (auVar3._8_8_);
        *(undefined (*) [16])(param_1 + 8) = auVar3;
        *param_1 = 4;
        _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h3e1c9cbf5a8b743cE
                  (local_48,local_44 & 0xffffffff);
        return param_1;
      }
      _ZN4core3ptr32drop_in_place_LT_uu_dd__Dest_GT_17h3e1c9cbf5a8b743cE
                (local_48,local_44 & 0xffffffff);
      goto LAB_001d7a7d;
    }
LAB_001d7af8:
    auVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       (local_30);
    *(undefined (*) [16])(param_1 + 8) = auVar3;
    *param_1 = 4;
  }
  return param_1;
}
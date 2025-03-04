undefined8 *
_ZN5uu_dd5Input8new_file17h22226df40ef2e7a0E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined auVar2 [16];
  undefined4 local_58;
  int local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  int local_30;
  undefined4 uStack_2c;
  
  local_48 = 0x1b600000000;
  local_3c = 0;
  local_40 = 1;
  iVar1 = _ZN5uu_dd17make_linux_iflags17hef93cf202b98b41fE(param_4 + 0x40);
  if (iVar1 == 1) {
    local_48 = CONCAT44(local_48._4_4_,extraout_EDX);
  }
  _ZN3std2fs11OpenOptions4open17h1ecb7e9f905cf1c8E(&local_58,&local_48,param_2,param_3);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h24d6e52343c10c0cE
            (&local_38,&local_58,param_2);
  if (local_38 == 0) {
    local_54 = local_30;
    local_58 = 0;
    if (*(long *)(param_4 + 0x80) == 0) {
      local_58 = 0;
    }
    else {
                    /* try { // try from 001d6cc2 to 001d6cd7 has its CatchHandler @ 001d6d1f */
      auVar2 = _ZN5uu_dd6Source4skip17hb4d238ded1ebd635E(&local_58);
      local_30 = local_54;
      if (auVar2._0_8_ != 0) {
        auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (auVar2._8_8_);
        *(undefined (*) [16])(param_1 + 1) = auVar2;
        *param_1 = 1;
        _ZN4core3ptr34drop_in_place_LT_uu_dd__Source_GT_17hdffc88ceb2c212a0E(local_54);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 1) = local_58;
    *(int *)((long)param_1 + 0xc) = local_30;
    param_1[2] = param_4;
    *param_1 = 0;
  }
  else {
    param_1[1] = local_38;
    param_1[2] = CONCAT44(uStack_2c,local_30);
    *param_1 = 1;
  }
  return param_1;
}
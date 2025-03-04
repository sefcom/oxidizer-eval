undefined8 *
_ZN5uu_dd5Input8new_fifo17h35e5c2fb1b3ef304E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined auVar2 [16];
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined2 local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  
  local_34 = 0;
  local_3c = 0x1000001b6;
  iVar1 = _ZN5uu_dd17make_linux_iflags17hef93cf202b98b41fE(param_4 + 0x40);
  local_40 = extraout_EDX;
  if (iVar1 == 0) {
    local_40 = 0;
  }
  _ZN3std2fs11OpenOptions4open17h1ecb7e9f905cf1c8E(&local_30,&local_40,param_2,param_3);
  if (local_30 == 0) {
    local_44 = local_2c;
    local_48 = 2;
    if (*(long *)(param_4 + 0x80) == 0) {
      local_48 = 2;
    }
    else {
                    /* try { // try from 001d6dd1 to 001d6de6 has its CatchHandler @ 001d6e2f */
      auVar2 = _ZN5uu_dd6Source4skip17hb4d238ded1ebd635E(&local_48);
      local_2c = local_44;
      if (auVar2._0_8_ != 0) {
        auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                           (auVar2._8_8_);
        *(undefined (*) [16])(param_1 + 1) = auVar2;
        *param_1 = 1;
        _ZN4core3ptr34drop_in_place_LT_uu_dd__Source_GT_17hdffc88ceb2c212a0E(local_44);
        return param_1;
      }
    }
    *(undefined4 *)(param_1 + 1) = local_48;
    *(int *)((long)param_1 + 0xc) = local_2c;
    param_1[2] = param_4;
    *param_1 = 0;
  }
  else {
    auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       (local_28);
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 1;
  }
  return param_1;
}
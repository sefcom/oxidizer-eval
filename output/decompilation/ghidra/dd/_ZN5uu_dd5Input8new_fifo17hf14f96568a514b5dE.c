undefined8 *
_ZN5uu_dd5Input8new_fifo17hf14f96568a514b5dE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  
  local_24 = 0;
  local_2c = 0x1000001b6;
  auVar2 = _ZN5uu_dd17make_linux_iflags17h57fea4a25e7c1d02E(param_4 + 0x40);
  local_30 = 0;
  if ((auVar2 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    local_30 = auVar2._8_4_;
  }
  _ZN3std2fs11OpenOptions4open17h8d324e17fb255e3bE(&local_40,&local_30,param_2,param_3);
  if (local_40 == 1) {
    auVar1 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
             )(local_38);
    *(undefined (*) [16])(param_1 + 1) = auVar1;
    *param_1 = 1;
  }
  else {
    local_40 = 2;
    if (*(long *)(param_4 + 0x80) == 0) {
      local_40 = 2;
    }
    else {
                    /* try { // try from 0018fd64 to 0018fd7a has its CatchHandler @ 0018fdc4 */
      auVar1 = _ZN5uu_dd6Source4skip17h56a70907a2f0c0f8E(&local_40);
      if ((auVar1 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        auVar1 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
                 )(auVar1._8_8_);
        *(undefined (*) [16])(param_1 + 1) = auVar1;
        *param_1 = 1;
        _ZN4core3ptr34drop_in_place_LT_uu_dd__Source_GT_17h0f98b01c459a3648E(local_3c);
        return param_1;
      }
    }
    *(int *)(param_1 + 1) = local_40;
    *(int *)((long)param_1 + 0xc) = local_3c;
    param_1[2] = param_4;
    *param_1 = 0;
  }
  return param_1;
}
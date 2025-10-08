undefined *
_ZN5uu_dd6Output20new_file_from_stdout17h81f8b151240497b6E(undefined *param_1,long param_2)

{
  int __fd;
  undefined auVar1 [16];
  undefined auVar2 [12];
  int local_28;
  int local_24;
  undefined8 local_20;
  
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00246850)();
  _ZN6uucore4mods2io27OwnedFileDescriptorOrHandle4from17hf45d28f91650242cE(&local_28);
  __fd = local_24;
  if (local_28 == 1) {
    auVar1 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00246c68
             )(local_20);
    *(undefined (*) [16])(param_1 + 8) = auVar1;
    *param_1 = 4;
  }
  else {
    auVar2 = _ZN5uu_dd17make_linux_oflags17h8059fc6e2ea11e72E(param_2 + 0x96);
    if ((auVar2 & (undefined  [12])0x1) != (undefined  [12])0x0) {
      local_28 = 5;
      local_24 = auVar2._8_4_;
                    /* try { // try from 001909c9 to 001909df has its CatchHandler @ 00190a0d */
      auVar1 = (*(code *)PTR__ZN3nix5fcntl5fcntl17h43fde6b36e45e569E_00246d40)(__fd,&local_28);
      if ((auVar1 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        auVar1 = (*(code *)
                   PTR__ZN6uucore4mods5error143__LT_impl_u20_core__convert__From_LT_nix__errno__consts__Errno_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h33962f1716cd47acE_00246d48
                 )(auVar1._8_8_ & 0xffffffff);
        *(undefined (*) [16])(param_1 + 8) = auVar1;
        *param_1 = 4;
        _ZN4core3ptr49drop_in_place_LT_std__sys__fd__unix__FileDesc_GT_17he64f1a20ec47272aE(__fd);
        return param_1;
      }
    }
    _ZN5uu_dd6Output12prepare_file17hcfa8f7430863883aE(param_1,__fd,param_2);
  }
  return param_1;
}
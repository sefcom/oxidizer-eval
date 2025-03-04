undefined *
_ZN5uu_dd6Output20new_file_from_stdout17hc334670ba1ee52ecE(undefined *param_1,long param_2)

{
  int __fd;
  int iVar1;
  undefined8 uVar2;
  int extraout_EDX;
  ulong extraout_RDX;
  undefined auVar3 [16];
  int local_28;
  int local_24;
  undefined8 local_20;
  
  uVar2 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  _ZN6uucore4mods2io27OwnedFileDescriptorOrHandle4from17h0d5d1d40c82f1b03E(&local_28,uVar2);
  __fd = local_24;
  if (local_28 == 0) {
    iVar1 = _ZN5uu_dd17make_linux_oflags17hc5c67f9cb15d8524E(param_2 + 0x96);
    if (iVar1 == 1) {
      local_28 = 5;
      local_24 = extraout_EDX;
                    /* try { // try from 001d798d to 001d79a3 has its CatchHandler @ 001d79d1 */
      iVar1 = _ZN3nix5fcntl5fcntl17h80fd9880c7bb583bE(__fd,&local_28);
      if (iVar1 != 0) {
        auVar3 = _ZN6uucore4mods5error143__LT_impl_u20_core__convert__From_LT_nix__errno__consts__Errno_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7e1e2edf10393c3cE
                           (extraout_RDX & 0xffffffff);
        *(undefined (*) [16])(param_1 + 8) = auVar3;
        *param_1 = 4;
        _ZN4core3ptr66drop_in_place_LT_uucore__mods__io__OwnedFileDescriptorOrHandle_GT_17ha6ff79398227ae27E
                  (__fd);
        return param_1;
      }
    }
    _ZN5uu_dd6Output12prepare_file17h9725a129054f1a6aE(param_1,__fd,param_2);
  }
  else {
    auVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                       (local_20);
    *(undefined (*) [16])(param_1 + 8) = auVar3;
    *param_1 = 4;
  }
  return param_1;
}
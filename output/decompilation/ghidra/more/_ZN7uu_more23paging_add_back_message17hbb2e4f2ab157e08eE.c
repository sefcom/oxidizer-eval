undefined8
_ZN7uu_more23paging_add_back_message17hbb2e4f2ab157e08eE(short param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = _ZN9crossterm7command18write_command_ansi17h02c6c5b7e95a9c8aE(param_2,1);
  if (lVar1 == 0) {
    lVar1 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                      (param_2);
    if (lVar1 == 0) {
      lVar1 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17he47e3670e90f933eE
                        (param_2,"\n\r...back 1 page\n",0x11);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  uVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                    (lVar1);
  return uVar2;
}
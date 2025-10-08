undefined8 _ZN7uu_more23paging_add_back_message17hedfccf033ee11a1cE(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(short *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar1 = _ZN9crossterm7command18write_command_ansi17hc311d26e5a2b15cbE(param_2);
  if (lVar1 == 0) {
    lVar1 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
            )(param_2);
    if (lVar1 == 0) {
      lVar1 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0022d218
              )(param_2,&DAT_0011f8df,0x11);
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  uVar2 = (*(code *)
            PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
          )(lVar1);
  return uVar2;
}
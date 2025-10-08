undefined (*) [16] _ZN7uu_more10setup_term17h0836ea3f29ebee77E(undefined (*param_1) [16])

{
  ulong uVar1;
  long lVar2;
  undefined auVar3 [16];
  
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0022d430)();
  lVar2 = (*(code *)PTR__ZN9crossterm8terminal15enable_raw_mode17hd50a747b44e84432E_0022d3c8)();
  if (lVar2 == 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar1;
    auVar3 = auVar3 << 0x40;
  }
  else {
    auVar3 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
             )(lVar2);
  }
  *param_1 = auVar3;
  return param_1;
}
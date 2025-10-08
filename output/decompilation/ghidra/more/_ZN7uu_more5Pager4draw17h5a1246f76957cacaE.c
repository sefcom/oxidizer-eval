long _ZN7uu_more5Pager4draw17h5a1246f76957cacaE(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _ZN7uu_more5Pager10draw_lines17hf362fbee6ca4fba8E();
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = -1;
  if (!CARRY8(*(ulong *)(param_1 + 0x50),*(ulong *)(param_1 + 0x58))) {
    lVar1 = *(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x58);
  }
  uVar2 = _ZN4core3cmp3Ord3min17hb3329b13fb983db2E(*(undefined8 *)(param_1 + 0x70),lVar1);
  _ZN7uu_more5Pager11draw_prompt17hc5b983e1ff1da72eE(param_1,param_2,uVar2,param_3);
  lVar1 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
          )(param_2);
  if (lVar1 != 0) {
    lVar1 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
            )(lVar1);
    return lVar1;
  }
  return 0;
}
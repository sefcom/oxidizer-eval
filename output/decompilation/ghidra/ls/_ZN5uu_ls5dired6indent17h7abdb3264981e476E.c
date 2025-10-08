undefined8 _ZN5uu_ls5dired6indent17h7abdb3264981e476E(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_30 = &PTR_DAT_00386698;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  lVar1 = _ZN3std2io5Write9write_fmt17h700c3576e0a1d616E(param_1,&local_30);
  if (lVar1 != 0) {
    uVar2 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
            )(lVar1);
    return uVar2;
  }
  return 0;
}
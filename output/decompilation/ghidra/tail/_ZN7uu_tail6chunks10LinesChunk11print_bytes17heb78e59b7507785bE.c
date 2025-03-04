undefined8
_ZN7uu_tail6chunks10LinesChunk11print_bytes17heb78e59b7507785bE
          (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar1 = _ZN7uu_tail6chunks10LinesChunk15get_buffer_with17h9b4a89d9b9a529ffE(param_1,0);
  lVar2 = _ZN3std2io5impls58__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20_W_GT_9write_all17h889fb69209bd29d4E
                    (param_2,uVar1);
  if (lVar2 != 0) {
    uVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                      (lVar2);
  }
  return uVar3;
}
undefined8
_ZN7uu_tail6chunks10LinesChunk11print_bytes17h75a21001e86c00f1E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (*(code *)PTR__ZN7uu_tail6chunks10LinesChunk15get_buffer_with17h54ef59cabf575ca6E_0027d830
          )(param_1,param_3);
  lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h7989dfaf5a9a1bc8E
                    (param_2,uVar1);
  if (lVar2 != 0) {
    uVar1 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
            )(lVar2);
    return uVar1;
  }
  return 0;
}
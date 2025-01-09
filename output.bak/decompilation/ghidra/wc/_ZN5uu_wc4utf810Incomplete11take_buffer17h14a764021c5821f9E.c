void __rustcall uu_wc::utf8::Incomplete::take_buffer(long param_1)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(param_1 + 4);
  *(undefined *)(param_1 + 4) = 0;
  _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
            (uVar1,param_1,4,&PTR_s_src_uu_wc_src_utf8_mod_rs_00231590);
  return;
}
ulong __rustcall uu_wc::utf8::Incomplete::new(undefined8 param_1,long param_2)

{
  uint in_EAX;
  undefined auVar1 [16];
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  auVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                     (param_2,(long)&uStack_18 + 4,4,&PTR_DAT_00232550);
  core::slice::_<impl[T]>::copy_from_slice
            (auVar1._0_8_,auVar1._8_8_,param_1,param_2,&PTR_DAT_00232568);
  return param_2 << 0x20 | uStack_18 >> 0x20;
}
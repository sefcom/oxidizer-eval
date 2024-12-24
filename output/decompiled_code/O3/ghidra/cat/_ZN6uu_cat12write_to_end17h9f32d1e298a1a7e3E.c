long __rustcall uu_cat::write_to_end(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  long local_28;
  long local_20;
  
  local_20 = param_1 + param_2;
  local_28 = param_1;
  auVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_28);
  if (auVar2._0_8_ == 0) {
    uVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,param_1,param_2);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_cat_src_cat_rs_00219190);
  }
  else {
    uVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (auVar2._8_8_,param_1,param_2,&PTR_s_src_uu_cat_src_cat_rs_002191a8);
    uVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,uVar1);
    core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_cat_src_cat_rs_002191c0);
    param_2 = auVar2._8_8_;
  }
  return param_2;
}
long __rustcall
uu_cat::write_end(undefined8 param_1,long param_2,long param_3,char param_4,char param_5)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  long lStack_28;
  long lStack_20;
  
  if (param_5 != '\0') {
    if (param_4 == '\0') {
      pcVar2 = "\t";
      uVar3 = 1;
    }
    else {
      pcVar2 = "^I";
      uVar3 = 2;
    }
    lVar1 = write_nonprint_to_end(param_2,param_3,param_1,pcVar2,uVar3);
    return lVar1;
  }
  if (param_4 != '\0') {
    lVar1 = write_tab_to_end();
    return lVar1;
  }
  lStack_20 = param_2 + param_3;
  lStack_28 = param_2;
  auVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&lStack_28);
  if (auVar4._0_8_ == 0) {
    uVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_1,param_2,param_3);
    core::result::Result<T,E>::unwrap(uVar3,&PTR_s_src_uu_cat_src_cat_rs_00219190);
  }
  else {
    uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                      (auVar4._8_8_,param_2,param_3,&PTR_s_src_uu_cat_src_cat_rs_002191a8);
    uVar3 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_1,uVar3);
    core::result::Result<T,E>::unwrap(uVar3,&PTR_s_src_uu_cat_src_cat_rs_002191c0);
    param_3 = auVar4._8_8_;
  }
  return param_3;
}
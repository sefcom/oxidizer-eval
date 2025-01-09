ulong __rustcall uu_cat::write_tab_to_end(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = param_1 + param_2;
  local_40 = param_1;
  auVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                     (&local_40);
  uVar2 = auVar4._8_8_;
  if (auVar4._0_8_ != 0) {
    local_48 = 0;
    lVar3 = param_1;
    do {
      uVar1 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                        (uVar2,lVar3,param_2,&PTR_s_src_uu_cat_src_cat_rs_002187d8);
      uVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,uVar1);
      core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_cat_src_cat_rs_002187f0);
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(uVar2,param_2,&PTR_s_src_uu_cat_src_cat_rs_00218808);
      }
      if (*(char *)(lVar3 + uVar2) != '\t') {
        return local_48 + uVar2;
      }
      uVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,"^I",2);
      core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_cat_src_cat_rs_00218820);
      param_1 = lVar3 + uVar2 + 1;
      local_48 = local_48 + uVar2 + 1;
      local_38 = lVar3 + param_2;
      param_2 = param_2 - (uVar2 + 1);
      local_40 = param_1;
      auVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::position
                         (&local_40);
      uVar2 = auVar4._8_8_;
      lVar3 = param_1;
    } while (auVar4._0_8_ != 0);
  }
  uVar1 = _<std::io::stdio::StdoutLock_as_std::io::Write>::write_all(param_3,param_1,param_2);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_s_src_uu_cat_src_cat_rs_002187c0);
  return param_2;
}
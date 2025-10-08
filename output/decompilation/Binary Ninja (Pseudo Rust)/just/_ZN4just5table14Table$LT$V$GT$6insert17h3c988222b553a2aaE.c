
  fn just::table::Table$LT$V$GT$::insert::h3c988222b553a2aa(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = _$LT$just..set..Set$u20$as$u20$just..keyed..Keyed$GT$::key::hded57a836a19343e(arg2);
    let mut var_b0: ();
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h80c0a734d02c1192(&var_b0, 
        arg1, rax, rdx, arg2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$just..set..Set$GT$$GT$::hecc443bf5b384169(
        &var_b0)
}

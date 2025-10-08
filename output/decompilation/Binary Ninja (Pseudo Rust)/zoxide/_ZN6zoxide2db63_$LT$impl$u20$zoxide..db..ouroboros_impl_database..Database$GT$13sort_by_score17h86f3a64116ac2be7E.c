
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_10: i64 = arg2;
    let result: i64 =
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_unstable_by::hced4d99b9425b473(
        *arg1.byte_offset(8), *arg1.byte_offset(0x10), &var_10);
    *arg1.byte_offset(0x38) = 1;
    result
}

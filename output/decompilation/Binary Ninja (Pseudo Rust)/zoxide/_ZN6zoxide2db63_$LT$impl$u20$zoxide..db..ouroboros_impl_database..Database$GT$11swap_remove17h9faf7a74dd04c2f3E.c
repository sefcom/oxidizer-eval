
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::swap_remove::h9faf7a74dd04c2f3(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut var_38: ();
    alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hbd9d1074fb85a0a1(&var_38, arg1, arg2);
    let result: i64 =
        core::ptr::drop_in_place$LT$zoxide..db..dir..Dir$GT$::h491f1d2213b1aa6c(&var_38);
    *arg1.byte_offset(0x38) = 1;
    result
}

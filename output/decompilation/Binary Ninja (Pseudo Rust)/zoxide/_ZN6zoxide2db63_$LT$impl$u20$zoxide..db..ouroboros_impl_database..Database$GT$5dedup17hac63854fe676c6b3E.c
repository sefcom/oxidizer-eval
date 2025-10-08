
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::hac63854fe676c6b3(arg1: *mut c_void) -> i64

{
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_path::hd5683b0bd75aea2d(arg1);
    let mut result_1: i8 = 0;
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::dedup::_$u7b$$u7b$closure$u7d$$u7d$::h57e31e15f3cb23f2(&result_1, arg1);
    let result: i8 = result_1;
    *arg1.byte_offset(0x38) |= result;
    result
}

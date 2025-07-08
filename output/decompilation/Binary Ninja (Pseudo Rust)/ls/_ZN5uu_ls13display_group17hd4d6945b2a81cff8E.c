
  fn uu_ls::display_group::hd4d6945b2a81cff8(arg1: *mut i128, arg2: i32, arg3: i8) -> i64

{
    if arg3 == 0
    {
        /* tailcall */
        return uu_ls::cached_gid2grp::hde541e9dca776845(arg1, arg2);
    }
    
    let result_1: i64;
    let mut result: i64 = result_1;
    *result[4] = arg2;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(arg1, &*result[4]);
    result
}

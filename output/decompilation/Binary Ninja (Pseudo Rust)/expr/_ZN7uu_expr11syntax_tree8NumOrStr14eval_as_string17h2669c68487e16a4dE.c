
  fn uu_expr::syntax_tree::NumOrStr::eval_as_string::h2669c68487e16a4d(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    if *arg2 != -0x8000000000000000
    {
        let var_18_1: i128 = *arg2.byte_offset(0x10);
        let mut var_28: i128 = *arg2;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4c9da07ea4794d0b(arg1, &var_28);
        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(&var_28);
    }
    else
    {
        arg1[1] = arg2[3];
        *arg1 = *arg2.byte_offset(8);
    }
    
    arg1
}

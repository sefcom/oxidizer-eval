
  fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hfc488cc1793399d6(arg1: *mut i64, arg2: *mut i64)

{
    if !(0 + -(*arg2))
    {
        let zmm0: i128 = *arg2;
        *arg1.byte_offset(0x18) = *arg2.byte_offset(0x10);
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 0;
        return;
    }
    
    let mut var_30: i64;
    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::h95b949a2093f4bc3(&var_30, arg2[2], arg2[3]);
    let mut rax_2: i64;
    
    if var_30 != -0x8000000000000000
    {
        let zmm0_1: i128 = var_30;
        let var_20: i128;
        *arg1.byte_offset(0x18) = var_20;
        *arg1.byte_offset(8) = zmm0_1;
        rax_2 = 0;
    }
    else
    {
        arg1[1] = 2;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    /* tailcall */
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc755e5bc570b277(&arg2[1])
}

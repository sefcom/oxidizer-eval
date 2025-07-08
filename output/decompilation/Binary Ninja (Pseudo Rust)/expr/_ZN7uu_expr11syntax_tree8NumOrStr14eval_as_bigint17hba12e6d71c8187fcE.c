
  fn uu_expr::syntax_tree::NumOrStr::eval_as_bigint::hba12e6d71c8187fc(arg1: *mut i64, arg2: *mut i64) -> i512

{
    if *arg2 != -0x8000000000000000
    {
        let result: i128 = *arg2;
        *arg1.byte_offset(0x18) = *arg2.byte_offset(0x10);
        *arg1.byte_offset(8) = result;
        *arg1 = 0;
        return result;
    }
    
    let rdx_1: *mut c_void = arg2[3];
    let var_38_1: *mut c_void = rdx_1;
    let mut var_48: i128 = *arg2.byte_offset(8);
    let mut var_30: i64;
    num_bigint::bigint::convert::_$LT$impl$u20$num_traits..Num$u20$for$u20$num_bigint..bigint..BigInt$GT$::from_str_radix::hb9365f03b0604201(&var_30, *var_48[8], rdx_1);
    let mut rax_2: i64;
    
    if var_30 != -0x8000000000000000
    {
        let zmm0: i128 = var_30;
        let var_20: i128;
        *arg1.byte_offset(0x18) = var_20;
        *arg1.byte_offset(8) = zmm0;
        rax_2 = 0;
    }
    else
    {
        arg1[1] = 2;
        rax_2 = 1;
    }
    
    *arg1 = rax_2;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2134d78e0f3082f1(&var_48)
}

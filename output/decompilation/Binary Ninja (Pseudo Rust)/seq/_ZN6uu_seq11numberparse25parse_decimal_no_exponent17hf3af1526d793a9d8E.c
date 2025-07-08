
  fn uu_seq::numberparse::parse_decimal_no_exponent::hf3af1526d793a9d8(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: i64) -> *mut i64

{
    let mut var_70: i64;
    bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_70, arg2, arg3);
    let rax: i64 = var_70;
    let var_68: i8;
    let var_67: i128;
    
    if rax != -0x8000000000000000
    {
        let var_8f_1: i128 = var_67;
        let mut var_98: i64 = rax;
        let var_90_1: i8 = var_68;
        let rcx_3: i64 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(
            arg2, arg3, "-.", 2) + arg4;
        let r14_2: *mut c_void = !arg4 + arg3;
        
        if uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, &var_98) == 0
        {
            let var_78: i64;
            arg1[4] = var_78;
            let zmm0_1: i128 = var_98;
            *arg1.byte_offset(0x10) = var_67;
            *arg1 = zmm0_1;
            arg1[5] = rcx_3;
            arg1[6] = r14_2;
        }
        else
        {
            *arg1 = -0x7ffffffffffffffe;
            arg1[5] = rcx_3;
            arg1[6] = r14_2;
            core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_98);
        }
    }
    else
    {
        let var_38_1: i64 = *var_67[0xf];
        let mut var_48: i128 = var_68;
        core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(
            &var_48);
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    arg1
}

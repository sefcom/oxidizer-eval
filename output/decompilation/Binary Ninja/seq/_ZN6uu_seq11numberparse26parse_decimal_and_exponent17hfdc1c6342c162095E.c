
  int64_t* uu_seq::numberparse::parse_decimal_and_exponent::hfdc1c6342c162095(int64_t* arg1, char* arg2, void* arg3, int64_t arg4, void* arg5)

{
    void* rax;
    int64_t rdx;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg5 + 1, arg2, arg3);
    
    if (!rax)
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, arg5 + 1, arg3);
        /* no return */
    }
    
    char var_98;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&var_98, rax, rdx);
    
    if (var_98)
    {
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    else
    {
        bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_98, arg2, arg3);
        int64_t rax_2 = var_98;
        int64_t var_90;
        int128_t var_80;
        
        if (rax_2 != -0x8000000000000000)
        {
            int128_t var_67_1 = *var_90[1];
            int64_t var_70 = rax_2;
            char var_68_1 = var_90;
            
            if (arg5)
            {
                if (arg5 >= arg3)
                {
                    if (arg5 != arg3)
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg5);
                        /* no return */
                    }
                }
                else if (*(arg2 + arg5) <= 0xbf)
                {
                    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, arg5);
                    /* no return */
                }
            }
            
            core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&var_98, arg2, arg5);
            
            if (var_98)
            {
                label_4ce111:
                arg1[1] = 0;
                *arg1 = -0x7ffffffffffffffc;
                core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_70);
            }
            else
            {
                int64_t rcx_3 = 2;
                
                if (var_90 > 0)
                    rcx_3 = var_90 + 2;
                
                int64_t rax_5 = 1;
                
                if (var_90 < 0)
                    rax_5 = rcx_3;
                
                int64_t var_b0_1 = rax_5;
                int64_t rax_7 = arg4 + var_90;
                
                if (arg4 + var_90)
                    goto label_4ce111;
                
                int64_t rax_10;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(
                        arg2, arg3, "-.", 2))
                    rax_10 = rax_7;
                else
                {
                    rax_10 = rax_7 + 1;
                    
                    if (rax_7 + 1)
                        goto label_4ce111;
                }
                
                if (rax_10 >= var_b0_1)
                {
                    var_b0_1 = rax_10;
                    
                    if (rax_10 < 0)
                        goto label_4ce111;
                }
                
                void* r14_2 = ~arg4 + arg5;
                void* r14_3 = r14_2 - var_90;
                
                if (r14_2 >= var_90)
                    core::result::Result$LT$T$C$E$GT$::unwrap::h0ebacd778ae85bc5(r14_3 >> 0x3f);
                else
                    r14_3 = nullptr;
                
                if (!uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, 
                    &var_70))
                {
                    int64_t var_50;
                    arg1[4] = var_50;
                    int128_t zmm0_2 = var_70;
                    *(arg1 + 0x10) = var_80;
                    *arg1 = zmm0_2;
                    arg1[5] = var_b0_1;
                    arg1[6] = r14_3;
                }
                else
                {
                    *arg1 = -0x7ffffffffffffffe;
                    arg1[5] = var_b0_1;
                    arg1[6] = r14_3;
                    core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(
                        &var_70);
                }
            }
        }
        else
        {
            int64_t var_38_1 = var_80;
            int128_t var_48 = var_90;
            core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(
                &var_48);
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    
    return arg1;
}

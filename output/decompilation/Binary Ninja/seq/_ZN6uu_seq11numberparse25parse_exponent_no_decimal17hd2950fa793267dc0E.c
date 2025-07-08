
  int64_t* uu_seq::numberparse::parse_exponent_no_decimal::hd2950fa793267dc0(int64_t* arg1, char* arg2, void* arg3, void* arg4)

{
    void* rax;
    int64_t rdx;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg4 + 1, arg2, arg3);
    
    if (!rax)
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, arg4 + 1, arg3);
        /* no return */
    }
    
    char var_70;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&var_70, rax, rdx);
    
    if (var_70)
    {
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    else
    {
        bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_70, arg2, arg3);
        int64_t rax_1 = var_70;
        int64_t var_68;
        int128_t var_58;
        
        if (rax_1 != -0x8000000000000000)
        {
            int128_t var_8f_1 = *var_68[1];
            int64_t var_98 = rax_1;
            char var_90_1 = var_68;
            int64_t r12_1;
            
            if (uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, &var_98))
            {
                r12_1 = 2;
                
                if (var_68 > 0)
                    r12_1 = var_68 + 2;
                
                goto label_4cde00;
            }
            
            void* r12_2 = arg4 + var_68;
            
            if (!(arg4 + var_68))
            {
                void* rax_5 = 1;
                
                if (r12_2 >= 2)
                    rax_5 = r12_2;
                
                r12_1 = rax_5 + 0;
                label_4cde00:
                int64_t rbp_3 = var_68 >> 0x3f & -(var_68);
                
                if (!uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, 
                    &var_98))
                {
                    int64_t var_78;
                    arg1[4] = var_78;
                    int128_t zmm0_2 = var_98;
                    *(arg1 + 0x10) = var_58;
                    *arg1 = zmm0_2;
                    arg1[5] = r12_1;
                    arg1[6] = rbp_3;
                }
                else
                {
                    *arg1 = -0x7ffffffffffffffe;
                    arg1[5] = r12_1;
                    arg1[6] = rbp_3;
                    core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(
                        &var_98);
                }
            }
            else
            {
                arg1[1] = 0;
                *arg1 = -0x7ffffffffffffffc;
                core::ptr::drop_in_place$LT$bigdecimal..BigDecimal$GT$::h9ea64fcf6ce46304(&var_98);
            }
        }
        else
        {
            int64_t var_38_1 = var_58;
            int128_t var_48 = var_68;
            core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(
                &var_48);
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    
    return arg1;
}


  fn uu_seq::numberparse::parse_exponent_no_decimal::hd2950fa793267dc0(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: *mut c_void) -> *mut i64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg4.byte_offset(1), arg2, arg3);
    
    if rax == 0
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, arg4.byte_offset(1), arg3);
        /* no return */
    }
    
    let mut var_70: i8;
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i64$GT$::from_str::hb0cdd6b069f41ab1(&var_70, rax, rdx);
    
    if var_70 != 0
    {
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffc;
    }
    else
    {
        bigdecimal::impl_num::_$LT$impl$u20$num_traits..Num$u20$for$u20$bigdecimal..BigDecimal$GT$::from_str_radix::h190f4d397e37218e(&var_70, arg2, arg3);
        let rax_1: i64 = var_70;
        let var_68: i64;
        let var_58: i128;
        
        if rax_1 != -0x8000000000000000
        {
            let var_8f_1: i128 = *var_68[1];
            let mut var_98: i64 = rax_1;
            let var_90_1: i8 = var_68;
            let mut r12_1: i64;
            
            if uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, &var_98) != 0
            {
                r12_1 = 2;
                
                if var_68 > 0
                {
                    r12_1 = var_68 + 2;
                }
                
                goto 'label_4cde00;
            }
            
            let r12_2: *mut c_void = arg4.byte_offset(var_68);
            
            if !arg4.byte_offset(var_68)
            {
                let mut rax_5: *mut c_void = 1;
                
                if r12_2 >= 2
                {
                    rax_5 = r12_2;
                }
                
                r12_1 = rax_5.byte_offset(0);
                'label_4cde00:
                let rbp_3: i64 = var_68 >> 0x3f & -(var_68);
                
                if uu_seq::numberparse::is_minus_zero_float::hd0ffcc4c912113de(arg2, arg3, &var_98)
                    == 0
                {
                    let var_78: i64;
                    arg1[4] = var_78;
                    let zmm0_2: i128 = var_98;
                    *arg1.byte_offset(0x10) = var_58;
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
            let var_38_1: i64 = var_58;
            let mut var_48: i128 = var_68;
            core::ptr::drop_in_place$LT$bigdecimal..ParseBigDecimalError$GT$::h74d029f24c9f47db(
                &var_48);
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    
    arg1
}

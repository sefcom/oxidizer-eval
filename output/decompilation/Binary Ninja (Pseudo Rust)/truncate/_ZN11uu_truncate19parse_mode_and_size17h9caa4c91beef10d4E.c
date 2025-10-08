
  fn uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(arg1: u64, arg2: i64, arg3: i64) -> fn() -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h16e7859628600181(arg2, arg3);
    let mut r15: *mut c_void = rax;
    let mut r14: u64 = rdx;
    let mut var_68: *mut c_void = r15;
    let var_60: *mut c_void = rdx + r15;
    let mut rax_3: i8;
    let mut rdx_1: i32;
    rax_3 = core::str::validations::next_code_point::h3ece29adbd85c47a(&var_68, arg1);
    let mut result: fn() -> i64;
    
    if (rax_3 & 1) == 0
    {
        let mut var_38: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_38, r15, r14);
        *arg1 = 1;
        *(arg1 + 8) = var_38;
        let result_1: fn() -> i64;
        result = result_1;
        *(arg1 + 0x18) = result;
    }
    else
    {
        if rdx_1 <= 0x3e && TEST_BITQ(0x5000a82000000000, rdx_1)
        {
            let mut rax_5: *mut c_void;
            let mut rdx_2: u64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14);
            
            if rax_5 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            r14 = rdx_2;
            r15 = rax_5;
        }
        
        let mut var_58: i32;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_58, r15, r14);
        result = uu_truncate::TruncateMode::Absolute::haa52d8e79eacf4d9;
        let r12_2: u64 = rdx_1 - 0x25;
        
        if r12_2 > 0x19
        {
            goto 'label_459a0a;
        }
        
        match r12_2
        {
            0 =>
            {
                result = uu_truncate::TruncateMode::RoundUp::h3665611802199c24;
                
                if var_58 == 4
                {
                    goto 'label_459a16;
                }
                
                goto 'label_459a37;
            }
            1 | 2 | 3 | 4 | 5 | 7 | 9 | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 | 0x13 |
                0x14 | 0x15 | 0x16 | 0x18 =>
            {
                goto 'label_459a0a;
            }
            6 =>
            {
                result = uu_truncate::TruncateMode::Extend::h02181f0372cbefa4;
                
                if var_58 == 4
                {
                    goto 'label_459a16;
                }
                
                goto 'label_459a37;
            }
            8 =>
            {
                result = uu_truncate::TruncateMode::Reduce::ha51feeb989b1f368;
                
                if var_58 == 4
                {
                    goto 'label_459a16;
                }
                
                goto 'label_459a37;
            }
            0xa =>
            {
                result = uu_truncate::TruncateMode::RoundDown::h60d8b907aa2e6a29;
                'label_459a0a:
                
                if var_58 != 4
                {
                    'label_459a37:
                    let zmm0_1: i128 = var_58;
                    let var_48: i128;
                    *(arg1 + 0x10) = var_48;
                    *arg1 = zmm0_1;
                }
                else
                {
                    'label_459a16:
                    let var_50: i64;
                    let mut rdx_7: i64;
                    result = result(var_50);
                    *(arg1 + 8) = result;
                    *(arg1 + 0x10) = rdx_7;
                    *arg1 = 4;
                }
            }
            0x17 =>
            {
                result = uu_truncate::TruncateMode::AtMost::hf86653d9dfa9ec56;
                
                if var_58 == 4
                {
                    goto 'label_459a16;
                }
                
                goto 'label_459a37;
            }
            0x19 =>
            {
                result = uu_truncate::TruncateMode::AtLeast::hdca70991c1d34f87;
                
                if var_58 == 4
                {
                    goto 'label_459a16;
                }
                
                goto 'label_459a37;
            }
        }
    }
    
    result
}

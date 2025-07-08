
  fn uu_truncate::parse_mode_and_size::hbf18cbb89603c372(arg1: u64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha02f30b080304904(arg2, arg3);
    let mut r15: *mut c_void = rax;
    let mut r14: u64 = rdx;
    let mut var_68: *mut c_void = r15;
    let var_60: *mut c_void = rdx + r15;
    let mut rax_3: i32;
    let mut rdx_1: i32;
    rax_3 = core::str::validations::next_code_point::h369b2919962b1982(&var_68, arg1);
    let mut result: *mut i64;
    
    if rax_3 == 0
    {
        let mut var_38: i128;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&var_38, 
            r15, r14);
        *arg1 = 1;
        *(arg1 + 8) = var_38;
        let result_1: *mut i64;
        result = result_1;
        *(arg1 + 0x18) = result;
    }
    else
    {
        if rdx_1 <= 0x3e && TEST_BITQ(0x5000a82000000000, rdx_1)
        {
            let mut rax_5: *mut c_void;
            let mut rdx_2: u64;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if rax_5 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            r15 = rax_5;
            r14 = rdx_2;
        }
        
        let mut var_58: i32;
        result = uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_58, r15, r14);
        let mut rdi_4: fn() -> i64 = uu_truncate::TruncateMode::Absolute::h347de2dbbee0cf00;
        let r12_2: u64 = rdx_1 - 0x25;
        
        if r12_2 > 0x19
        {
            goto 'label_4ae4aa;
        }
        
        match r12_2
        {
            0 =>
            {
                rdi_4 = uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539;
                
                if var_58 == 3
                {
                    goto 'label_4ae4b6;
                }
                
                goto 'label_4ae4da;
            }
            1 | 2 | 3 | 4 | 5 | 7 | 9 | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 | 0x13 |
                0x14 | 0x15 | 0x16 | 0x18 =>
            {
                goto 'label_4ae4aa;
            }
            6 =>
            {
                rdi_4 = uu_truncate::TruncateMode::Extend::h27ea7d0ae1c2c8a5;
                
                if var_58 == 3
                {
                    goto 'label_4ae4b6;
                }
                
                goto 'label_4ae4da;
            }
            8 =>
            {
                rdi_4 = uu_truncate::TruncateMode::Reduce::h771393dc84ef47d0;
                
                if var_58 == 3
                {
                    goto 'label_4ae4b6;
                }
                
                goto 'label_4ae4da;
            }
            0xa =>
            {
                rdi_4 = uu_truncate::TruncateMode::RoundDown::h0cc310891f82e44a;
                'label_4ae4aa:
                
                if var_58 != 3
                {
                    'label_4ae4da:
                    let zmm0_1: i128 = var_58;
                    let var_48: i128;
                    *(arg1 + 0x10) = var_48;
                    *arg1 = zmm0_1;
                }
                else
                {
                    'label_4ae4b6:
                    let var_50: i64;
                    let mut rdx_5: i64;
                    result =
                        core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(rdi_4, var_50);
                    *(arg1 + 8) = result;
                    *(arg1 + 0x10) = rdx_5;
                    *arg1 = 3;
                }
            }
            0x17 =>
            {
                rdi_4 = uu_truncate::TruncateMode::AtMost::hdf07773400549dc0;
                
                if var_58 == 3
                {
                    goto 'label_4ae4b6;
                }
                
                goto 'label_4ae4da;
            }
            0x19 =>
            {
                rdi_4 = uu_truncate::TruncateMode::AtLeast::h331a3778f5ffdb1c;
                
                if var_58 == 3
                {
                    goto 'label_4ae4b6;
                }
                
                goto 'label_4ae4da;
            }
        }
    }
    
    result
}


  fn uu_numfmt::format::parse_suffix::h65381ef2a47d074c(arg1: u64, arg2: *mut i8, arg3: i64, arg4: i64 @ r13) -> *mut i8

{
    let var_20: i64 = arg4;
    
    if arg3 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "invalid number: ''invalid suffix…", 0x12);
    }
    
    let mut var_90: i32 = 0;
    let mut rbp: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h8acf7e79f75ef2f1(
        arg2, arg3, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x69, &var_90), 1);
    let mut var_a0: *mut i8 = arg2;
    let var_98: *mut c_void = &arg2[arg3];
    
    if rbp != 0
    {
        core::str::validations::next_code_point_reverse::h55d2d504630d5ed9(&var_a0, arg1);
    }
    
    let mut rax_3: i8;
    let mut rdx_1: i32;
    rax_3 = core::str::validations::next_code_point_reverse::h55d2d504630d5ed9(&var_a0, arg1);
    let mut var_60: i64;
    
    if (rax_3 & 1) != 0
    {
        let mut rax_4: u64 = rdx_1 - 0x45;
        let mut r12_2: u64;
        
        if rax_4 <= 0x15
        {
            match rax_4
            {
                0 =>
                {
                    arg4 = 5;
                }
                1 | 3 | 4 | 5 | 7 | 9 | 0xa | 0xc | 0xd | 0xe | 0x10 | 0x11 | 0x12 | 0x13 =>
                {
                    goto 'label_4698eb;
                }
                2 =>
                {
                    arg4 = 2;
                }
                6 =>
                {
                    arg4 = 0;
                }
                8 =>
                {
                    arg4 = 1;
                }
                0xb =>
                {
                    arg4 = 4;
                }
                0xf =>
                {
                    arg4 = 3;
                }
                0x14 =>
                {
                    arg4 = 7;
                }
                0x15 =>
                {
                    arg4 = 6;
                }
            }
            
            r12_2 = !rbp;
            goto 'label_469990;
        }
        
        'label_4698eb:
        rax_4 = rdx_1 - 0x3a < 0xfffffff6;
        
        if (rbp | rax_4) == 0
        {
            rbp = 2;
            r12_2 = 0;
            'label_469990:
            let r12_3: i64 = r12_2 + arg3;
            let mut rax_7: *mut i8;
            let mut rdx_5: *mut i64;
            rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_3, arg2, arg3);
            
            if rax_7 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, r12_3);
                /* no return */
            }
            
            let mut result: *mut i8 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_60, rax_7, rdx_5);
            let mut zmm0_2: i64;
            
            if var_60 == 0
            {
                let var_58: i64;
                zmm0_2 = var_58;
                'label_469a02:
                *(arg1 + 8) = zmm0_2;
                *(arg1 + 0x10) = arg4;
                *(arg1 + 0x11) = rbp;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                uu_numfmt::format::parse_suffix::_$u7b$$u7b$closure$u7d$$u7d$::h697123fed7d6da64(
                    &var_90);
                result = var_90;
                let var_88: i64;
                zmm0_2 = var_88;
                
                if result == -0x8000000000000000
                {
                    goto 'label_469a02;
                }
                
                *arg1 = result;
                *(arg1 + 8) = zmm0_2;
                let var_80: i64;
                *(arg1 + 0x10) = var_80;
            }
            return result;
        }
    }
    
    var_60 = 0;
    let var_58_1: *mut i8 = arg2;
    let var_50_1: i64 = arg3;
    let var_48_1: i8 = 1;
    let mut var_40: *mut i64 = &var_60;
    let var_38_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_90 = &data_5023a0;
    let var_88_1: i64 = 1;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i64 = &var_40;
    let var_78_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, &var_90)
}

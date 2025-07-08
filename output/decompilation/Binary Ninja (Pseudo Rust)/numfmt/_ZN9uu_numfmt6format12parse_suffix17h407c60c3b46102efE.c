
  fn uu_numfmt::format::parse_suffix::h407c60c3b46102ef(arg1: u64, arg2: *mut i8, arg3: *mut c_void, arg4: i64 @ r12) -> *mut i8

{
    let var_28: i64 = arg4;
    
    if arg3 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(
            arg1, "invalid number: ''invalid suffix…", 0x12);
    }
    
    let mut var_90: i32 = 0;
    let mut rbp: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(
        arg2, arg3, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x69, &var_90), 1);
    let mut var_a0: *mut i8 = arg2;
    let var_98: i64 = arg2.byte_offset(arg3);
    
    if rbp != 0
    {
        core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&var_a0, arg1);
    }
    
    let mut rax_3: i32;
    let mut rdx_1: i32;
    rax_3 = core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&var_a0, arg1);
    let mut var_60: i64;
    
    if rax_3 != 0
    {
        let mut rax_4: u64 = rdx_1 - 0x45;
        let mut rcx_4: *mut c_void;
        
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
                    goto 'label_4c348b;
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
            
            let rcx_3: u64 = !rbp;
            rax_4 = 0;
            rcx_4 = rcx_3 + arg3;
            
            if rcx_3 == -(arg3)
            {
                goto 'label_4c3565;
            }
            
            goto 'label_4c3537;
        }
        
        'label_4c348b:
        rax_4 = rdx_1 - 0x3a < 0xfffffff6;
        
        if (rbp | rax_4) == 0
        {
            rax_4 = 1;
            rbp = 2;
            rcx_4 = arg3;
            
            if 0 != -(arg3)
            {
                'label_4c3537:
                
                if rcx_4 < arg3
                {
                    if *arg2.byte_offset(rcx_4) > 0xbf
                    {
                        goto 'label_4c3565;
                    }
                    
                    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rcx_4);
                    /* no return */
                }
                
                if rax_4 != 0
                {
                    goto 'label_4c3565;
                }
                
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rcx_4);
                /* no return */
            }
            
            'label_4c3565:
            let mut result: *mut i8 = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&var_60, arg2, rcx_4);
            let mut zmm0_2: i64;
            
            if var_60 == 0
            {
                let var_58: i64;
                zmm0_2 = var_58;
                'label_4c35ab:
                *(arg1 + 8) = zmm0_2;
                *(arg1 + 0x10) = arg4;
                *(arg1 + 0x11) = rbp;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                uu_numfmt::format::parse_suffix::_$u7b$$u7b$closure$u7d$$u7d$::hc249515d7f336463(
                    &var_90);
                result = var_90;
                let var_88: i64;
                zmm0_2 = var_88;
                
                if result == -0x8000000000000000
                {
                    goto 'label_4c35ab;
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
    let var_50_1: *mut c_void = arg3;
    let var_48_1: i8 = 1;
    let mut var_40: *mut i64 = &var_60;
    let var_38_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_90 = &data_535ac0;
    let var_88_1: i64 = 1;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i64 = &var_40;
    let var_78_1: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_90)
}

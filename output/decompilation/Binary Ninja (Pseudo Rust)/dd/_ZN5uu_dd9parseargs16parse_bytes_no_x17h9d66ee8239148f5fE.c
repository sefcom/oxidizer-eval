
  fn uu_dd::parseargs::parse_bytes_no_x::h9d66ee8239148f5f(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i8, arg5: *mut c_void) -> i64

{
    let var_50: i16 = 0x101;
    let var_4e: i8 = 0;
    let mut var_70: i64 = 0;
    let var_60: i64 = 0;
    let mut rax: i64;
    let mut rdx: *mut c_void;
    rax = core::str::_$LT$impl$u20$str$GT$::find::he16eb61bb7887aec(arg4, arg5);
    let mut rax_1: i64;
    let mut rdx_1: *mut c_void;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h94ded9ee8a390a12(arg4, arg5, 0x77);
    let mut rax_2: i64;
    let mut rdx_2: *mut c_void;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::rfind::h94ded9ee8a390a12(arg4, arg5, 0x62);
    let mut result: i64;
    let mut var_a0: i64;
    let result_1: i64;
    let var_90: i128;
    let mut rax_3: i64;
    let mut rcx_1: i64;
    let mut rcx_2: i64;
    let mut r14_1: *mut i64;
    
    if rax == 0
    {
        if rax_1 == 0
        {
            if rax_2 == 0
            {
                uucore::parser::parse_size::Parser::parse_u64::ha54ade59619f41e4(&var_a0, &var_70, 
                    arg4, arg5);
                let rcx_7: i64 = var_a0;
                r14_1 = arg1;
                
                if rcx_7 < 2
                {
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_48, arg2, arg3);
                    let var_38: i64;
                    r14_1[3] = var_38;
                    *r14_1.byte_offset(8) = var_48;
                    *r14_1 = 0xd;
                    return core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hdd273fc407a2ace4(&var_a0);
                }
                
                let mut result_2: i64 = -1;
                
                if rcx_7 != 2
                {
                    result_2 = result_1;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::hdd273fc407a2ace4(&var_a0);
                rax_3 = result_2 * 1;
                
                if (result_2 * 1) >> 0x40 != {0}
                {
                    goto 'label_4d4735;
                }
                
                goto 'label_4d47fe;
            }
            
            uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(&var_a0, arg4, arg5, rdx_2);
            let rcx_4: i64 = var_a0;
            result = result_1;
            r14_1 = arg1;
            
            if rcx_4 != 0xe
            {
                *r14_1.byte_offset(0x10) = var_90;
                *r14_1 = rcx_4;
                r14_1[1] = result;
            }
            else
            {
                rax_3 = result * 0x200;
                
                if (result * 0x200) >> 0x40 != {0}
                {
                    'label_4d4735:
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &r14_1[1], arg2, arg3);
                    result = 8;
                    *r14_1 = result;
                }
                else
                {
                    'label_4d47fe:
                    r14_1[1] = rax_3;
                    result = 0xe;
                    *r14_1 = result;
                }
            }
        }
        else
        {
            if rax_2 == 0
            {
                uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(&var_a0, arg4, arg5, rdx_1);
                rcx_1 = var_a0;
                result = result_1;
                
                if rcx_1 != 0xe
                {
                    goto 'label_4d474d;
                }
                
                rcx_2 = 2;
                goto 'label_4d471a;
            }
            
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                &arg1[1], arg2, arg3);
            *arg1 = 7;
        }
    }
    else if (rax_1 | rax_2) != 0
    {
        result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
            &arg1[1], arg2, arg3);
        *arg1 = 7;
    }
    else
    {
        uu_dd::parseargs::parse_bytes_only::h08378519bfb033ce(&var_a0, arg4, arg5, rdx);
        rcx_1 = var_a0;
        result = result_1;
        
        if rcx_1 == 0xe
        {
            rcx_2 = 1;
            'label_4d471a:
            r14_1 = arg1;
            rax_3 = result * rcx_2;
            
            if (result * rcx_2) >> 0x40 == {0}
            {
                goto 'label_4d47fe;
            }
            
            goto 'label_4d4735;
        }
        
        'label_4d474d:
        *arg1.byte_offset(0x10) = var_90;
        *arg1 = rcx_1;
        arg1[1] = result;
    }
    result
}

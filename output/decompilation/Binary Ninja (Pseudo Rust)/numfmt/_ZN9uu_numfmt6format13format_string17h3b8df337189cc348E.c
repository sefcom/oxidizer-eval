
  fn uu_numfmt::format::format_string::h3b8df337189cc348(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: i8, arg6: i64) -> *mut *mut c_void

{
    let mut rbp: i64 = arg3;
    let mut r15: *mut i8 = arg2;
    let r12: i64 = *arg4.byte_offset(0x88);
    
    if -(r12) != -0x8000000000000000
    {
        let mut rax_2: *mut i8;
        let mut rdx_1: i64;
        rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(*arg4.byte_offset(0x90), *arg4.byte_offset(0x98), r15, rbp);
        
        if rax_2 != 0
        {
            rbp = rdx_1;
        }
        
        if rax_2 != 0
        {
            r15 = rax_2;
        }
    }
    
    let mut r12_1: i64;
    let mut r13: i8;
    
    if *arg4.byte_offset(0x10) != 1
    {
        r13 = arg4[0xb0];
        
        if r13 != 5
        {
            r12_1 = 0;
        }
        else
        {
            r13 = 5;
            
            if arg4[0xb1] != 5
            {
                r12_1 = 0;
            }
            else
            {
                r12_1 = uu_numfmt::format::parse_implicit_precision::hb5d21ae12bf7afed(r15, rbp);
            }
        }
    }
    else
    {
        r12_1 = *arg4.byte_offset(0x18);
        r13 = arg4[0xb0];
    }
    
    let mut result_2: *mut *mut c_void;
    uu_numfmt::format::transform_from::hcd3fb358ec05b121(&result_2, r15, rbp, 
        *arg4.byte_offset(0xa0), r13);
    let mut result: *mut *mut c_void = result_2;
    let var_100: i64;
    let zmm0: u128 = var_100;
    
    if result != -0x8000000000000000
    {
        arg1[1] = result;
        arg1[2] = zmm0;
        let var_f8: i64;
        arg1[3] = var_f8;
        *arg1 = 1;
    }
    else
    {
        let mut var_158: i32;
        uu_numfmt::format::transform_to::he005deddceb3df89(&var_158, *arg4.byte_offset(0xa8), 
            arg4[0xb1], arg4[0xca], r12_1, zmm0);
        let rax_4: i32 = var_158;
        let mut var_150: i128;
        let mut var_128: i128 = var_150;
        let mut result_3: *mut *mut c_void;
        let result_1: *mut *mut c_void = result_3;
        
        if rax_4 != 1
        {
            let mut var_68: i128 = var_128;
            let mut var_f0: fn(arg1: *mut i64, arg2: i64) -> i64;
            let mut var_b8: i128;
            let mut result_7: *mut *mut c_void;
            let mut var_98: *mut c_void;
            let mut rax_7: i64;
            let mut r12_2: i64;
            
            if r12 != -0x8000000000000000
            {
                var_98 = &arg4[0x88];
                result_2 = &var_68;
                let var_100_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_f8_1: *mut *mut c_void = &var_98;
                var_f0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hed06e343d9a3976c;
                var_158 = &data_4195a0;
                var_150 = 2;
                let var_138_1: i64 = 0;
                *var_150[8] = &result_2;
                result_3 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, &var_158);
                var_b8 = var_128;
                result_7 = result_1;
                rax_7 = arg6;
                
                if (*arg4 & 1) != 0
                {
                    r12_2 = *arg4.byte_offset(8);
                }
                else
                {
                    'label_46a7dc:
                    r12_2 = rax_7;
                    
                    if (arg5 & 1) == 0
                    {
                        r12_2 = *arg4.byte_offset(0xb8);
                    }
                }
            }
            else
            {
                result_7 = result_1;
                var_b8 = var_68;
                rax_7 = arg6;
                
                if (*arg4 & 1) == 0
                {
                    goto 'label_46a7dc;
                }
                
                r12_2 = *arg4.byte_offset(8);
            }
            
            let mut var_d8: i128;
            
            if r12_2 == 0
            {
                let result_8: *mut *mut c_void = result_7;
                var_d8 = var_b8;
            }
            else
            {
                let mut result_4: *mut *mut c_void;
                
                if r12_2 <= 0
                {
                    let rax_13: i64 = -(r12_2);
                    
                    if rax_13 > 0xffff
                    {
                        'label_46ac6a:
                        var_158 = &data_502460;
                        var_150 = 1;
                        *var_150[8] = 8;
                        result_3 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_158);
                        /* no return */
                    }
                    
                    result_2 = &var_b8;
                    let var_100_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_f8_4: i64 = 0;
                    var_f0 = rax_13;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    let var_138_4: *mut c_void = &data_41acd8;
                    let var_130_3: i64 = 1;
                    *var_150[8] = &result_2;
                    let var_140_2: i64 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_d8 = var_128;
                    result_4 = result_1;
                }
                else if arg4[0x51] != 1
                {
                    if r12_2 > 0xffff
                    {
                        goto 'label_46ac6a;
                    }
                    
                    result_2 = &var_b8;
                    let var_100_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_f8_5: i64 = 0;
                    var_f0 = r12_2;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    let var_138_5: *mut c_void = &data_41ad08;
                    let var_130_4: i64 = 1;
                    *var_150[8] = &result_2;
                    let var_140_3: i64 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_d8 = var_128;
                    result_4 = result_1;
                }
                else
                {
                    if r12_2 > 0xffff
                    {
                        goto 'label_46ac6a;
                    }
                    
                    let mut r15_1: i64 = rax_7;
                    result_2 = &var_b8;
                    let var_100_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    let var_f8_2: i64 = 0;
                    var_f0 = r12_2;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    let var_138_2: *mut c_void = &data_41ad38;
                    let var_130_1: i64 = 1;
                    *var_150[8] = &result_2;
                    let mut var_140: i64 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_98 = var_128;
                    
                    if (arg5 & 1) == 0
                    {
                        r15_1 = *arg4.byte_offset(0xb8);
                    }
                    
                    if r15_1 == 0
                    {
                        let result_5: *mut *mut c_void = result_1;
                        var_d8 = var_98;
                    }
                    else
                    {
                        if r15_1 <= 0
                        {
                            let r15_2: i64 = -(r15_1);
                            
                            if r15_2 > 0xffff
                            {
                                'label_46aca7:
                                var_158 = &data_502460;
                                var_150 = 1;
                                *var_150[8] = 8;
                                var_140 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_158);
                                /* no return */
                            }
                            
                            result_2 = &var_98;
                            let var_100_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            let var_f8_6: i64 = 0;
                            var_f0 = r15_2;
                            var_158 = &data_4198c0;
                            var_150 = 1;
                            let var_138_6: *mut c_void = &data_41acd8;
                            let var_130_5: i64 = 1;
                            *var_150[8] = &result_2;
                            let var_140_4: i64 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                                &var_158);
                        }
                        else
                        {
                            if r15_1 > 0xffff
                            {
                                goto 'label_46aca7;
                            }
                            
                            result_2 = &var_98;
                            let var_100_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            let var_f8_3: i64 = 0;
                            var_f0 = r15_1;
                            var_158 = &data_4198c0;
                            var_150 = 1;
                            let var_138_3: *mut c_void = &data_41ad08;
                            let var_130_2: i64 = 1;
                            *var_150[8] = &result_2;
                            let var_140_1: i64 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                                &var_158);
                        }
                        
                        var_d8 = var_128;
                        let result_6: *mut *mut c_void = result_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                            &var_98);
                    }
                }
            }
            
            var_158 = &arg4[0x20];
            var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            *var_150[8] = &var_d8;
            let var_140_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_138_7: *mut c_void = &arg4[0x38];
            let var_130_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_2 = &data_41aca8;
            let var_100_7: i64 = 3;
            let var_e8_1: i64 = 0;
            let var_f8_7: *mut i32 = &var_158;
            let var_f0_1: i64 = 3;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_48, &result_2);
            let var_38: i64;
            arg1[3] = var_38;
            *arg1.byte_offset(8) = var_48;
            *arg1 = 0;
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_d8);
            
            if r12_2 != 0
            {
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                    &var_b8);
            }
            
            if r12 != -0x8000000000000000
            {
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                    &var_68);
            }
        }
        else
        {
            result = result_1;
            arg1[3] = result;
            *arg1.byte_offset(8) = var_128;
            *arg1 = 1;
        }
    }
    
    result
}

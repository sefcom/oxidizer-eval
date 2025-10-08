
  fn ruff_python_formatter::string::normalize::normalize_string::hc4cd811eeabf866f(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64, arg5: i32, arg6: i8) -> i64

{
    let mut var_110: i64 = 0;
    let var_108: i64 = 1;
    let result: i64 = 0;
    let mut rbp: i64;
    rbp = (arg5 & 1) == 0;
    let mut var_80: i128;
    ruff_python_formatter::string::normalize::CharIndicesWithOffset::new::he6ebad22181f0bae(
        &var_80, arg2, arg3, arg4);
    let mut r15: i64;
    r15 = rbp;
    let mut var_70: i64;
    let mut rax_6: i64 = var_70;
    let var_e8: i64 = rax_6;
    let mut var_f8: i128 = var_80;
    let mut r15_1: i32 = 0x110001;
    let mut rbp_1: i64 = 0;
    let mut rcx_5: i64;
    
    loop
    {
        let mut var_d8_1: i32 = 0x110001;
        
        if r15_1 == 0x110001
        {
            let mut rdx: i32;
            rax_6 = _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_f8);
            r15_1 = rdx;
        }
        
        if r15_1 == 0x110000
        {
            if rbp_1 == 0
            {
                *arg1.byte_offset(8) = arg2;
                arg1[1] = arg3;
                *arg1 = -0x8000000000000000;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                    &var_110);
            }
            
            let mut rax_18: *mut c_void;
            let mut rdx_20: *mut c_void;
            rax_18 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_1, arg2, arg3);
            
            if rax_18 == 0
            {
                rcx_5 = arg3;
                break;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_18, rdx_20.byte_offset(rax_18));
            arg1[1] = result;
            *arg1 = var_110;
            return result;
        }
        
        let mut var_120: i64 = rax_6;
        let mut var_e0: i64;
        
        if r15_1 == 0xd
        {
            let mut rax_9: *mut c_void;
            let mut rdx_6: *mut c_void;
            rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, rax_6, arg2, arg3);
            
            if rax_9 == 0
            {
                rcx_5 = rax_6;
                break;
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_9, rdx_6.byte_offset(rax_9));
            core::option::Option$LT$T$GT$::get_or_insert_with::hb3641f26b9f0d361(&var_e0, &var_f8);
            
            if var_d8_1 == 0xa
            {
                var_d8_1 = 0x110001;
            }
            else
            {
                alloc::string::String::push::h0ede46164189e411(&var_110, 0xa);
            }
            
            rbp_1 = var_120 + 1;
        }
        else if (r15_1 == 0x7b || r15_1 == 0x7d) && arg6 != 0
        {
            var_80 = rbp_1;
            *var_80[8] = rax_6;
            var_70 = 0;
            let mut rax_7: *mut c_void;
            let mut rdx_2: *mut c_void;
            rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::hc52fb59378bf613f(&var_80, arg2, arg3);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_7, rdx_2.byte_offset(rax_7));
            alloc::string::String::push::h0ede46164189e411(&var_110, r15_1);
            rbp_1 = var_120 + 1;
        }
        else if arg5 < 0x40
        {
            if r15_1 == 0x5c
            {
                _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h770b4f8dca32ea06(&var_80, &var_f8);
                let mut var_60: i32;
                let mut r15_2: i32 = var_60;
                var_60 = 0x110001;
                
                if r15_2 == 0x110001
                {
                    r15_2 = _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_80);
                }
                
                if r15_2 == 0x5c
                {
                    let rax_11: i32 = var_d8_1;
                    var_d8_1 = 0x110001;
                    
                    if rax_11 != 0x110001
                    {
                        goto 'label_728cd0;
                    }
                    
                    _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_f8);
                    
                    if (arg5 & 2) == 0
                    {
                        'label_728cda:
                        
                        if r15_2 == (arg5 & 1) * 5 + 0x22
                        {
                            let rax_13: i32 = var_d8_1;
                            var_d8_1 = 0x110001;
                            
                            if rax_13 == 0x110001
                            {
                                _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_f8);
                            }
                            
                            let rsi_11: i64 = var_120;
                            let mut rax_14: *mut c_void;
                            let mut rdx_13: *mut c_void;
                            rax_14 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, rsi_11, arg2, arg3);
                            
                            if rax_14 == 0
                            {
                                rcx_5 = rsi_11;
                                break;
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_14, rdx_13.byte_offset(rax_14));
                            rbp_1 = var_120 + 1;
                        }
                        else if r15_2 == r15 * 5 + 0x22
                        {
                            let rax_15: i32 = var_d8_1;
                            var_d8_1 = 0x110001;
                            
                            if rax_15 == 0x110001
                            {
                                _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_f8);
                            }
                        }
                    }
                }
                else if r15_2 != 0x110000
                {
                    let mut rcx: i64 = 2;
                    let mut rax_8: i64 = 2;
                    
                    if r15_2 >= 0x80
                    {
                        rax_8 = 3;
                        
                        if r15_2 >= 0x800
                        {
                            rax_8 = 5 - 0;
                        }
                    }
                    
                    let mut var_c8: i64 = rax_8;
                    let mut rdx_11: i8;
                    
                    if r15_2 <= 0x74
                    {
                        if r15_2 != 0x4e
                        {
                            if r15_2 != 0x55 || (arg5 & 8) != 0
                            {
                                goto 'label_728c84;
                            }
                            
                            rcx = 8;
                            goto 'label_728baf;
                        }
                        
                        rdx_11 = 1;
                        
                        if (arg5 & 8) == 0
                        {
                            goto 'label_728bb1;
                        }
                        
                        goto 'label_728c84;
                    }
                    
                    if r15_2 == 0x78
                    {
                        goto 'label_728baf;
                    }
                    
                    let mut var_a0: *mut i8;
                    let mut var_48: i64;
                    
                    if r15_2 != 0x75 || (arg5 & 8) != 0
                    {
                        'label_728c84:
                        var_a0 = arg2;
                        let var_98_2: i64 = arg3;
                        let var_90_2: *mut i64 = &var_120;
                        let var_88_2: *mut i64 = &var_c8;
                        var_48 = -0x7fffffffffffffff;
                        'label_728ccb:
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..borrow..Cow$LT$str$GT$$GT$$GT$::hf21f357c1c799cf3(&var_48);
                        'label_728cd0:
                        
                        if (arg5 & 2) == 0
                        {
                            goto 'label_728cda;
                        }
                    }
                    else
                    {
                        rcx = 4;
                        'label_728baf:
                        rdx_11 = 0;
                        'label_728bb1:
                        var_a0 = arg2;
                        let var_98_1: i64 = arg3;
                        let var_90_1: *mut i64 = &var_120;
                        let var_88_1: *mut i64 = &var_c8;
                        ruff_python_formatter::string::normalize::normalize_string::_$u7b$$u7b$closure$u7d$$u7d$::h67cfe5df4b476716(&var_48, &var_a0, rdx_11, rcx);
                        
                        if var_48 == -0x7fffffffffffffff
                        {
                            goto 'label_728ccb;
                        }
                        
                        let mut var_b8: i128 = var_48;
                        let var_38: i64;
                        let mut r13_1: i64;
                        
                        if var_b8 != -0x8000000000000000
                        {
                            let r13_3: i64 = var_c8 + var_120;
                            let mut rax_16: *mut c_void;
                            let mut rdx_16: *mut c_void;
                            rax_16 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, r13_3, arg2, arg3);
                            
                            if rax_16 == 0
                            {
                                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rbp_1, 
                                    r13_3);
                                /* no return */
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_16, rdx_16.byte_offset(rax_16));
                            let rsi_15: i64 = *var_b8[8];
                            r13_1 = var_38;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rsi_15, rsi_15 + r13_1);
                            rbp_1 = r13_3 + r13_1;
                            goto 'label_728dc8;
                        }
                        
                        r13_1 = var_38;
                        
                        if r13_1 != -1
                        {
                            'label_728dc8:
                            let mut i_1: i64 = r13_1 + 1;
                            let mut i: i64;
                            
                            do
                            {
                                let rax_17: i32 = var_d8_1;
                                var_d8_1 = 0x110001;
                                
                                if rax_17 == 0x110001
                                {
                                    _$LT$ruff_python_formatter..string..normalize..CharIndicesWithOffset$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf58dafd35644a129(&var_f8);
                                }
                                
                                i = i_1;
                                i_1 -= 1;
                            } while i != 1;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::heb51e2f4908e5022(&var_b8);
                        
                        if (arg5 & 2) == 0
                        {
                            goto 'label_728cda;
                        }
                    }
                }
            }
            else if (arg5 & 2) == 0 && r15_1 == r15 * 5 + 0x22
            {
                let mut rax_10: *mut c_void;
                let mut rdx_9: *mut c_void;
                rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_1, rax_6, arg2, arg3);
                
                if rax_10 == 0
                {
                    rcx_5 = rax_6;
                    break;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_110, rax_10, rdx_9.byte_offset(rax_10));
                alloc::string::String::push::h0ede46164189e411(&var_110, 0x5c);
                alloc::string::String::push::h0ede46164189e411(&var_110, r15 * 5 + 0x22);
                rbp_1 = var_120 + 1;
            }
        }
        
        r15_1 = var_d8_1;
        rax_6 = var_e0;
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rbp_1, rcx_5);
    /* no return */
}

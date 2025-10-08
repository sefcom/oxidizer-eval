
  fn bat::preprocessor::replace_nonprintable::h23f167618004d5da(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let mut var_c0: i64 = 0;
    let result: i64 = 1;
    let var_b0: i64 = 0;
    let mut rax: i64 = 4;
    
    if arg4 != 0
    {
        rax = arg4;
    }
    
    if arg3 != 0
    {
        let rax_1: u64 = arg5;
        let mut rdx: *const i8 = "^J\n\x";
        
        if rax_1 != 0
        {
            rdx = &data_480d0c;
        }
        
        let mut r15_1: i64 = 0;
        let mut r13_1: i64 = 0;
        
        do
        {
            let rbp_1: *mut i8 = arg2.byte_offset(r15_1);
            let mut rax_5: i32;
            let mut rdx_1: i64;
            rax_5 = bat::preprocessor::try_parse_utf8_char::h1bda9850eb158fe9(rbp_1, arg3 - r15_1);
            let mut r12_1: i64;
            let mut var_a8: *mut i8;
            let mut var_a0: fn(arg1: *mut i8, arg2: *mut i64) -> u64;
            let mut var_88: *mut *mut [i8; 0x3];
            let mut var_80: i64;
            let mut var_78: *mut *mut i8;
            
            if rax_5 != 0x110000
            {
                r12_1 = rdx_1;
                
                if rax_5 == 9
                {
                    let mut rsi_6: i32;
                    let mut rbx_4: i64;
                    
                    if (r13_1 | rax) >> 0x20 == 0
                    {
                        rbx_4 = rax - COMBINE(0, r13_1) % rax;
                        rsi_6 = 0x21b9;
                        
                        if rbx_4 != 1
                        {
                            'label_83e1a9:
                            alloc::string::String::push::h0ede46164189e411(&var_c0, 0x251c);
                            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(
                                &var_88, &data_5a2c43, 3, rbx_4 - 2);
                            let var_98_1: *mut *mut i8 = var_78;
                            var_a8 = var_88;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, var_a0, var_78.byte_offset(var_a0));
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_a8);
                            rsi_6 = 0x2524;
                        }
                    }
                    else
                    {
                        rbx_4 = rax - COMBINE(0, r13_1) % rax;
                        rsi_6 = 0x21b9;
                        
                        if rbx_4 != 1
                        {
                            goto 'label_83e1a9;
                        }
                    }
                    alloc::string::String::push::h0ede46164189e411(&var_c0, rsi_6);
                    r13_1 = 0;
                }
                else if rax_5 == 0xa
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, rdx, &rdx[rax_1 + 3]);
                    r13_1 = 0;
                }
                else
                {
                    r13_1 += 1;
                    
                    if rax_5 == 0x20
                    {
                        alloc::string::String::push::h0ede46164189e411(&var_c0, 0xb7);
                    }
                    else if rax_5 >= 0x20
                    {
                        if rax_5 == 0x7f
                        {
                            if arg5 != 0
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_c0, 0x2421);
                            }
                            else
                            {
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, "^?^J\n\x", "^J\n\x");
                            }
                        }
                        else if rax_5 - 0x30 < 0xa || (rax_5 & 0xffffffdf) - 0x41 < 0x1a
                        {
                            alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5);
                        }
                        else
                        {
                            let mut rcx_2: i32;
                            rcx_2 = rax_5 - 0x21 < 0x5e;
                            rcx_2 |= core::char::methods::_$LT$impl$u20$char$GT$::is_ascii_punctuation::h348b82be49b67f60(rax_5);
                            
                            if rcx_2 != 0
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5);
                            }
                            else
                            {
                                core::escape::escape_unicode::h2f19778bfba7c65a(&var_88, rax_5);
                                var_a0 = var_80;
                                var_a8 = var_88;
                                core::iter::traits::iterator::Iterator::collect::h8a30b08ce65e21f9(
                                    &var_88, &var_a8);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, var_80, var_78.byte_offset(var_80));
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_88);
                            }
                        }
                    }
                    else if arg5 != 0
                    {
                        alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5 | 0x2400);
                    }
                    else
                    {
                        let mut var_8c: i32 = rax_5 | 0x40;
                        var_a8 = &var_8c;
                        var_a0 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        var_88 = &data_ace970;
                        var_80 = 1;
                        let var_68_2: i64 = 0;
                        var_78 = &var_a8;
                        let var_70_2: i64 = 1;
                        _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(&var_c0, &var_88);
                    }
                }
            }
            else
            {
                var_a8 = rbp_1;
                var_a0 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i8$GT$::fmt::hc03941a1f9bbbf93;
                var_88 = &data_ace980;
                var_80 = 1;
                let var_68_1: *mut c_void = &data_5a2c50;
                let var_60_1: i64 = 1;
                var_78 = &var_a8;
                let var_70_1: i64 = 1;
                _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(&var_c0, &var_88);
                r12_1 = 1;
            }
            r15_1 += r12_1;
        } while r15_1 < arg3;
    }
    
    arg1[2] = var_b0;
    *arg1 = var_c0;
    arg1[1] = result;
    result
}


  fn uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut var_170: i64 = 0;
    let var_168: i64 = 8;
    let var_160: i64 = 0;
    let mut var_100: i64 = arg2;
    let var_f8: i64 = arg2 + arg3 * 0x18;
    let mut var_f0: i64 = 1;
    let mut rsi: i64 = 1;
    let mut r14: u32 = 0;
    'label_4caee0:
    var_f0 = 0;
    let mut rax_2: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hb9a07d8be83b1a58(&var_100, rsi);
    let mut var_158: i128;
    let mut var_148: u64;
    let mut rcx_4: *mut i64;
    let mut zmm0_2: i128;
    
    if rax_2 == 0
    {
        'label_4cb2e6:
        
        if (r14 & 1) != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                &var_158);
            rcx_4 = arg1;
            rcx_4[3] = var_148;
            zmm0_2 = var_158;
            'label_4cb375:
            *rcx_4.byte_offset(8) = zmm0_2;
            *rcx_4 = 1;
            'label_4cb385:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_170);
            return arg1;
        }
        
        'label_4cb2f2:
        
        if var_160 == 0
        {
            __builtin_memcpy(&var_158, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\xf0\xf8\x4c\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
            let var_138_2: i8 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_170, &var_158);
        }
        
        arg1[3] = var_160;
        *arg1.byte_offset(8) = var_170;
        *arg1 = 0;
        return arg1;
    }
    
    loop
    {
        let mut var_198: i128;
        let mut var_188: i64;
        let mut var_150: i128;
        let mut var_140: i64;
        
        if (r14 & 1) != 0
        {
            uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, 
                *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
            let cond:0_1: bool = var_158 != 0;
            var_198 = var_150;
            var_188 = var_140;
            
            if cond:0_1
            {
                rcx_4 = arg1;
                rcx_4[3] = var_188;
                zmm0_2 = var_198;
                goto 'label_4cb375;
            }
            
            let var_d8_1: i64 = var_188;
            let mut var_e8: i128 = var_198;
            let mut var_90: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&var_90, &var_e8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&var_170, &var_90);
            r14 = 0;
        }
        else
        {
            let rbx_1: u64 = *rax_2.byte_offset(8);
            let r12_1: u64 = *rax_2.byte_offset(0x10);
            let mut var_130: u64;
            let mut var_128: u64;
            let mut var_120: i64;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(rbx_1, 
                r12_1, "----format=missing format specif…", 2) == 0
            {
                var_158 = 0;
                let mut rax_11: i64;
                let mut rdx_2: u64;
                rax_11 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_158);
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
                    rbx_1, r12_1, rax_11, rdx_2) != 0
                {
                    let mut var_118: i64 = 0;
                    let var_110_1: i64 = 1;
                    let var_108_1: i64 = 0;
                    var_130 = rbx_1;
                    var_128 = r12_1 + rbx_1;
                    var_120 = 1;
                    let mut rsi_13: i64 = 1;
                    
                    loop
                    {
                        let mut rax_13: u32;
                        let mut rdx_4: u32;
                        
                        if rsi_13 == 0
                        {
                            rdx_4 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc19b1af496d38725(&var_130);
                            
                            if rdx_4 == 0x110000
                            {
                                break;
                            }
                        }
                        else
                        {
                            var_120 = 0;
                            
                            if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_130, rsi_13) != 0
                            {
                                break;
                            }
                            
                            rax_13 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                                &var_130, rbx_1);
                            
                            if rax_13 == 0
                            {
                                break;
                            }
                            
                            if rdx_4 == 0x110000
                            {
                                break;
                            }
                        }
                        
                        if (r14 & 1) != 0
                        {
                            alloc::string::String::push::h859ae11851fd8b8e(&var_118, rdx_4);
                            rax_13 = r14;
                        }
                        else
                        {
                            let rcx_2: u64 = rdx_4 - 0x41;
                            
                            if rcx_2 > 0x36
                            {
                                'label_4cb1ff:
                                uu_od::parse_formats::od_argument_traditional_format::h14da6a638cd1f622(&var_198, rdx_4);
                                
                                if var_198 != 3
                                {
                                    var_148 = var_188;
                                    var_158 = var_198;
                                    let var_138_1: i8 = 0;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_170, 
                                        &var_158);
                                }
                                
                                rax_13 = r14;
                            }
                            else
                            {
                                rax_13 = 1;
                                
                                if rcx_2 != 0x33
                                {
                                    if TEST_BITQ(0x40020000042001, rcx_2)
                                    {
                                        break;
                                    }
                                    
                                    goto 'label_4cb1ff;
                                }
                            }
                        }
                        
                        rsi_13 = var_120;
                        r14 = rax_13;
                    }
                    
                    if var_108_1 != 0
                    {
                        uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, 
                            var_110_1, var_108_1);
                        let cond:3_1: bool = var_158 != 0;
                        var_198 = var_150;
                        var_188 = var_140;
                        
                        if cond:3_1
                        {
                            arg1[3] = var_188;
                            *arg1.byte_offset(8) = var_198;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_118);
                            goto 'label_4cb385;
                        }
                        
                        let var_98_1: i64 = var_188;
                        let mut var_a8: i128 = var_198;
                        let mut var_50: ();
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&var_50, &var_a8);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&var_170, &var_50);
                        r14 = 0;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                        &var_118);
                }
            }
            else
            {
                if r12_1 == 2
                {
                    break;
                }
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
                    rbx_1, r12_1, "--format=missing format specific…", 9) != 0
                {
                    var_150 = rbx_1;
                    var_148 = rbx_1 + r12_1;
                    var_140 = 0;
                    var_158 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hb93a52d6c1b4019e(&var_130, &var_158);
                    uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, var_128, 
                        var_120);
                    let cond:2_1: bool = var_158 != 0;
                    var_198 = var_150;
                    var_188 = var_140;
                    
                    if cond:2_1
                    {
                        arg1[3] = var_188;
                        *arg1.byte_offset(8) = var_198;
                        *arg1 = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                            &var_130);
                        goto 'label_4cb385;
                    }
                    
                    let var_b8_1: i64 = var_188;
                    let mut var_c8: i128 = var_198;
                    let mut var_70: ();
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&var_70, &var_c8);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&var_170, &var_70);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                        &var_130);
                }
                
                r14 = r14;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(rbx_1, r12_1, "--formatEL2NSYNCENOTCONN'; only …", 8) != 0
                {
                    r14 = 1;
                }
            }
        }
        rsi = var_f0;
        
        if rsi != 0
        {
            goto 'label_4caee0;
        }
        
        rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h599d6995f23da721(&var_100);
        
        if rax_2 == 0
        {
            goto 'label_4cb2e6;
        }
    }
    
    goto 'label_4cb2f2;
}


  int64_t uu_od::parse_formats::parse_format_flags::h00045988d9e2fcd1(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t var_178 = 0;
    int64_t var_170 = 8;
    int64_t result = 0;
    void* var_118 = arg2;
    int64_t var_108 = 1;
    int64_t rsi = 1;
    uint32_t r14 = 0;
    int32_t var_148;
    
    while (true)
    {
        int128_t var_140;
        void* rbp_1;
        
        if (rsi)
        {
            var_108 = 0;
            void* rax_18 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hcdc63d1cbb98d114(&var_118, rsi);
            rbp_1 = rax_18;
            
            if (rax_18)
                goto label_46994c;
            
            label_469d17:
            
            if (!(r14 & 1))
                break;
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_148, "missing format specification aft…", 0x34);
            arg1[3] = *var_140[8];
            *(arg1 + 8) = var_148;
            *arg1 = 1;
        }
        else
        {
            rbp_1 = var_118;
            
            if (rbp_1 == arg2 + arg3 * 0x18)
                goto label_469d17;
            
            var_118 = rbp_1 + 0x18;
            label_46994c:
            int128_t var_198;
            int64_t var_188;
            int64_t var_130;
            void var_90;
            
            if (!(r14 & 1))
            {
                int64_t var_160;
                int64_t var_158;
                int64_t var_150;
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(
                    *(rbp_1 + 8), *(rbp_1 + 0x10), "----format=missing format specif…", 2))
                {
                    int64_t r15_1 = *(rbp_1 + 8);
                    int64_t r13_1 = *(rbp_1 + 0x10);
                    var_148 = 0;
                    int64_t var_100;
                    
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(
                        r15_1, r13_1, 
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_148), 1))
                    {
                        rsi = var_108;
                        continue;
                    }
                    else
                    {
                        int64_t rax_13 = *(rbp_1 + 8);
                        int64_t rcx_6 = *(rbp_1 + 0x10) + rax_13;
                        var_100 = 0;
                        int64_t var_f8_1 = 1;
                        int64_t var_f0_1 = 0;
                        var_160 = rax_13;
                        var_158 = rcx_6;
                        var_150 = 1;
                        int64_t rsi_13 = 1;
                        
                        while (true)
                        {
                            if (rsi_13)
                            {
                                var_150 = 0;
                                
                                if (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_160, rsi_13))
                                    break;
                            }
                            
                            uint32_t rax_14;
                            int32_t rdx_3;
                            rax_14 = core::str::validations::next_code_point::h48ce1982219e5e58(
                                &var_160, &var_90);
                            
                            if (!(rax_14 & 1))
                                break;
                            
                            if (rdx_3 == 0x110000)
                                break;
                            
                            if (r14 & 1)
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_100, rdx_3);
                                rax_14 = r14;
                            }
                            else
                            {
                                uint64_t rcx_8 = rdx_3 - 0x41;
                                
                                if (rcx_8 > 0x36)
                                {
                                    label_469c0b:
                                    uu_od::parse_formats::od_argument_traditional_format::he40ef48eb83c8f75(&var_198, rdx_3);
                                    
                                    if (var_198 != 3)
                                    {
                                        var_140 = var_188;
                                        var_148 = var_198;
                                        char var_128_1 = 0;
                                        alloc::vec::Vec$LT$T$C$A$GT$::push::h50f7d4baac607dc5(
                                            &var_178, &var_148);
                                    }
                                    
                                    rax_14 = r14;
                                }
                                else
                                {
                                    rax_14 = 1;
                                    
                                    if (rcx_8 != 0x33)
                                    {
                                        if (TEST_BITQ(0x40020000042001, rcx_8))
                                            break;
                                        
                                        goto label_469c0b;
                                    }
                                }
                            }
                            
                            rsi_13 = var_150;
                            r14 = rax_14;
                        }
                        
                        if (!var_f0_1)
                            goto label_469914;
                        
                        uu_od::parse_formats::parse_type_string::h86db81d598ba34e9(&var_148, 
                            var_f8_1, var_f0_1);
                        int32_t rax_16 = var_148;
                        var_198 = var_140;
                        var_188 = var_130;
                        
                        if (rax_16 != 1)
                        {
                            int64_t var_98_1 = var_188;
                            int128_t var_a8 = var_198;
                            void var_50;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h069ee36a326a92fc(&var_50, &var_a8);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hef7635b34c01e0c6(&var_178, &var_50);
                            r14 = 0;
                            label_469914:
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(&var_100);
                            rsi = var_108;
                            continue;
                        }
                    }
                    
                    arg1[3] = var_188;
                    *(arg1 + 8) = var_198;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                        &var_100);
                }
                else
                {
                    int64_t rsi_5 = *(rbp_1 + 0x10);
                    
                    if (rsi_5 == 2)
                        goto label_469d17;
                    
                    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(
                            *(rbp_1 + 8), rsi_5, "--format=missing format specific…", 9))
                        goto label_469adf;
                    
                    int64_t rax_7 = *(rbp_1 + 8);
                    var_140 = rax_7;
                    *var_140[8] = *(rbp_1 + 0x10) + rax_7;
                    var_130 = 0;
                    var_148 = 1;
                    core::iter::traits::iterator::Iterator::collect::h757dc0c5ca00baee(&var_160, 
                        &var_148);
                    uu_od::parse_formats::parse_type_string::h86db81d598ba34e9(&var_148, var_158, 
                        var_150);
                    int32_t rax_8 = var_148;
                    var_198 = var_140;
                    var_188 = var_130;
                    
                    if (rax_8 == 1)
                    {
                        arg1[3] = var_188;
                        *(arg1 + 8) = var_198;
                        *arg1 = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                            &var_160);
                    }
                    else
                    {
                        int64_t var_b8_1 = var_188;
                        int128_t var_c8 = var_198;
                        void var_70;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h069ee36a326a92fc(&var_70, &var_c8);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hef7635b34c01e0c6(&var_178, &var_70);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0ecbbb68ed17b0f1(
                            &var_160);
                        label_469adf:
                        r14 = r14;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9f07ce88a1e9a8f(*(rbp_1 + 8), *(rbp_1 + 0x10), "--formatEL2NSYNCENOTCONN'; only …", 8))
                            r14 = 1;
                        
                        rsi = var_108;
                        continue;
                    }
                }
            }
            else
            {
                uu_od::parse_formats::parse_type_string::h86db81d598ba34e9(&var_148, *(rbp_1 + 8), 
                    *(rbp_1 + 0x10));
                int32_t rax_3 = var_148;
                var_198 = var_140;
                var_188 = var_130;
                
                if (rax_3 == 1)
                    arg1[3] = var_188;
                else
                {
                    int64_t var_d8_1 = var_188;
                    int128_t var_e8 = var_198;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h069ee36a326a92fc(&var_90, &var_e8);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::hef7635b34c01e0c6(&var_178, &var_90);
                    r14 = 0;
                    rsi = var_108;
                    continue;
                }
                
                *(arg1 + 8) = var_198;
                *arg1 = 1;
            }
        }
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_178, var_170);
    }
    
    if (!result)
    {
        __builtin_memcpy(&var_148, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x40\xe0\x46\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
        char var_128_2 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h50f7d4baac607dc5(&var_178, &var_148);
    }
    
    arg1[3] = result;
    *(arg1 + 8) = var_178;
    *arg1 = 0;
    return result;
}

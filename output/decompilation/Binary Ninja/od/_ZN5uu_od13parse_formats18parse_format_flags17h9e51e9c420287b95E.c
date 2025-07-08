
  int64_t* uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_170 = 0;
    int64_t var_168 = 8;
    int64_t var_160 = 0;
    int64_t var_100 = arg2;
    int64_t var_f8 = arg2 + arg3 * 0x18;
    int64_t var_f0 = 1;
    int64_t rsi = 1;
    uint32_t r14 = 0;
    label_4caee0:
    var_f0 = 0;
    void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hb9a07d8be83b1a58(&var_100, rsi);
    int128_t var_158;
    uint64_t var_148;
    int64_t* rcx_4;
    int128_t zmm0_2;
    
    if (!rax_2)
    {
        label_4cb2e6:
        
        if (r14 & 1)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                &var_158);
            rcx_4 = arg1;
            rcx_4[3] = var_148;
            zmm0_2 = var_158;
            label_4cb375:
            *(rcx_4 + 8) = zmm0_2;
            *rcx_4 = 1;
            label_4cb385:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_170);
            return arg1;
        }
        
        label_4cb2f2:
        
        if (!var_160)
        {
            __builtin_memcpy(&var_158, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\xf0\xf8\x4c\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x07\x00\x00\x00\x00\x00\x00\x00", 0x20);
            char var_138_2 = 0;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_170, &var_158);
        }
        
        arg1[3] = var_160;
        *(arg1 + 8) = var_170;
        *arg1 = 0;
        return arg1;
    }
    
    while (true)
    {
        int128_t var_198;
        int64_t var_188;
        int128_t var_150;
        int64_t var_140;
        
        if (r14 & 1)
        {
            uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, *(rax_2 + 8), 
                *(rax_2 + 0x10));
            bool cond:0_1 = var_158;
            var_198 = var_150;
            var_188 = var_140;
            
            if (cond:0_1)
            {
                rcx_4 = arg1;
                rcx_4[3] = var_188;
                zmm0_2 = var_198;
                goto label_4cb375;
            }
            
            int64_t var_d8_1 = var_188;
            int128_t var_e8 = var_198;
            void var_90;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&var_90, &var_e8);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&var_170, &var_90);
            r14 = 0;
        }
        else
        {
            uint64_t rbx_1 = *(rax_2 + 8);
            uint64_t r12_1 = *(rax_2 + 0x10);
            uint64_t var_130;
            uint64_t var_128;
            int64_t var_120;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(rbx_1, 
                r12_1, "----format=missing format specif…", 2))
            {
                var_158 = 0;
                int64_t rax_11;
                uint64_t rdx_2;
                rax_11 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_158);
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
                    rbx_1, r12_1, rax_11, rdx_2))
                {
                    int64_t var_118 = 0;
                    int64_t var_110_1 = 1;
                    int64_t var_108_1 = 0;
                    var_130 = rbx_1;
                    var_128 = r12_1 + rbx_1;
                    var_120 = 1;
                    int64_t rsi_13 = 1;
                    
                    while (true)
                    {
                        uint32_t rax_13;
                        uint32_t rdx_4;
                        
                        if (!rsi_13)
                        {
                            rdx_4 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc19b1af496d38725(&var_130);
                            
                            if (rdx_4 == 0x110000)
                                break;
                        }
                        else
                        {
                            var_120 = 0;
                            
                            if (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_130, rsi_13))
                                break;
                            
                            rax_13 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                                &var_130, rbx_1);
                            
                            if (!rax_13)
                                break;
                            
                            if (rdx_4 == 0x110000)
                                break;
                        }
                        
                        if (r14 & 1)
                        {
                            alloc::string::String::push::h859ae11851fd8b8e(&var_118, rdx_4);
                            rax_13 = r14;
                        }
                        else
                        {
                            uint64_t rcx_2 = rdx_4 - 0x41;
                            
                            if (rcx_2 > 0x36)
                            {
                                label_4cb1ff:
                                uu_od::parse_formats::od_argument_traditional_format::h14da6a638cd1f622(&var_198, rdx_4);
                                
                                if (var_198 != 3)
                                {
                                    var_148 = var_188;
                                    var_158 = var_198;
                                    char var_138_1 = 0;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_170, 
                                        &var_158);
                                }
                                
                                rax_13 = r14;
                            }
                            else
                            {
                                rax_13 = 1;
                                
                                if (rcx_2 != 0x33)
                                {
                                    if (TEST_BITQ(0x40020000042001, rcx_2))
                                        break;
                                    
                                    goto label_4cb1ff;
                                }
                            }
                        }
                        
                        rsi_13 = var_120;
                        r14 = rax_13;
                    }
                    
                    if (var_108_1)
                    {
                        uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, 
                            var_110_1, var_108_1);
                        bool cond:3_1 = var_158;
                        var_198 = var_150;
                        var_188 = var_140;
                        
                        if (cond:3_1)
                        {
                            arg1[3] = var_188;
                            *(arg1 + 8) = var_198;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_118);
                            goto label_4cb385;
                        }
                        
                        int64_t var_98_1 = var_188;
                        int128_t var_a8 = var_198;
                        void var_50;
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
                if (r12_1 == 2)
                    break;
                
                if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
                    rbx_1, r12_1, "--format=missing format specific…", 9))
                {
                    var_150 = rbx_1;
                    var_148 = rbx_1 + r12_1;
                    var_140 = 0;
                    var_158 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::hb93a52d6c1b4019e(&var_130, &var_158);
                    uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(&var_158, var_128, 
                        var_120);
                    bool cond:2_1 = var_158;
                    var_198 = var_150;
                    var_188 = var_140;
                    
                    if (cond:2_1)
                    {
                        arg1[3] = var_188;
                        *(arg1 + 8) = var_198;
                        *arg1 = 1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                            &var_130);
                        goto label_4cb385;
                    }
                    
                    int64_t var_b8_1 = var_188;
                    int128_t var_c8 = var_198;
                    void var_70;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he4c1fcebcd2dfb60(&var_70, &var_c8);
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::spec_extend::h0b0ac924be580ac1(&var_170, &var_70);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                        &var_130);
                }
                
                r14 = r14;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(rbx_1, r12_1, "--formatEL2NSYNCENOTCONN'; only …", 8))
                    r14 = 1;
            }
        }
        rsi = var_f0;
        
        if (rsi)
            goto label_4caee0;
        
        rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h599d6995f23da721(&var_100);
        
        if (!rax_2)
            goto label_4cb2e6;
    }
    
    goto label_4cb2f2;
}


  uint64_t rg::flags::parse::Parser::parse::h0488f37e65c7a097(void* arg1, int128_t* arg2, void* arg3)

{
    void var_a0;
    lexopt::Parser::from_args::h0672b9c2090e5111(&var_a0, arg2);
    uint64_t result;
    
    while (true)
    {
        int128_t* var_1d8;
        lexopt::Parser::next::hc49319300755d21c(&var_1d8, &var_a0);
        int128_t* var_1a8;
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h4b1e1c7efc452428(&var_1a8, &var_1d8);
        int128_t* rax_1 = var_1a8;
        uint64_t result_1;
        result = result_1;
        
        if (rax_1 == -0x7ffffffffffffffe)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$lexopt..Arg$GT$$GT$::h43c209b804256533(-0x7ffffffffffffffe, result);
            result = 0;
            break;
        }
        
        if (rax_1 == -0x7ffffffffffffffd)
            break;
        
        int64_t rcx_1 = rax_1 ^ 0x8000000000000000;
        
        if (rcx_1 >= 2)
            rcx_1 = 2;
        
        uint64_t var_198;
        int64_t var_108;
        uint64_t rdx_1;
        
        if (!rcx_1)
        {
            rcx_1 = 2;
            
            if (result == 0x56)
            {
                *(arg3 + 0x25b) = rcx_1;
                continue;
            }
            else if (result == 0x68)
            {
                *(arg3 + 0x25b) = 0;
                continue;
            }
            else
                rdx_1 =
                    rg::flags::parse::Parser::find_short::hda7dafb57b35a0a1(&var_108, arg1, result);
        }
        else if (rcx_1 != 1)
        {
            int128_t* var_d0 = rax_1;
            uint64_t result_2 = result;
            uint64_t var_c0_1 = var_198;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hdc4d760cd0497775(arg3 + 0xb0, &var_d0);
            continue;
        }
        else
        {
            char rax_2;
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he06c06f1bb3e32fe(result, var_198, "help*.br*.bx*.fs*.po*.rerubysass…", 4);
            rcx_1 = 1;
            
            if (rax_2)
            {
                *(arg3 + 0x25b) = rcx_1;
                continue;
            }
            else
            {
                char rax_3;
                rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he06c06f1bb3e32fe(result, var_198, "versionPrint ripgrep's version.\n…", 7);
                rcx_1 = 3;
                
                if (rax_3)
                {
                    *(arg3 + 0x25b) = rcx_1;
                    continue;
                }
                else
                    rdx_1 = rg::flags::parse::Parser::find_long::h9dc8bf2eec00e1d3(&var_108, arg1, 
                        result, var_198);
            }
        }
        
        int64_t rax_5 = var_108 ^ 0x8000000000000000;
        
        if (rax_5 >= 2)
            rax_5 = 2;
        
        int64_t* var_100;
        
        if (rax_5)
        {
            int32_t var_168;
            
            if (rax_5 != 2)
            {
                var_168 = var_100;
                var_1a8 = &var_168;
                int64_t (* var_1a0_2)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_1d8 = &data_7eb568;
                int64_t var_1d0_4 = 1;
                int64_t var_1b8_4 = 0;
                int64_t* var_1c8_5 = &var_1a8;
                int64_t var_1c0_4 = 1;
                result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1d8);
            }
            else
            {
                int64_t var_f8;
                int64_t var_118_1 = var_f8;
                int128_t var_128 = var_108;
                var_168 = &var_128;
                int64_t (* var_160_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1d8 = &data_7eb578;
                int64_t var_1d0_1 = 1;
                int64_t var_1b8_1 = 0;
                int32_t* var_1c8_2 = &var_168;
                int64_t var_1c0_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_1a8, 0, rdx_1, 
                    &var_1d8);
                int128_t var_188 = var_1a8;
                uint64_t var_178_1 = var_198;
                int64_t var_e8;
                uint64_t rdx_9 = rg::flags::parse::suggest::h8bc4584f133c33af(&var_e8);
                
                if (var_e8 != -0x8000000000000000)
                {
                    int64_t var_d8;
                    int64_t var_158_1 = var_d8;
                    var_168 = var_e8;
                    var_1a8 = &var_188;
                    int64_t (* var_1a0)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int32_t* var_198_1 = &var_168;
                    int64_t (* var_190_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1d8 = &data_7eb588;
                    int64_t var_1d0_2 = 2;
                    int64_t var_1b8_2 = 0;
                    int64_t* var_1c8_3 = &var_1a8;
                    int64_t var_1c0_2 = 2;
                    int128_t var_b8;
                    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_b8, 0, 
                        rdx_9, &var_1d8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_188);
                    int64_t var_a8;
                    int64_t var_178_2 = var_a8;
                    var_188 = var_b8;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(
                        &var_168);
                }
                else
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h21c1035d1def9f19(&var_e8);
                
                var_1a8 = &var_188;
                int64_t (* var_1a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1d8 = &data_462330;
                int64_t var_1d0_3 = 1;
                int64_t var_1b8_3 = 0;
                int64_t* var_1c8_4 = &var_1a8;
                int64_t var_1c0_3 = 1;
                result = anyhow::__private::format_err::hd87f3faee3401bd9(&var_1d8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_188);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_128);
            }
            break;
        }
        
        int64_t* var_130 = var_100;
        uint64_t var_148;
        uint64_t var_140;
        int128_t* rcx_4;
        uint64_t rdx_3;
        uint64_t rsi_6;
        
        if (var_100[4] != 1)
        {
            result = 1;
            rcx_4 = -0x8000000000000000;
            rdx_3 = var_140;
            rsi_6 = var_148;
            
            if (!(*(var_100[1] + 0x20))(*var_100))
            {
                lexopt::Parser::value::h820b75269adc78fe(&var_1d8, &var_a0);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h905e01b86d138568(&var_1a8, &var_1d8, &var_130);
                rcx_4 = var_1a8;
                result = result_1;
                
                if (rcx_4 == -0x8000000000000000)
                    break;
                
                rdx_3 = var_198;
                rsi_6 = result >> 8;
            }
        }
        else
        {
            result = 0;
            rcx_4 = -0x8000000000000000;
            rdx_3 = var_140;
            rsi_6 = var_148;
        }
        
        int64_t rdi_11 = *var_100;
        int64_t rax_8 = var_100[1];
        var_1d8 = rcx_4;
        int64_t var_1d0;
        var_1d0 = result;
        *var_1d0[7] = rsi_6 >> 0x30;
        *var_1d0[5] = rsi_6 >> 0x20;
        var_148 = rsi_6;
        *var_1d0[1] = rsi_6;
        var_140 = rdx_3;
        uint64_t var_1c8_1 = rdx_3;
        int64_t rax_9;
        uint64_t rdx_7;
        rax_9 = (*(rax_8 + 0x78))(rdi_11, &var_1d8, arg3);
        uint64_t result_3 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h603c1890003acd97(rax_9, &var_130, rdx_7);
        result = result_3;
        
        if (result_3)
            break;
    }
    
    core::ptr::drop_in_place$LT$lexopt..Parser$GT$::h4bbc741db050bed7(&var_a0);
    return result;
}

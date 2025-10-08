
  int64_t alacritty::message_bar::Message::text::hdf58328cea9791eb(int32_t (* arg1)[0x4], int64_t arg2, uint64_t arg3, void* arg4)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    int32_t zmm0[0x4] = *(arg4 + 0x14);
    float zmm1 = *(arg4 + 0x24);
    zmm0[0] = zmm0[0] - (zmm1 + zmm1);
    zmm0[0] = zmm0[0] / *(arg4 + 0x1c);
    int64_t rax = zmm0[0];
    int64_t rsi_2 = ((zmm0[0] - 9.22337204e+18f) & rax >> 0x3f) | rax;
    
    if (zmm0[0] < 0f)
        rsi_2 = 0;
    
    int64_t rdx_2 = -1;
    
    if (zmm0[0] <= 1.8446743e+19f)
        rdx_2 = rsi_2;
    
    int64_t r14 = *(arg4 + 8);
    int64_t result_1 = rdx_2 - 3;
    
    if (rdx_2 < 3)
        result_1 = 0;
    
    int64_t rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec("[X]ALACRITTY_SOCKET=; export ALA…", "ALACRITTY_SOCKET=; export ALACRI…", zmm0);
    int64_t var_100 = 0;
    int64_t* var_f8 = 8;
    int64_t result = 0;
    int64_t var_c8 = 0;
    char* var_c0 = 1;
    void* var_b8 = nullptr;
    int64_t rax_2;
    int64_t rdx_3;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::he66bed476250953d(arg2, arg3);
    int64_t var_58 = rax_2;
    int64_t var_50 = rdx_3 + rax_2;
    char rax_3;
    int32_t i_2;
    rax_3 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, arg3);
    int32_t var_e8[0x4];
    int32_t var_88[0x4];
    
    if ((i_2 != 0x110000 & rax_3) == 1)
    {
        int32_t i_1 = i_2;
        int64_t r15_1 = 0;
        int64_t rcx_2 = r14 - (rax_1 + 1);
        
        if (r14 < rax_1 + 1)
            rcx_2 = 0;
        
        int32_t i;
        
        do
        {
            if (i_1 == 0xa || r15_1 == r14 || (r14 >= rax_1 && !result && r15_1 == rcx_2))
            {
                rbp = 1;
                
                if (i_1 - 9 >= 5 && i_1 != 0x20)
                {
                    if (i_1 < 0x80)
                        rbp = 0;
                    else
                        rbp = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                            i_1);
                }
                
                int64_t var_a8 = 0;
                int64_t var_a0_1 = 1;
                void* var_98_1 = nullptr;
                char rax_7;
                int64_t rdx_5;
                rax_7 = core::str::_$LT$impl$u20$str$GT$::rfind::h936671229704d993(var_c0, var_b8);
                char rax_8;
                int64_t rdx_7;
                rax_8 = core::option::Option$LT$T$GT$::filter::h331fd28735869f3b(rax_7, rdx_5, rbp);
                
                if (rax_8 & 1)
                {
                    int32_t var_48[0x4];
                    alloc::string::String::split_off::hb414f7fc7cd130c9(&var_48, &var_c8, 
                        rdx_7 + 1);
                    alloc::string::String::pop::h86cb5b5bb86d0e70(&var_c8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(
                        &var_a8);
                    void* var_38;
                    var_98_1 = var_38;
                    var_a8 = var_48;
                }
                
                void* var_d8_1 = var_b8;
                int32_t zmm0_2[0x4] = var_c8;
                var_e8 = zmm0_2;
                alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_88, &var_e8, r14, 
                    zmm0_2);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h38b165b64b8cca91(&var_100, &var_88);
                int32_t zmm0_3[0x4] = var_a8;
                var_c8 = zmm0_3;
                var_b8 = var_98_1;
                r15_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(var_c0, var_98_1 + var_c0, zmm0_3);
                
                if (!rbp)
                    goto label_85e3ba;
            }
            else
            {
                label_85e3ba:
                alloc::string::String::push::h0ede46164189e411(&var_c8, i_1);
                
                if (i_1 < 0x7f)
                    rbp = i_1 >= 0x20;
                else if (i_1 < 0xa0)
                    rbp = 0;
                else
                {
                    uint8_t rax_12 = unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(i_1);
                    
                    if (rax_12 != 2)
                        rbp = rax_12;
                    else
                    {
                        rbp = 2;
                        alloc::string::String::push::h0ede46164189e411(&var_c8, 0x20);
                    }
                }
                
                r15_1 += rbp;
            }
            
            char rax_14;
            rax_14 = core::str::validations::next_code_point::h6519aaf344192553(&var_58, &var_88);
            
            if (!(rax_14 & 1))
                break;
            
            i_1 = i;
        } while (i != 0x110000);
    }
    
    int32_t zmm0_1[0x4] = var_c8;
    var_e8 = zmm0_1;
    alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_88, &var_e8, r14, zmm0_1);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h38b165b64b8cca91(&var_100, &var_88);
    int64_t rsi_15 = result - result_1;
    
    if (result > result_1)
    {
        result = result_1;
        core::ptr::drop_in_place$LT$$u5b$alloc..string..String$u5d$$GT$::h4c02c27e478db80b(
            &var_f8[result_1 * 3], rsi_15);
        
        if (r14 >= 0x13)
        {
            var_e8[0] = var_f8;
            var_e8[2] = &var_f8[result * 3];
            int32_t (* rax_18)[0x4] = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h2076e72540d77e9f(&var_e8);
            
            if (rax_18)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_e8, "[MESSAGE TRUNCATED]YAML parsing …", 0x13);
                void* var_78_1 = var_b8;
                int32_t zmm0_5[0x4] = var_e8;
                var_88 = zmm0_5;
                alacritty::message_bar::Message::pad_text::ha652db38986a3243(&var_e8, &var_88, r14, 
                    zmm0_5);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(rax_18);
                rax_18[1][0] = var_b8;
                *rax_18 = var_e8;
            }
        }
    }
    
    if (r14 >= rax_1 && result)
    {
        alloc::string::String::truncate::h4c9243e558c5f483(var_f8, r14 - rax_1);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h219f3b3c50208c25(var_f8, "[X]ALACRITTY_SOCKET=; export ALA…", "ALACRITTY_SOCKET=; export ALACRI…");
    }
    
    arg1[1][0] = result;
    *arg1 = var_100;
    return result;
}

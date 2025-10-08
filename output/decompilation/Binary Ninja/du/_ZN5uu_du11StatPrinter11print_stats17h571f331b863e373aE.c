
  uint64_t uu_du::StatPrinter::print_stats::h571f331b863e373a(char* arg1, int64_t* arg2)

{
    int64_t r15 = *arg2;
    int64_t* r12 = arg2[1];
    char var_d8[0x10];
    std::sync::mpmc::Receiver$LT$T$GT$::recv::hea4d1650cfd7aab4(&var_d8, r15, r12);
    char zmm0[0x10] = __pcmpeqb_xmmdq_memdq(var_d8, *data_41d8e0);
    int128_t* var_1a8;
    void* const var_188;
    char var_168[0x10];
    uint64_t r13;
    
    if (_mm_movemask_epi8(zmm0) != 0xffff)
    {
        void* rax_2 = var_d8[0];
        int64_t rcx_1 = var_d8[8];
        char rdx_3 = arg1[0x49];
        char rdx_4 = arg1[0x4a];
        int64_t rdx_5 = *(arg1 + 0x10);
        int64_t rdx_6 = *(arg1 + 0x18);
        char rdx_7 = *arg1;
        int64_t rdx_8 = *(arg1 + 8);
        char rdx_9 = arg1[0x4b];
        r13 = 0;
        int64_t var_1b0_1 = r15;
        uint32_t i;
        
        do
        {
            int64_t var_c8;
            int64_t* var_c0;
            
            if ((rax_2 ^ 2) | rcx_1)
            {
                var_188 = rax_2;
                int64_t var_180_4 = rcx_1;
                int64_t var_178_4 = var_c8;
                int64_t* var_170_4 = var_c0;
                char var_48[0x10];
                int64_t var_f8_1 = var_48[0];
                char var_58[0x10];
                char var_108_1[0x10] = var_58;
                char var_68[0x10];
                char var_118_1[0x10] = var_68;
                int128_t var_98;
                int128_t var_148_1 = var_98;
                int128_t var_a8;
                int128_t var_158_1 = var_a8;
                char var_b8[0x10];
                var_168 = var_b8;
                int64_t rcx_2;
                uint64_t rdx_14;
                char var_78[0x10];
                
                if (!(rdx_3 & 1))
                {
                    rcx_2 = rdx_5;
                    int128_t var_88;
                    
                    if (!(rdx_4 & 1))
                        rdx_14 = var_78[0] << 9;
                    else
                        rdx_14 = *var_88[8];
                }
                else
                {
                    rdx_14 = var_78[8];
                    rcx_2 = rdx_5;
                }
                uint64_t r15_1 = 0;
                
                if (!var_f8_1)
                    r15_1 = rdx_14;
                
                if (rcx_2 != 2)
                {
                    bool c_1 = rdx_14 < rdx_6;
                    bool rsi_7 = c_1;
                    
                    if (rcx_2 & 1)
                        rsi_7 = rdx_14 != rdx_6 && !c_1;
                    
                    if (!((var_f8_1 > rdx_8 & rdx_7) | rsi_7))
                        goto label_497eaf;
                }
                else
                {
                    rcx_2 = var_f8_1 > rdx_8;
                    
                    if (!(rdx_7 & rcx_2))
                    {
                        label_497eaf:
                        
                        if (!var_f8_1 || !(rdx_9 & 1))
                        {
                            uint64_t result = uu_du::StatPrinter::print_stat::h55862af7f00f1efd(
                                arg1, &var_188, rdx_14);
                            
                            if (result)
                            {
                                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h9291cc610d8c7999(&var_188);
                                return result;
                            }
                        }
                    }
                }
                
                r13 += r15_1;
                core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h9291cc610d8c7999(&var_188);
                r15 = var_1b0_1;
            }
            else
            {
                int64_t var_1e0 = var_c8;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(var_c0[0xb](zmm0));
                int64_t rax_4;
                int64_t rdx_13;
                rax_4 = uucore::util_name::h074417a1e6395129();
                int64_t var_e8 = rax_4;
                int64_t var_e0_1 = rdx_13;
                var_1a8 = &var_e8;
                int64_t (* var_1a0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hff9117abb4c135da;
                int64_t* var_198_1 = &var_1e0;
                int64_t (* var_190_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h818a065c9c5f1901;
                var_188 = &data_545df8;
                int64_t var_180_3 = 3;
                var_168[0] = 0;
                int128_t** var_178_3 = &var_1a8;
                int64_t var_170_3 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_188);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h865b7c7ff5ce5fe7(var_1e0, var_c0);
            }
            std::sync::mpmc::Receiver$LT$T$GT$::recv::hea4d1650cfd7aab4(&var_d8, r15, r12);
            rax_2 = var_d8[0];
            rcx_1 = var_d8[8];
            zmm0 = __pcmpeqb_xmmdq_memdq(var_d8, *data_41d8e0);
            i = _mm_movemask_epi8(zmm0);
        } while (i != 0xffff);
    }
    else
        r13 = 0;
    
    if (arg1[0x48])
    {
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_d8, arg1, r13);
        var_1a8 = &var_d8;
        int64_t (* var_1a0_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_188 = &data_545e28;
        int64_t var_180_1 = 2;
        var_168[0] = 0;
        int128_t** var_178_1 = &var_1a8;
        int64_t var_170_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_188);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_d8);
        var_d8[0] = &arg1[0x4d];
        var_d8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
        var_188 = &data_41d7a0;
        int64_t var_180_2 = 1;
        var_168[0] = 0;
        int128_t* var_178_2 = &var_d8;
        int64_t var_170_2 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_188);
    }
    
    return 0;
}

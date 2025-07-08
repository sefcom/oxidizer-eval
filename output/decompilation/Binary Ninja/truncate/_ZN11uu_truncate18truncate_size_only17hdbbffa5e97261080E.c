
  int128_t* uu_truncate::truncate_size_only::hdbbffa5e97261080(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int32_t var_178;
    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&var_178, arg1, arg2);
    int128_t* r12_2;
    int128_t var_168;
    int128_t var_e8;
    
    if (var_178 != 3)
    {
        int128_t var_d8_1 = var_168;
        var_e8 = var_178;
        r12_2 = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h73ee083b2ef723e0(
            &var_e8);
    }
    else
    {
        int64_t r14_1 = var_168;
        int64_t var_170;
        
        if ((var_170 == 5 || var_170 == 6) && !r14_1)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(
                &var_e8, &data_413ba0[0x10], 0x10);
            int128_t var_d8;
            *var_d8[8] = 1;
            r12_2 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
        }
        else
        {
            int64_t var_140 = arg3;
            int64_t var_138_1 = arg3 + arg4 * 0x18;
            
            while (true)
            {
                void* rax_4 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_140);
                
                if (!rax_4)
                    return nullptr;
                
                std::fs::metadata::h1cc9ec6f7ac4b82e(&var_e8, rax_4);
                int64_t r13_1 = var_e8;
                int64_t rdx_1;
                
                if (r13_1 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(2, *var_e8[8]);
                    rdx_1 = 0;
                }
                else
                {
                    int32_t var_b0;
                    
                    if ((var_b0 & 0xf000) == 0x1000)
                    {
                        int128_t zmm0_2 = *(rax_4 + 8);
                        int64_t var_108 = 0;
                        int128_t var_100_1 = zmm0_2;
                        char var_f0_1 = 1;
                        int64_t* var_130 = &var_108;
                        int64_t (* var_128_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_178 = &data_5165a0;
                        int64_t var_170_1 = 2;
                        int64_t var_158_1 = 0;
                        var_168 = &var_130;
                        *var_168[8] = 1;
                        int128_t var_120;
                        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_120, 
                            &var_178);
                        *var_168[8] = 1;
                        var_178 = var_120;
                        int64_t var_110;
                        var_168 = var_110;
                        r12_2 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_178);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(r13_1, *var_e8[8]);
                        break;
                    }
                    
                    int64_t var_98;
                    rdx_1 = var_98;
                }
                
                int64_t rax_2 =
                    uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(var_170, r14_1, rdx_1);
                int128_t* rax_3 = uu_truncate::file_truncate::h8689dfa8e5b80143(*(rax_4 + 8), 
                    *(rax_4 + 0x10), arg5, rax_2);
                
                if (rax_3)
                    return rax_3;
            }
        }
    }
    return r12_2;
}

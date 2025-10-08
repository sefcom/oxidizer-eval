
  uint64_t uu_truncate::truncate_size_only::h1f53334980ddb1bc(int64_t arg1, int64_t arg2, void* arg3, int64_t arg4, char arg5)

{
    int32_t var_168;
    uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(&var_168, arg1, arg2);
    uint64_t i;
    int128_t var_158;
    int128_t var_e8;
    
    if (var_168 != 4)
    {
        int128_t var_d8_1 = var_158;
        var_e8 = var_168;
        i = uu_truncate::truncate_size_only::_$u7b$$u7b$closure$u7d$$u7d$::h9450d3b26670fc86(
            &var_e8);
    }
    else
    {
        int64_t rax = var_158;
        int64_t var_160;
        
        if ((var_160 == 5 || var_160 == 6) && !rax)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_e8, &data_416e60, 0x10);
            int128_t var_d8;
            *var_d8[8] = 1;
            i = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        }
        else
        {
            void* r14_2 = arg3;
            int64_t r12_1 = 0;
            void* var_138_1 = r14_2;
            
            do
            {
                if (arg4 * 0x18 == r12_1)
                    return 0;
                
                std::fs::metadata::h3bf47457d6321a54(&var_e8, r14_2);
                int64_t rbx_2 = var_e8;
                int64_t rdx_1;
                
                if (rbx_2 == 2)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(2, *var_e8[8]);
                    rdx_1 = 0;
                }
                else
                {
                    int32_t var_b0;
                    
                    if ((var_b0 & 0xf000) == 0x1000)
                    {
                        int64_t rax_4 = *(var_138_1 + r12_1 + 8);
                        int64_t rcx_2 = *(var_138_1 + r12_1 + 0x10);
                        int64_t var_120 = 0;
                        int64_t var_118_1 = rax_4;
                        int64_t var_110_1 = rcx_2;
                        char var_108_1 = 1;
                        int64_t* var_130 = &var_120;
                        int64_t (* var_128_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_168 = &data_4e4020;
                        int64_t var_160_1 = 2;
                        int64_t var_148_1 = 0;
                        var_158 = &var_130;
                        *var_158[8] = 1;
                        int128_t var_100;
                        core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_100, 
                            &var_168);
                        *var_158[8] = 1;
                        var_168 = var_100;
                        int64_t var_f0;
                        var_158 = var_f0;
                        uint64_t rax_6 =
                            alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_168);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd1c66196369792c3(rbx_2, *var_e8[8]);
                        return rax_6;
                    }
                    
                    int64_t var_98;
                    rdx_1 = var_98;
                }
                
                int64_t rax_1 =
                    uu_truncate::TruncateMode::to_size::he28c50c65dad202d(var_160, rax, rdx_1);
                i = uu_truncate::file_truncate::ha430ef778d6571e6(*(r14_2 + 8), *(r14_2 + 0x10), 
                    arg5, rax_1);
                r12_1 += 0x18;
                r14_2 += 0x18;
            } while (!i);
        }
    }
    return i;
}

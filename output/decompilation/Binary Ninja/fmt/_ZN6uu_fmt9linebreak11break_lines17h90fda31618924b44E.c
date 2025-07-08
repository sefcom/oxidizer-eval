
  void** uu_fmt::linebreak::break_lines::h90fda31618924b44(void* arg1, void* arg2, int64_t* arg3)

{
    int64_t r13 = *(arg1 + 0x58);
    void var_58;
    uu_fmt::parasplit::ParaWords::new::h0f4d6dca046f9bf2(&var_58, arg2, arg1);
    int64_t var_50;
    int64_t var_48;
    int64_t rcx_2 = (var_48 << 6) + var_50;
    int64_t var_a8 = var_50;
    void* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_a8);
    void** result;
    
    if (!rax_1)
    {
        int64_t rax_4 = arg3[2];
        
        if (*arg3 - rax_4 <= 1)
            result =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, "\n   /home/34r7hm4n/.cargo/regis…", 1);
        else
        {
            arg3[1][rax_4] = 0xa;
            arg3[2] = rax_4 + 1;
            result = nullptr;
        }
    }
    else
    {
        int64_t rax_2 = *(rax_1 + 0x28);
        int64_t rbp_1;
        
        if (*(arg2 + 0x48) | *(arg2 + 0x49))
        {
            int64_t rsi = *(arg1 + 0x20);
            uint64_t r13_1 = *(arg1 + 0x28);
            int64_t rbp_2 = arg3[2];
            
            if (r13_1 < *arg3 - rbp_2)
            {
                memcpy(arg3[1] + rbp_2, rsi, r13_1);
                arg3[2] = rbp_2 + r13_1;
                label_4bb2da:
                rbp_1 = *(arg1 + 0x48);
                goto label_4bb331;
            }
            
            void** result_2 =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, rsi, r13_1);
            result = result_2;
            
            if (!result_2)
                goto label_4bb2da;
        }
        else if (!*(arg1 + 0x68))
        {
            int64_t rsi_1 = *(arg1 + 0x38);
            uint64_t r13_2 = *(arg1 + 0x40);
            int64_t rbp_4 = arg3[2];
            
            if (r13_2 < *arg3 - rbp_4)
            {
                memcpy(arg3[1] + rbp_4, rsi_1, r13_2);
                arg3[2] = rbp_4 + r13_2;
                rbp_1 = r13;
                goto label_4bb331;
            }
            
            void** result_3 =
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(
                arg3, rsi_1, r13_2);
            result = result_3;
            rbp_1 = r13;
            
            if (!result_3)
                goto label_4bb331;
        }
        else
        {
            rbp_1 = 0;
            label_4bb331:
            int64_t rsi_2 = *(rax_1 + 0x10);
            uint64_t r12_2 = *(rax_1 + 0x18);
            int64_t r13_3 = arg3[2];
            
            if (r12_2 >= *arg3 - r13_3)
            {
                void** result_4 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(arg3, rsi_2, r12_2);
                result = result_4;
                
                if (!result_4)
                    goto label_4bb37a;
            }
            else
            {
                memcpy(arg3[1] + r13_3, rsi_2, r12_2);
                arg3[2] = r13_3 + r12_2;
                label_4bb37a:
                int64_t rbp_6 = rbp_1 + rax_2;
                void** result_1;
                void* var_90;
                int128_t zmm0_1;
                
                if (!*(arg1 + 0x68))
                {
                    char rax_13 = *(arg2 + 0x4e);
                    zmm0_1 = *(arg1 + 0x38);
                    var_90 = arg2;
                    int64_t var_70_2 = rbp_6;
                    int128_t var_88_2 = zmm0_1;
                    int64_t var_68_2 = r13;
                    char var_60_2 = rax_13;
                    int64_t* var_78_2 = arg3;
                    
                    if (!*(arg2 + 0x4f))
                        result_1 = uu_fmt::linebreak::break_knuth_plass::hf150f6a90b010d55(var_a8, 
                            rcx_2, &var_90);
                    else
                        result_1 = uu_fmt::linebreak::break_simple::h99fb810256b9c0af(var_a8, 
                            rcx_2, &var_90);
                }
                else
                {
                    zmm0_1 = *(arg1 + 0x38);
                    var_90 = arg2;
                    int64_t var_70_1 = rbp_6;
                    int128_t var_88_1 = zmm0_1;
                    int64_t var_68_1 = r13;
                    char var_60_1 = 1;
                    int64_t* var_78_1 = arg3;
                    result_1 =
                        uu_fmt::linebreak::break_simple::h99fb810256b9c0af(var_a8, rcx_2, &var_90);
                }
                result = result_1;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParaWords$GT$::h46a5d7008fa17c00(&var_58);
    return result;
}

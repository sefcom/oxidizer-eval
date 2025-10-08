
  int64_t bat::output::OutputType::try_pager::h20ac4bd3b0754dfb(char* arg1, char arg2, char arg3, char* arg4, int64_t arg5)

{
    int64_t var_128;
    bat::pager::get_pager::hd377d976785f18ee(&var_128, arg4, arg5);
    int64_t rax = var_128;
    
    if (rax == -0x7fffffffffffffff)
        /* tailcall */
        return _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(arg1, "Could not parse pager command.-R…", 0x1e);
    
    int128_t var_100;
    int80_t var_38 = var_100;
    int64_t var_118;
    int128_t var_110;
    
    if (rax == -0x8000000000000000)
    {
        bat::output::OutputType::stdout::h211ec86729b50ed6(&var_128);
        int64_t result = *var_100[8];
        *(arg1 + 0x38) = result;
        int128_t zmm0_2 = var_128;
        *(arg1 + 0x28) = var_110;
        *(arg1 + 0x18) = var_118;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 0xd;
        return result;
    }
    
    int64_t var_1a0 = rax;
    int64_t var_120;
    int64_t var_198_1 = var_120;
    int64_t var_190_1 = var_118;
    uint32_t rax_2 = *var_38[9];
    
    if (!rax_2)
        *arg1 = 0xa;
    else if (rax_2 != 4)
    {
        int64_t var_1d8;
        grep_cli::decompress::resolve_binary::h597f6cd9136011e5(&var_1d8, &var_1a0);
        
        if (var_1d8 != 1)
        {
            int64_t var_1c0;
            int64_t var_158_1 = var_1c0;
            int128_t var_1d0;
            int128_t var_168 = var_1d0;
            std::process::Command::new::h3f6cc1aa3e6a6597(&var_128, &var_168);
            int128_t var_148 = var_110;
            char rbp;
            
            if (*var_38[9] != 1)
            {
                *var_1d0[8] = var_38;
                var_1d8 = var_110;
                std::process::Command::args::h7fe60a217b1ea562(&var_128, &var_1d8);
                rbp = 0;
            }
            else
            {
                if (*var_38[8] == 2 || !var_38)
                {
                    std::process::Command::arg::hd3991715298ce12e(&var_128, 
                        "-R-F-S-K--no-initLESSCHARSETUTF-…");
                    
                    if (!arg2)
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "-F-S-K--no-initLESSCHARSETUTF-8C…");
                    
                    if (arg3 != 2 && arg3 & 1)
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "-S-K--no-initLESSCHARSETUTF-8Cou…");
                    
                    std::process::Command::arg::hd3991715298ce12e(&var_128, 
                        "-K--no-initLESSCHARSETUTF-8Could…");
                    uint64_t rax_6;
                    int64_t rdx_7;
                    rax_6 = bat::less::retrieve_less_version::h21096205fd9a4b87(&var_1a0);
                    rdx_7 = rdx_7 >= 0x212;
                    rdx_7 |= rax_6;
                    rbp = 1;
                    
                    if (!(rax_6 != 2 & rdx_7))
                        std::process::Command::arg::hd3991715298ce12e(&var_128, 
                            "--no-initLESSCHARSETUTF-8Could n…");
                }
                else
                {
                    *var_1d0[8] = var_38;
                    var_1d8 = var_110;
                    std::process::Command::args::h7fe60a217b1ea562(&var_128, &var_1d8);
                    rbp = 0;
                }
                
                std::process::Command::env::h84b104833ce60344(&var_128);
            }
            
            std::process::Command::stdin::h4542994e6eede617(&var_128);
            std::process::Command::spawn::haea730ea7b05a977(&var_168, &var_128);
            int32_t var_1b8;
            
            if (var_168 != 1)
            {
                int64_t rax_7 = *var_168[4];
                var_1d0 = var_168;
                int32_t var_14c;
                var_1b8 = var_14c;
                var_1d8 = 3;
                var_1d0 = rax_7;
            }
            else
                bat::output::OutputType::try_pager::_$u7b$$u7b$closure$u7d$$u7d$::hb03f43e1a348da60(
                    &var_1d8, *var_168[8]);
            
            int64_t var_1a8;
            *(arg1 + 0x38) = var_1a8;
            int64_t rax_9 = var_1d8;
            *(arg1 + 0x28) = var_1b8;
            int64_t var_1b4;
            *(arg1 + 0x2c) = var_1b4;
            int32_t var_1ac;
            *(arg1 + 0x34) = var_1ac;
            *(arg1 + 0x18) = var_1d0;
            *(arg1 + 8) = rax_9;
            *(arg1 + 0x10) = var_1d0;
            *arg1 = 0xd;
            
            if (rbp)
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_148);
            
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h096d1de53edcff53(&var_128);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &var_1a0);
        }
        
        bat::output::OutputType::stdout::h211ec86729b50ed6(&var_128);
        *(arg1 + 0x38) = *var_100[8];
        int128_t zmm0_5 = var_128;
        *(arg1 + 0x28) = var_110;
        *(arg1 + 0x18) = var_118;
        *(arg1 + 8) = zmm0_5;
        *arg1 = 0xd;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::ha008211fea5fe0d4(&var_1d8);
    }
    else
    {
        bat::output::BuiltinPager::new::h5052a4e4c2ea861d(&var_128);
        *(arg1 + 0x38) = *var_100[8];
        int128_t zmm0_3 = var_128;
        *(arg1 + 0x28) = var_110;
        *(arg1 + 0x18) = var_118;
        *(arg1 + 8) = zmm0_3;
        *arg1 = 0xd;
    }
    
    return core::ptr::drop_in_place$LT$bat..pager..Pager$GT$::h43ee58a3f3e247d6(&var_1a0);
}

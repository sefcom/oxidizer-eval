
  int64_t rg::search::SearchWorker$LT$W$GT$::search_preprocessor::h295b0344cca9801b(int64_t* arg1, int32_t* arg2, int64_t arg3)

{
    if (0 + -(*(arg2 + 0x260)))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void var_108;
    std::process::Command::new::hf0673b88a585bfee(&var_108, &arg2[0x98]);
    std::process::Command::arg::h12e56d6aa56d7810(&var_108, arg3);
    int32_t var_1f8;
    std::fs::File::open::hbf43b83d6cee906c(&var_1f8, arg3);
    int64_t var_1f0;
    
    if (var_1f8 != 1)
    {
        int32_t var_1f4;
        std::process::Command::stdin::hf2e58e20c85050ff(&var_108, 3, var_1f4);
        uint64_t rdx_4 = grep_cli::process::CommandReaderBuilder::build::h096992ea7f6eb603(
            &var_1f8, &arg2[0xca], &var_108);
        int32_t rax_1 = var_1f8;
        int128_t var_1e8;
        int128_t var_1a8;
        
        if (rax_1 != 2)
        {
            int128_t var_180_1 = var_1e8;
            int128_t var_1d8;
            int128_t var_170_1 = var_1d8;
            int128_t var_1c8;
            int128_t var_160_1 = var_1c8;
            int32_t var_190 = rax_1;
            int32_t var_18c_1 = var_1f4;
            int64_t var_188_1 = var_1f0;
            int32_t* var_208_1 = &var_190;
            int128_t var_150;
            uint64_t rdx_7 = rg::search::search_reader::h64074cc9b87c5257(&var_150, &arg2[0xb0], 
                arg2, &arg2[0x42], arg3);
            int64_t var_1b8;
            int32_t var_118;
            
            if (var_118 != 0x3b9aca01)
            {
                int64_t var_110;
                var_1b8 = var_110;
                int128_t var_120;
                var_1c8 = var_120;
                int128_t var_130;
                var_1d8 = var_130;
                int128_t var_140;
                var_1e8 = var_140;
                var_1f8 = var_150;
            }
            else
            {
                var_1f8 = rg::search::SearchWorker$LT$W$GT$::search_preprocessor::_$u7b$$u7b$closure$u7d$$u7d$::h481170515aa8cd57(&var_108, var_150, rdx_7);
                *var_1c8[8] = 0x3b9aca01;
            }
            
            int64_t rax_5 = grep_cli::process::CommandReader::close::h135975e7dd1c0241(&var_190);
            var_1a8 = rax_5;
            int64_t rdx_8 = var_1f8;
            int32_t rcx_3 = *var_1c8[8];
            
            if (rcx_3 == 0x3b9aca01)
            {
                *arg1 = rdx_8;
                arg1[7] = 0x3b9aca01;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_1a8);
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
            else if (!rax_5)
            {
                *arg1 = rdx_8;
                *(arg1 + 8) = var_1f0;
                *(arg1 + 0x18) = var_1e8;
                *(arg1 + 0x28) = var_1d8;
                arg1[7] = rcx_3;
                *(arg1 + 0x3c) = *var_1c8[0xc];
                *(arg1 + 0x44) = *var_1b8[4];
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
            else
            {
                *arg1 = rax_5;
                arg1[7] = 0x3b9aca01;
                core::ptr::drop_in_place$LT$grep_cli..process..CommandReader$GT$::h9848abec419dbb07(
                    &var_190);
            }
        }
        else
        {
            int64_t var_198_1 = *var_1e8[8];
            var_1a8 = var_1f0;
            *arg1 = rg::search::SearchWorker$LT$W$GT$::search_preprocessor::_$u7b$$u7b$closure$u7d$$u7d$::hacef556950bacdab(&var_108, &var_1a8, rdx_4);
            arg1[7] = 0x3b9aca01;
        }
    }
    else
    {
        *arg1 = var_1f0;
        arg1[7] = 0x3b9aca01;
    }
    return core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_108);
}

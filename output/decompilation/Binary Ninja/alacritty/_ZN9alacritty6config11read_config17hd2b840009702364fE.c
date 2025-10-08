
  int64_t alacritty::config::read_config::hd2b840009702364f(int64_t* arg1)

{
    int64_t var_8f0 = 0;
    int64_t var_8e8 = 8;
    int64_t var_8e0 = 0;
    int64_t var_858;
    uint64_t rdx;
    int64_t rsi;
    alacritty::config::parse_config::hb79bebbd33e5efa7(&var_858, rsi, rdx, &var_8f0, 5);
    int64_t rax = var_858;
    int128_t var_850;
    int128_t var_840;
    int128_t var_830;
    int128_t var_820;
    int128_t var_810;
    
    if (rax != 7)
    {
        *(arg1 + 0x50) = var_810;
        *(arg1 + 0x40) = var_820;
        *(arg1 + 0x30) = var_830;
        *(arg1 + 0x20) = var_840;
        *(arg1 + 0x10) = var_850;
        arg1[1] = rax;
    }
    else
    {
        int128_t var_878 = var_850;
        int128_t var_868_1 = var_840;
        _$LT$alacritty..config..ui_config..UiConfig$u20$as$u20$serde..de..Deserialize$GT$::deserialize::h7443b9c7f8df693e(&var_858, &var_878);
        int64_t r14_1 = var_858;
        int64_t var_800;
        
        if (r14_1 != 6)
        {
            void var_7f8;
            void var_3d8;
            memcpy(&var_3d8, &var_7f8, 0x3c0);
            int128_t var_430_1 = var_850;
            int128_t var_420_1 = var_840;
            int128_t var_410_1 = var_830;
            int128_t var_400_1 = var_820;
            int128_t var_3f0_1 = var_810;
            int64_t var_3e0_1 = var_800;
            int64_t var_438 = r14_1;
            *var_850[8] = var_8e0;
            var_858 = var_8f0;
            int128_t var_1a0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(&var_1a0);
            int64_t var_190_1 = *var_850[8];
            var_1a0 = var_858;
            return memcpy(arg1, &var_438, 0x420);
        }
        
        arg1[0xb] = var_800;
        *(arg1 + 0x48) = var_810;
        *(arg1 + 0x38) = var_820;
        *(arg1 + 0x28) = var_830;
        *(arg1 + 0x18) = var_840;
        *(arg1 + 8) = var_850;
    }
    *arg1 = 6;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h246198f168725160(&var_8f0);
}

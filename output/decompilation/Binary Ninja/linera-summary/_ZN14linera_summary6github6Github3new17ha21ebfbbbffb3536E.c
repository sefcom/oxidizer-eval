
  int64_t* linera_summary::github::Github::new::ha21ebfbbbffb3536(int64_t* arg1, int32_t arg2, char arg3, int64_t arg4)

{
    char rbp = arg2;
    int64_t var_360;
    int64_t var_2e0;
    int64_t var_1c0;
    
    if (!arg2)
    {
        __builtin_memcpy(&var_360, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x18);
        var_2e0 = 0;
        int64_t var_2d8_1 = 8;
        int128_t var_2d0_1 = {0};
        int64_t var_2c0_1 = 8;
        int64_t var_2b8_1 = 0;
        int32_t var_2a8_1 = 0x3b9aca00;
        int32_t var_298_1 = 0x3b9aca00;
        int32_t var_288_1 = 0x3b9aca00;
        char var_280_1 = 3;
        char var_228_1 = 3;
        int64_t var_1d0_1 = 0;
        int32_t var_410;
        std::env::var::h3e0bd6d3c4a94666(&var_410, "GITHUB_TOKENGITHUB_TOKEN is not …");
        int64_t var_408;
        int64_t var_400;
        
        if (var_410 != 1)
        {
            int64_t var_428 = var_408;
            int64_t var_420_1 = var_400;
            int64_t var_3f8;
            int64_t var_418_1 = var_3f8;
            octocrab::OctocrabBuilder$LT$octocrab..NoSvc$C$octocrab..DefaultOctocrabBuilderConfig$C$octocrab..NoAuth$C$octocrab..NotLayerReady$GT$::personal_token::h431deec6c99ac9e7(&var_1c0, &var_360, &var_428);
            goto label_9195ae;
        }
        
        arg1[1] =
            linera_summary::github::Github::new::_$u7b$$u7b$closure$u7d$$u7d$::h3bad33aaefa27f31(
            var_408, var_400);
        *arg1 = 4;
        core::ptr::drop_in_place$LT$octocrab..OctocrabBuilder$LT$octocrab..NoSvc$C$octocrab..DefaultOctocrabBuilderConfig$C$octocrab..NoAuth$C$octocrab..NotLayerReady$GT$$GT$::ha58d667e587ba846(&var_360);
    }
    else
    {
        __builtin_memcpy(&var_1c0, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x18);
        int64_t var_140_1 = 0;
        int64_t var_138_1 = 8;
        int128_t var_130_1 = {0};
        int64_t var_120_1 = 8;
        int64_t var_118_1 = 0;
        int32_t var_108_1 = 0x3b9aca00;
        int32_t var_f8_1 = 0x3b9aca00;
        int32_t var_e8_1 = 0x3b9aca00;
        char var_e0_1 = 3;
        char var_88_1 = 3;
        int64_t var_30_1 = 0;
        label_9195ae:
        int64_t var_3f0;
        octocrab::OctocrabBuilder$LT$octocrab..NoSvc$C$octocrab..DefaultOctocrabBuilderConfig$C$octocrab..NoAuth$C$octocrab..NotLayerReady$GT$::build::h1da4fdd26ac256fa(&var_3f0, &var_1c0);
        int64_t rax_3 = var_3f0;
        int64_t var_3e8;
        
        if (rax_3 == 4)
        {
            arg1[1] = linera_summary::github::Github::new::_$u7b$$u7b$closure$u7d$$u7d$::hae882e24c84efdd6(&var_3e8);
            *arg1 = 4;
        }
        else
        {
            int64_t rcx = var_3e8;
            int128_t var_370;
            var_2e0 = var_370;
            int128_t var_380;
            int128_t var_2f0_1 = var_380;
            int128_t var_390;
            int128_t var_300_1 = var_390;
            int128_t var_3a0;
            int128_t var_310_1 = var_3a0;
            int128_t var_3b0;
            int128_t var_320_1 = var_3b0;
            int128_t var_3c0;
            int128_t var_330_1 = var_3c0;
            int128_t var_3d0;
            int128_t var_340_1 = var_3d0;
            int128_t var_3e0;
            int64_t var_350;
            var_350 = var_3e0;
            var_360 = rax_3;
            int64_t var_358_1 = rcx;
            linera_summary::github::GithubContext::from_env::h29f1e9b692ad74cc(&var_1c0, rbp, arg3, 
                arg4);
            int64_t r15_1 = var_1c0;
            int64_t var_1b8;
            
            if (-(r15_1) != -0x8000000000000000)
            {
                int128_t var_150;
                *(arg1 + 0x100) = var_150;
                int128_t var_160;
                *(arg1 + 0xf0) = var_160;
                int128_t var_170;
                *(arg1 + 0xe0) = var_170;
                int128_t var_180;
                *(arg1 + 0xd0) = var_180;
                int128_t var_190;
                *(arg1 + 0xc0) = var_190;
                int128_t var_1a0;
                *(arg1 + 0xb0) = var_1a0;
                int64_t var_1b0;
                *(arg1 + 0xa0) = var_1b0;
                memcpy(arg1, &var_360, 0x90);
                arg1[0x12] = r15_1;
                arg1[0x13] = var_1b8;
                arg1[0x22] = rbp;
            }
            else
            {
                arg1[1] = var_1b8;
                *arg1 = 4;
                core::ptr::drop_in_place$LT$octocrab..Octocrab$GT$::h193b9fbb2e33b1fa(&var_360);
            }
        }
    }
    return arg1;
}

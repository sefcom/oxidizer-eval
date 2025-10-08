
  int64_t bat::pager::get_pager::hd377d976785f18ee(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t r14 = arg3;
    char const* const r15 = arg2;
    char var_a0;
    std::env::var::h86a744ab3a10895a(&var_a0, "BAT_PAGERPAGERsrc/preprocessor.r…");
    char var_80;
    std::env::var::h86a744ab3a10895a(&var_80, &data_5a2b9b[0x90]);
    char r12 = 0;
    char rbp = 0;
    
    if (!r15)
    {
        if (!(var_a0 & 1))
        {
            char* var_90;
            r15 = var_90;
            int64_t var_88;
            r14 = var_88;
            rbp = 1;
            r12 = 0;
        }
        else if (!(var_80 & 1))
        {
            char* var_70;
            r15 = var_70;
            int64_t var_68;
            r14 = var_68;
            rbp = 2;
            r12 = 1;
        }
        else
        {
            rbp = 3;
            r14 = 4;
            r15 = "lessOS: wordc";
            r12 = 0;
        }
    }
    
    int64_t var_60;
    shell_words::split::h6b79ba6635eb31df(&var_60, r15, r14);
    
    if (!(0 + -(var_60)))
    {
        int64_t var_50;
        int64_t var_c8_1 = var_50;
        int128_t var_d8 = var_60;
        
        if (!var_50)
            *arg1 = -0x8000000000000000;
        else
        {
            void* r15_1 = *var_d8[8];
            char rax_1 =
                bat::pager::PagerKind::from_bin::h088ae57711f0ac1e(*(r15_1 + 8), *(r15_1 + 0x10));
            uint32_t r9_1 = rax_1;
            
            if (!r12 || rax_1 > 3 || r9_1 == 1)
                bat::pager::Pager::new::h0869a180ded80220(&var_60, *(r15_1 + 8), *(r15_1 + 0x10), 
                    r15_1 + 0x18, var_50 - 1, r9_1, rbp);
            else
            {
                int64_t var_b8 = 0;
                int64_t var_b0_1 = 8;
                int64_t var_a8_1 = 0;
                bat::pager::Pager::new::h0869a180ded80220(&var_60, "lessOS: wordc", 4, 8, 0, 1, 2);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_b8);
            }
            
            int64_t var_30;
            arg1[6] = var_30;
            int128_t zmm0_2 = var_60;
            int128_t var_40;
            *(arg1 + 0x20) = var_40;
            *(arg1 + 0x10) = var_50;
            *arg1 = zmm0_2;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_d8);
    }
    else
        *arg1 = -0x7fffffffffffffff;
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_80);
    return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h1489211aaee639b9(&var_a0);
}

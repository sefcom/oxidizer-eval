
  int64_t alacritty::config::ui_config::UiConfig::pty_config::h40c1a7a01252a825(int128_t* arg1, void* arg2)

{
    int64_t var_50;
    
    if (*(arg2 + 0x360) != -0x7fffffffffffffff)
        _$LT$alacritty..config..ui_config..Program$u20$as$u20$core..clone..Clone$GT$::clone::ha9cecc4ab8fd9e38(&var_50, arg2 + 0x360);
    else
        var_50 = -0x7fffffffffffffff;
    
    int64_t var_98;
    core::option::Option$LT$T$GT$::or_else::hb40315794b9ee246(&var_98, &var_50, arg2);
    int64_t rax = var_98;
    int64_t var_c8;
    int64_t var_b8;
    int64_t var_a8;
    
    if (rax != -0x7fffffffffffffff)
    {
        int64_t var_90;
        int64_t rdx_2 = var_90;
        int64_t var_80;
        int64_t rcx_1 = var_80;
        int64_t rsi_3;
        int64_t rdi_3;
        int64_t r9_1;
        int64_t var_88;
        
        if (rax != -0x8000000000000000)
        {
            int64_t var_78;
            rsi_3 = var_78;
            int64_t var_70;
            rdi_3 = var_70;
            r9_1 = rcx_1;
            rcx_1 = var_88;
        }
        else
        {
            rsi_3 = 8;
            rdi_3 = 0;
            rax = rdx_2;
            r9_1 = 0;
            rdx_2 = var_88;
        }
        var_c8 = rax;
        int64_t var_c0_1 = rdx_2;
        var_b8 = rcx_1;
        int64_t var_b0_1 = r9_1;
        var_a8 = rsi_3;
        int64_t var_a0_1 = rdi_3;
        
        if (*(arg2 + 0x310) != -0x8000000000000000)
            goto label_8368f3;
        
        var_98 = -0x8000000000000000;
    }
    else
    {
        var_c8 = -0x8000000000000000;
        
        if (*(arg2 + 0x310) == -0x8000000000000000)
            var_98 = -0x8000000000000000;
        else
        {
            label_8368f3:
            _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(&var_50, *(arg2 + 0x318), *(arg2 + 0x320));
            int64_t var_40;
            int64_t var_88_1 = var_40;
            var_98 = var_50;
        }
    }
    
    int128_t var_68;
    core::option::Option$LT$T$GT$::or_else::ha0e97caec7d64104(&var_68, &var_98, arg2);
    int64_t result;
    int64_t rdx_4;
    result = std::thread::local::LocalKey$LT$T$GT$::with::h1712436c6fb8facc();
    arg1[2] = var_a8;
    arg1[1] = var_b8;
    *arg1 = var_c8;
    arg1[3] = var_68;
    int64_t var_58;
    arg1[4] = var_58;
    *(arg1 + 0x78) = 0;
    *(arg1 + 0x48) = *data_c75358;
    *(arg1 + 0x58) = data_c75368;
    *(arg1 + 0x68) = result;
    arg1[7] = rdx_4;
    return result;
}

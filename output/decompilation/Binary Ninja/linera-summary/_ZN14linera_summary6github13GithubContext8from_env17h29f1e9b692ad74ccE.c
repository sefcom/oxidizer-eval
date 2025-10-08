
  uint64_t linera_summary::github::GithubContext::from_env::h29f1e9b692ad74cc(int64_t* arg1, char arg2, char arg3, int64_t arg4)

{
    int64_t r14 = arg4;
    char var_80;
    std::env::var::h3e0bd6d3c4a94666(&var_80, "GITHUB_PR_COMMIT_HASHGITHUB_BASE…");
    char var_a0;
    std::env::var::h3e0bd6d3c4a94666(&var_a0, "GITHUB_PR_BRANCHWordStartUnicode…");
    char var_f8;
    std::env::var::h3e0bd6d3c4a94666(&var_f8, "GITHUB_BASE_BRANCHGITHUB_PR_NUMB…");
    char var_60;
    std::env::var::h3e0bd6d3c4a94666(&var_60, "GITHUB_PR_NUMB");
    void** const var_1b0;
    int128_t var_198;
    int128_t var_178;
    void** const var_158;
    int64_t var_148_1;
    void** const var_140;
    uint64_t var_138;
    int64_t var_130;
    int128_t var_d8;
    int64_t var_c8_1;
    int128_t var_b8;
    int64_t var_a8_1;
    int64_t r13;
    
    if (arg2)
    {
        r13 = 1;
        linera_summary::github::GithubContext::get_local_git_info::h57dc8e6f5dcc2bb3(&var_140);
        void** const rcx = var_140;
        
        if (rcx == -0x8000000000000000)
        {
            arg1[1] = var_138;
            *arg1 = -0x8000000000000000;
            label_918dc7:
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h68b9d0ec30e79c0f(&var_60);
            goto label_918dd4;
        }
        
        int128_t var_128;
        var_198 = var_128;
        int128_t var_110;
        var_178 = var_110;
        var_1b0 = rcx;
        
        if (!(arg3 & 1))
        {
            var_140 = &data_cf3470;
            int64_t var_138_1 = 1;
            int64_t var_130_1 = 8;
            int128_t var_128_1 = {0};
            arg1[1] = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_140);
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_178);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_198);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1b0);
            goto label_918dc7;
        }
        
        var_148_1 = var_130;
        var_158 = var_1b0;
        uint64_t var_150_1 = var_138;
        var_d8 = var_198;
        int64_t var_118;
        var_c8_1 = var_118;
        var_b8 = var_178;
        int64_t var_100;
        var_a8_1 = var_100;
        r13 = 1;
        label_918d09:
        linera_summary::github::GithubRepository::from_env::hd99f4e9b5b48b078(&var_140, arg2);
        void** const rcx_1 = var_140;
        
        if (rcx_1 != -0x8000000000000000)
        {
            *(arg1 + 0x20) = var_128;
            *(arg1 + 0x10) = var_130;
            arg1[8] = var_148_1;
            *(arg1 + 0x30) = var_158;
            arg1[0xb] = var_c8_1;
            *(arg1 + 0x48) = var_d8;
            *(arg1 + 0x60) = var_b8;
            arg1[0xe] = var_a8_1;
            *arg1 = rcx_1;
            arg1[1] = var_138;
            arg1[0xf] = r14;
            
            if (!r13)
                return var_138;
        }
        else
        {
            arg1[1] = var_138;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_d8);
            uint64_t rax_8 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_158);
            
            if (!r13)
                return rax_8;
        }
        
        goto label_918dc7;
    }
    
    uint64_t var_50;
    uint64_t rsi = var_50;
    char* rdi_13;
    void** var_58;
    
    if (!(var_60 & 1))
    {
        if (var_58 == -0x8000000000000000)
            goto label_918c4a;
        
        var_1b0 = var_58;
        uint64_t var_1a8_2 = rsi;
        int64_t var_48;
        int64_t var_1a0_2 = var_48;
        uint64_t var_70;
        uint64_t rax_9 = var_70;
        int64_t var_78;
        
        if (!(var_80 & 1))
        {
            if (var_78 == -0x8000000000000000)
                goto label_918e45;
            
            var_198 = var_78;
            *var_198[8] = rax_9;
            uint64_t var_90;
            uint64_t rax_10 = var_90;
            int64_t var_98;
            
            if (!(var_a0 & 1))
            {
                if (var_98 == -0x8000000000000000)
                    goto label_918ead;
                
                var_178 = var_98;
                *var_178[8] = rax_10;
                uint64_t var_e8;
                uint64_t rax_11 = var_e8;
                void** var_f0;
                
                if (var_f8 & 1)
                {
                    rax_11 = linera_summary::github::GithubContext::from_env::_$u7b$$u7b$closure$u7d$$u7d$::h532f0ddf02f56a57(var_f0, rax_11);
                    label_918f15:
                    arg1[1] = rax_11;
                    *arg1 = -0x8000000000000000;
                    label_918f21:
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(
                        &var_178);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(
                        &var_198);
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(
                        &var_1b0);
                }
                
                if (var_f0 == -0x8000000000000000)
                    goto label_918f15;
                
                var_140 = var_f0;
                var_138 = rax_11;
                int64_t var_e0;
                var_130 = var_e0;
                char var_40;
                core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_40, rsi, 
                    var_48);
                
                if (var_40)
                {
                    arg1[1] = linera_summary::github::GithubContext::from_env::_$u7b$$u7b$closure$u7d$$u7d$::hcd2c7dff49a99ffd(&var_1b0);
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(
                        &var_140);
                    goto label_918f21;
                }
                
                int64_t var_38;
                r14 = var_38;
                var_158 = var_198;
                int64_t var_68;
                var_148_1 = var_68;
                var_d8 = var_178;
                int64_t var_88;
                var_c8_1 = var_88;
                var_b8 = var_140;
                var_a8_1 = var_130;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1b0);
                r13 = 0;
                goto label_918d09;
            }
            
            rax_10 = linera_summary::github::GithubContext::from_env::_$u7b$$u7b$closure$u7d$$u7d$::hc9916c8c7572ecca(var_98, rax_10);
            label_918ead:
            arg1[1] = rax_10;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_198);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1b0);
            rdi_13 = &var_f8;
        }
        else
        {
            rax_9 = linera_summary::github::GithubContext::from_env::_$u7b$$u7b$closure$u7d$$u7d$::hdfd2e22182276cd9(var_78, rax_9);
            label_918e45:
            arg1[1] = rax_9;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_1b0);
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h68b9d0ec30e79c0f(&var_f8);
            rdi_13 = &var_a0;
        }
    }
    else
    {
        rsi = linera_summary::github::GithubContext::from_env::_$u7b$$u7b$closure$u7d$$u7d$::hbf4caff02bc01d60(var_58, rsi);
        label_918c4a:
        arg1[1] = rsi;
        *arg1 = -0x8000000000000000;
        label_918dd4:
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h68b9d0ec30e79c0f(&var_f8);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h68b9d0ec30e79c0f(&var_a0);
        rdi_13 = &var_80;
    }
    return core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h68b9d0ec30e79c0f(rdi_13);
}

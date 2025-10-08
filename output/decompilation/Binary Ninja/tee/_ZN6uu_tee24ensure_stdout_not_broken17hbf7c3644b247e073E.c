
  char* uu_tee::ensure_stdout_not_broken::hbf7c3644b247e073(char* arg1)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int32_t var_a8;
    nix::sys::stat::fstat::h932ea0f7705da4a5(&var_a8, 1);
    int32_t var_88;
    
    if (var_a8 == 1)
    {
        int32_t var_a4;
        *(arg1 + 8) = var_a4 << 0x20 | 2;
        *arg1 = 1;
    }
    else if (var_88 & 0x1000)
    {
        int64_t var_b0 = 0x8000000001;
        char rax_4;
        int64_t rdx_1;
        rax_4 = nix::poll::poll::h39db83bcc35c5ee5(&var_b0);
        
        if (!(rax_4 & 1))
        {
            if (rdx_1 <= 0)
            {
                core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
                /* no return */
            }
            
            var_a8 = &var_b0;
            int32_t* var_a0_1 = &var_a8;
            arg1[1] = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hdd04b6cc49b12dea(&var_a8) ^ 1;
            rax_4 = 0;
        }
        else
        {
            *(arg1 + 8) = rdx_1 << 0x20 | 2;
            rax_4 = 1;
        }
        
        *arg1 = rax_4;
    }
    else
        *arg1 = 0x100;
    return arg1;
}

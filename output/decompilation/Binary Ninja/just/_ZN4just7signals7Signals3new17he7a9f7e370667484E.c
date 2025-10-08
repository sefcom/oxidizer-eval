
  char* just::signals::Signals::new::he7a9f7e370667484(char* arg1)

{
    uint64_t rax = nix::unistd::pipe::ha88edbfd9369bc9e();
    
    if (rax == 0xffffffff)
    {
        *arg1 = 0x2d;
        *(arg1 + 4) = 0x2ffffffff;
        *(arg1 + 0xc) = rax >> 0x20;
    }
    else
    {
        void** const var_208;
        
        if (core::sync::atomic::atomic_compare_exchange::h011a5b8c8280061c(rax >> 0x20))
        {
            var_208 = &data_830fc8;
            int64_t var_200 = 1;
            int64_t var_1f8 = 8;
            int128_t var_1f0 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_208);
            /* no return */
        }
        
        nix::sys::signal::SigSet::empty::h8c6cb2d0385ffbca(&var_208);
        void var_b0;
        nix::sys::signal::SigAction::new::h0121b4983f47f7b3(&var_b0, &var_208);
        nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 1, &var_b0);
        int64_t rax_2;
        
        if (var_208 != 1)
        {
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 2, &var_b0);
            
            if (var_208 & 1)
            {
                rax_2 = 0x20000002e;
                goto label_68b244;
            }
            
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 3, &var_b0);
            
            if (var_208 & 1)
            {
                rax_2 = 0x30000002e;
                goto label_68b244;
            }
            
            nix::sys::signal::sigaction::h1579c992c8c24378(&var_208, 0xf, &var_b0);
            
            if (var_208 & 1)
            {
                rax_2 = 0xf0000002e;
                goto label_68b244;
            }
            
            *(arg1 + 4) = rax;
            *arg1 = 0x38;
        }
        else
        {
            rax_2 = 0x10000002e;
            label_68b244:
            int64_t rcx_3 = *var_208[4] << 0x20 | 2;
            int128_t var_108;
            int128_t var_168_1 = var_108;
            int128_t var_f8;
            int128_t var_158_1 = var_f8;
            int128_t var_e8;
            int128_t var_148_1 = var_e8;
            int128_t var_d8;
            int128_t var_138_1 = var_d8;
            int128_t var_c8;
            int128_t var_128_1 = var_c8;
            int64_t var_b8;
            int64_t var_118_1 = var_b8;
            *(arg1 + 0x60) = var_b8;
            *(arg1 + 0x50) = var_c8;
            *(arg1 + 0x40) = var_d8;
            *(arg1 + 0x30) = var_e8;
            *(arg1 + 0x20) = var_f8;
            *(arg1 + 0x10) = var_108;
            *arg1 = rax_2;
            *(arg1 + 8) = rcx_3;
            core::ptr::drop_in_place$LT$std..os..fd..owned..OwnedFd$GT$::hf2ebce843f0e980c(rax);
        }
    }
    
    return arg1;
}

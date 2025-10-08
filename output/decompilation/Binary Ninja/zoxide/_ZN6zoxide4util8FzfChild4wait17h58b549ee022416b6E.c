
  int64_t zoxide::util::FzfChild::wait::h58b549ee022416b6(int128_t* arg1, int32_t* arg2)

{
    int32_t rdi = arg2[4];
    arg2[4] = 0xffffffff;
    int64_t rcx = core::ptr::drop_in_place$LT$core..option..Option$LT$std..process..ChildStdin$GT$$GT$::h6c7b867f27440b6e(rdi);
    int32_t fd_1 = arg2[5];
    arg2[5] = 0xffffffff;
    
    if (fd_1 == 0xffffffff)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t fd = fd_1;
    int64_t var_38 = 0;
    int64_t var_30 = 1;
    int64_t var_28 = 0;
    char rax;
    int64_t rdx;
    rax = std::io::append_to_string::hedb55a5ab2293446(&var_38, &fd, 0, rcx);
    char rax_1;
    uint64_t rdx_1;
    rax_1 = anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hd417b96229ab7d1e(rax, rdx);
    
    if (rax_1 & 1)
        goto label_492ba9;
    
    char const (** const var_68)[0xe4];
    std::process::Child::wait::h7e33de4911114104(&var_68, arg2);
    int32_t var_20;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hb65f6847d5367690(&var_20, &var_68);
    
    if (var_20 != 1)
    {
        int32_t var_1c;
        
        if (var_1c & 0x7f)
        {
            label_492cbf:
            var_68 = &data_534b80;
            int64_t var_60_3 = 1;
            int64_t var_58_3 = 8;
            int128_t var_50_3 = {0};
            rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            goto label_492ba9;
        }
        
        uint8_t rax_3 = var_1c >> 8;
        
        if (rax_3)
        {
            uint32_t rcx_1 = rax_3;
            
            if (rcx_1 == 1)
            {
                var_68 = &data_534ba0;
                int64_t var_60_2 = 1;
                int64_t var_58_2 = 8;
                int128_t var_50_2 = {0};
                rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
                goto label_492ba9;
            }
            
            if (rcx_1 == 2)
            {
                var_68 = &data_534b90;
                int64_t var_60_1 = 1;
                int64_t var_58_1 = 8;
                int128_t var_50_1 = {0};
                rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
                goto label_492ba9;
            }
            
            if (rcx_1 == 0x82)
            {
                rdx_1 = anyhow::kind::Adhoc::new::h40cd9dbe27630cdb(0x82);
                goto label_492ba9;
            }
            
            uint32_t rax_9 = rax_3;
            rcx_1 = rax_9 > 0x7f;
            rax_9 = rax_9 != 0xff;
            
            if (rcx_1 & rax_9)
                goto label_492cbf;
            
            var_68 = &data_534b70;
            int64_t var_60_4 = 1;
            int64_t var_58_4 = 8;
            int128_t var_50_4 = {0};
            rdx_1 = anyhow::__private::format_err::h09b344f6a077676a(&var_68);
            goto label_492ba9;
        }
        
        arg1[1] = var_28;
        *arg1 = var_38;
    }
    else
    {
        uint64_t var_18;
        rdx_1 = var_18;
        label_492ba9:
        *(arg1 + 8) = rdx_1;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_38);
    }
    
    return core::ptr::drop_in_place$LT$std..fs..File$GT$::hd07966af9089b9f5(fd);
}


  int64_t uu_chown::parse_spec::h35c2058a4fb20997(uint64_t arg1, char* arg2, void* arg3, int32_t arg4)

{
    uint64_t rbp = arg1;
    int32_t var_134 = arg4;
    
    if (!
        _$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(
        &var_134))
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: ['.', ':'].con…");
        /* no return */
    }
    
    void var_88;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_88, 
        arg4, arg2, arg3);
    int64_t var_98 = 0;
    void* var_90 = arg3;
    int16_t var_58 = 1;
    int64_t var_a0 = 1;
    uint64_t rax_1;
    uint64_t rdx_1;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hf71c92c096863657(&var_98);
    uint64_t r12 = rdx_1;
    char* r13 = 1;
    
    if (rax_1)
        r13 = rax_1;
    
    if (!rax_1)
        r12 = rax_1;
    
    uint64_t var_130 = rbp;
    uint64_t rbx_1;
    
    if (!var_a0)
        rbx_1 = 0;
    else
    {
        uint64_t rax_3;
        uint64_t rdx_2;
        
        if (var_a0 != 1)
        {
            int64_t var_a0_2 = var_a0 - 1;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::next::hf71c92c096863657(&var_98);
        }
        else
        {
            int64_t var_a0_1 = 0;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::get_end::h74cf200cf9f6e638(&var_98);
        }
        
        rbx_1 = rax_3;
        rbp = rdx_2;
    }
    
    if (!rbx_1)
        rbp = rbx_1;
    
    char* var_128;
    uu_chown::parse_uid::h01027c14780af233(&var_128, r13, r12, arg2, arg3, var_134);
    char* rax_5 = var_128;
    int32_t result;
    uint64_t rdx_5;
    void** var_120;
    void** const rcx_3;
    
    if (rax_5)
    {
        label_4618a3:
        rcx_3 = var_120;
        label_4618a8:
        rdx_5 = var_130;
        *(rdx_5 + 8) = rax_5;
        *(rdx_5 + 0x10) = rcx_3;
        result = 1;
    }
    else
    {
        char* rsi_2 = 1;
        
        if (rbx_1)
            rsi_2 = rbx_1;
        
        uu_chown::parse_gid::h180219f2ead778f4(&var_128, rsi_2, rbp);
        rax_5 = var_128;
        
        if (rax_5)
            goto label_4618a3;
        
        int32_t var_c8_1[0x4] = var_120;
        var_128 = r13;
        void* var_120_1 = &r13[r12];
        char rax_7;
        int32_t rdx_6;
        rax_7 = core::str::validations::next_code_point::h64a24206fe1d1fca(&var_128, rbx_1);
        
        if ((rdx_6 != 0x110000 & rax_7) == 1)
        {
            if (rdx_6 - 0x30 >= 0xa)
            {
                if (rdx_6 >= 0x80
                    && core::unicode::unicode_data::n::lookup::h2205f79143053ee8(rdx_6) && !rbp)
                {
                    label_461926:
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h734d187c689c169f(arg2, arg3, r13, r12))
                    {
                        int64_t var_e8 = 0;
                        char* var_e0_1 = arg2;
                        void* var_d8_1 = arg3;
                        char var_d0_1 = 1;
                        int64_t* var_f8 = &var_e8;
                        int64_t (* var_f0_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_128 = &data_4f5fb0;
                        int64_t var_120_2 = 1;
                        int64_t var_108_1 = 0;
                        int64_t** var_118_1 = &var_f8;
                        int64_t var_110_1 = 1;
                        void var_50;
                        core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_50, 
                            &var_128);
                        int32_t var_38_1 = 1;
                        rax_5 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_50);
                        rcx_3 = &data_4f5f38;
                        goto label_4618a8;
                    }
                }
            }
            else if (!rbp)
                goto label_461926;
        }
        
        rdx_5 = var_130;
        *(rdx_5 + 4) = __unpcklpd_xmmpd_memdq(var_120, var_c8_1);
        result = 0;
    }
    *rdx_5 = result;
    return result;
}

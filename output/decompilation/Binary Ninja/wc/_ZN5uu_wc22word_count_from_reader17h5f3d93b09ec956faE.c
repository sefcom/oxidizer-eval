
  int64_t uu_wc::word_count_from_reader::h5f3d93b09ec956fa(int64_t* arg1, int32_t* arg2, char arg3, void* arg4)

{
    int32_t* var_18 = arg2;
    char rdi = *(arg4 + 0x1c);
    char rax = *(arg4 + 0x1b);
    char r8 = rax | rdi;
    char r9 = *(arg4 + 0x19);
    char rcx = *(arg4 + 0x1a);
    
    if (*(arg4 + 0x18))
    {
        if (!r9)
        {
            if (rcx)
            {
                if (r8)
                    goto label_4b9e71;
                
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h25c1875592fab0d9(arg1, 
                    &var_18);
                return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(
                    var_18, arg3);
            }
            
            if (!r8)
            {
                int64_t rax_5;
                int64_t rdx_7;
                rax_5 = uu_wc::count_fast::count_bytes_fast::h84184728696ecb06(&var_18);
                *arg1 = rax_5;
                __builtin_memset(&arg1[1], 0, 0x20);
                arg1[5] = rdx_7;
                return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(
                    var_18, arg3);
            }
            
            label_4b9f14:
            uint32_t rdx_11 = arg3;
            
            if (!rdi)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h025918a8241eeb08(arg1, arg2, 
                    rdx_11);
            
            if (!rax)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hbca2cb602ec99f92(arg1, arg2, 
                    rdx_11);
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h17007ed8b4818a2a(arg1, arg2, rdx_11);
        }
        
        if (!rcx)
        {
            if (r8)
                goto label_4b9ea4;
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h288fb21f9fd91ba1(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(
                var_18, arg3);
        }
        
        if (r8)
            goto label_4b9e11;
        
        uu_wc::count_fast::count_bytes_chars_and_lines_fast::h59d133d4308848ec(arg1, &var_18);
        return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(var_18, 
            arg3);
    }
    
    if (!r9)
    {
        if (!rcx)
        {
            if (r8)
                goto label_4b9f14;
            
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
        
        if (!r8)
        {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h598bf3a898ce236a(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(
                var_18, arg3);
        }
        
        label_4b9e71:
        uint32_t rdx_2 = arg3;
        
        if (!rdi)
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h7f97302cbd6e2e70(arg1, arg2, rdx_2);
        
        if (!rax)
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h44113b0a01ba8e40(arg1, arg2, rdx_2);
        
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::ha1e711597c722da7(arg1, arg2, rdx_2);
    }
    
    if (!rcx)
    {
        if (!r8)
        {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcb79d42af9b67351(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(
                var_18, arg3);
        }
        
        label_4b9ea4:
        uint32_t rdx_5 = arg3;
        
        if (!rdi)
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h28fc347a8b9012d0(arg1, arg2, rdx_5);
        
        if (!rax)
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h913a6f0069ea8b75(arg1, arg2, rdx_5);
        
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::hc596e1f0f8fa6312(arg1, arg2, rdx_5);
    }
    
    if (!r8)
    {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast::h90889acc4337658d(arg1, &var_18);
        return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h56134b51e5b08b82(var_18, 
            arg3);
    }
    
    label_4b9e11:
    uint32_t rdx = arg3;
    
    if (!rdi)
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h9a3c63c2604a956f(arg1, arg2, rdx);
    
    if (!rax)
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h78598f4c68c7400f(arg1, arg2, rdx);
    
    /* tailcall */
    return uu_wc::word_count_from_reader_specialized::h8bffff5ed912cf1d(arg1, arg2, rdx);
}

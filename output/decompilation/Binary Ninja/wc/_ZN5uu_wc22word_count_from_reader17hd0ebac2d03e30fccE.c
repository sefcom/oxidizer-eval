
  int64_t uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(int64_t* arg1, int32_t arg2, void* arg3)

{
    int32_t fd = arg2;
    char rcx = *(arg3 + 0x1c);
    char rax = *(arg3 + 0x1b);
    char rdi = rax | rcx;
    char r8 = *(arg3 + 0x19);
    char rdx = *(arg3 + 0x1a);
    
    if (!*(arg3 + 0x18))
    {
        if (r8)
        {
            if (rdx)
            {
                if (!rdi)
                {
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcc94ccba794e2fff(arg1, 
                        &fd);
                    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
                }
                
                label_4ba015:
                
                if (!rcx)
                    /* tailcall */
                    return uu_wc::word_count_from_reader_specialized::hf67f53152ea8a52b(arg1);
                
                if (!rax)
                    /* tailcall */
                    return uu_wc::word_count_from_reader_specialized::h42eb5bce6f526c18(arg1);
                
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h2325bc60fba5da93(arg1);
            }
            
            if (!rdi)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::haca20aa05e84b1c1(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            label_4ba099:
            
            if (!rcx)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h919a69502965bff9(arg1);
            
            if (!rax)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hd3a171cb03b8bcb0(arg1);
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::hac99886e1e61c8a7(arg1);
        }
        
        if (rdx)
        {
            if (!rdi)
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hdfffe1c8fb5fd667(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            label_4ba071:
            
            if (!rcx)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h4d593fc0f43f9bcf(arg1);
            
            if (!rax)
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hb360281d2d35178d(arg1);
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::hab046612f28a0bdc(arg1);
        }
        
        if (!rdi)
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
    }
    else
    {
        if (r8)
        {
            if (rdx)
            {
                if (rdi)
                    goto label_4ba015;
                
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7978f18bcbb2d44(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            if (rdi)
                goto label_4ba099;
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3d54c0eb4d87463c(arg1, &fd);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
        
        if (rdx)
        {
            if (rdi)
                goto label_4ba071;
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::he40ae303cc0bd17f(arg1, &fd);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
        
        if (!rdi)
        {
            int64_t rax_5;
            int64_t rdx_5;
            rax_5 = uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(&fd);
            *arg1 = rax_5;
            __builtin_memset(&arg1[1], 0, 0x20);
            arg1[5] = rdx_5;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
    }
    
    if (!rcx)
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h9bdcd99cc6378816(arg1);
    
    if (!rax)
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::hb94caab2da1608c4(arg1);
    
    /* tailcall */
    return uu_wc::word_count_from_reader_specialized::hcf58188208ea39bc(arg1);
}


  fn uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(arg1: *mut i64, arg2: i32, arg3: *mut c_void) -> i64

{
    let mut fd: i32 = arg2;
    let rcx: i8 = *arg3.byte_offset(0x1c);
    let rax: i8 = *arg3.byte_offset(0x1b);
    let rdi: i8 = rax | rcx;
    let r8: i8 = *arg3.byte_offset(0x19);
    let rdx: i8 = *arg3.byte_offset(0x1a);
    
    if *arg3.byte_offset(0x18) == 0
    {
        if r8 != 0
        {
            if rdx != 0
            {
                if rdi == 0
                {
                    uu_wc::count_fast::count_bytes_chars_and_lines_fast::hcc94ccba794e2fff(arg1, 
                        &fd);
                    return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
                }
                
                'label_4ba015:
                
                if rcx == 0
                {
                    /* tailcall */
                    return uu_wc::word_count_from_reader_specialized::hf67f53152ea8a52b(arg1);
                }
                
                if rax == 0
                {
                    /* tailcall */
                    return uu_wc::word_count_from_reader_specialized::h42eb5bce6f526c18(arg1);
                }
                
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h2325bc60fba5da93(arg1);
            }
            
            if rdi == 0
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::haca20aa05e84b1c1(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            'label_4ba099:
            
            if rcx == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h919a69502965bff9(arg1);
            }
            
            if rax == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hd3a171cb03b8bcb0(arg1);
            }
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::hac99886e1e61c8a7(arg1);
        }
        
        if rdx != 0
        {
            if rdi == 0
            {
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hdfffe1c8fb5fd667(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            'label_4ba071:
            
            if rcx == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h4d593fc0f43f9bcf(arg1);
            }
            
            if rax == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hb360281d2d35178d(arg1);
            }
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::hab046612f28a0bdc(arg1);
        }
        
        if rdi == 0
        {
            core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
            /* no return */
        }
    }
    else
    {
        if r8 != 0
        {
            if rdx != 0
            {
                if rdi != 0
                {
                    goto 'label_4ba015;
                }
                
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::hd7978f18bcbb2d44(arg1, &fd);
                return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
            }
            
            if rdi != 0
            {
                goto 'label_4ba099;
            }
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h3d54c0eb4d87463c(arg1, &fd);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
        
        if rdx != 0
        {
            if rdi != 0
            {
                goto 'label_4ba071;
            }
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::he40ae303cc0bd17f(arg1, &fd);
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
        
        if rdi == 0
        {
            let mut rax_5: i64;
            let mut rdx_5: i64;
            rax_5 = uu_wc::count_fast::count_bytes_fast::habd5ed9c294fb84e(&fd);
            *arg1 = rax_5;
            __builtin_memset(&arg1[1], 0, 0x20);
            arg1[5] = rdx_5;
            return core::ptr::drop_in_place$LT$std..fs..File$GT$::h0bf56f1a5b3d62a1(fd);
        }
    }
    
    if rcx == 0
    {
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h9bdcd99cc6378816(arg1);
    }
    
    if rax == 0
    {
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::hb94caab2da1608c4(arg1);
    }
    
    /* tailcall */
    uu_wc::word_count_from_reader_specialized::hcf58188208ea39bc(arg1)
}

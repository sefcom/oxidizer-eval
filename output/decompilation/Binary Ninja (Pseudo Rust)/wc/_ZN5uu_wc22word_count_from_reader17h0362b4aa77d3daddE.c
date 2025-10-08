
  fn uu_wc::word_count_from_reader::h0362b4aa77d3dadd(arg1: *mut i64, arg2: *mut i32, arg3: i8, arg4: *mut c_void) -> i64

{
    let mut var_18: *mut i32 = arg2;
    let r10: i8 = *arg4.byte_offset(0x19);
    let r9: i8 = *arg4.byte_offset(0x1a);
    let rdi: i8 = *arg4.byte_offset(0x1c);
    let rax: i8 = *arg4.byte_offset(0x1b);
    let r8: i8 = rdi | rax;
    
    if *arg4.byte_offset(0x18) != 0
    {
        if r10 == 0
        {
            if r9 != 0
            {
                if r8 != 0
                {
                    goto 'label_466249;
                }
                
                uu_wc::count_fast::count_bytes_chars_and_lines_fast::h5088e933c52b60b5(arg1, 
                    &var_18);
                return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(
                    var_18, arg3);
            }
            
            if r8 == 0
            {
                let mut rax_4: i64;
                let mut rdx_6: i64;
                rax_4 = uu_wc::count_fast::count_bytes_fast::h1b572bf67c4143c1(&var_18);
                *arg1 = rax_4;
                __builtin_memset(&arg1[1], 0, 0x20);
                arg1[5] = rdx_6;
                return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(
                    var_18, arg3);
            }
            
            'label_4662d3:
            let rdx_7: u32 = arg3;
            
            if rdi == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::hfa36a0a2a76e68c2(arg1, arg2, 
                    rdx_7);
            }
            
            if rax == 0
            {
                /* tailcall */
                return uu_wc::word_count_from_reader_specialized::h2f66a94226ac6a31(arg1, arg2, 
                    rdx_7);
            }
            
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h12c6816495c7efc9(arg1, arg2, rdx_7);
        }
        
        if r9 == 0
        {
            if r8 != 0
            {
                goto 'label_466288;
            }
            
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::hef7b8a1cae262f0a(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(
                var_18, arg3);
        }
        
        if r8 != 0
        {
            goto 'label_4661f8;
        }
        
        uu_wc::count_fast::count_bytes_chars_and_lines_fast::h55522c7657e43653(arg1, &var_18);
        return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(var_18, 
            arg3);
    }
    
    if r10 == 0
    {
        if r9 == 0
        {
            if r8 != 0
            {
                goto 'label_4662d3;
            }
            
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        if r8 == 0
        {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h7dabb93529648831(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(
                var_18, arg3);
        }
        
        'label_466249:
        let rdx_2: u32 = arg3;
        
        if rdi == 0
        {
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h49d44fc081c49452(arg1, arg2, rdx_2);
        }
        
        if rax == 0
        {
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::hba832f3c19c46faa(arg1, arg2, rdx_2);
        }
        
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h1ff21f2149f3e7fe(arg1, arg2, rdx_2);
    }
    
    if r9 == 0
    {
        if r8 == 0
        {
            uu_wc::count_fast::count_bytes_chars_and_lines_fast::h911d90f4572ee7b3(arg1, &var_18);
            return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(
                var_18, arg3);
        }
        
        'label_466288:
        let rdx_4: u32 = arg3;
        
        if rdi == 0
        {
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h73cf1ac40f761e66(arg1, arg2, rdx_4);
        }
        
        if rax == 0
        {
            /* tailcall */
            return uu_wc::word_count_from_reader_specialized::h7ce3c209db19c8fb(arg1, arg2, rdx_4);
        }
        
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h1ab6b4acdb650243(arg1, arg2, rdx_4);
    }
    
    if r8 == 0
    {
        uu_wc::count_fast::count_bytes_chars_and_lines_fast::h010e9b1655211949(arg1, &var_18);
        return core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h2083418ff4228a71(var_18, 
            arg3);
    }
    
    'label_4661f8:
    let rdx: u32 = arg3;
    
    if rdi == 0
    {
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h1bc94b2850b9efac(arg1, arg2, rdx);
    }
    
    if rax == 0
    {
        /* tailcall */
        return uu_wc::word_count_from_reader_specialized::h2044c51d339121e2(arg1, arg2, rdx);
    }
    
    /* tailcall */
    uu_wc::word_count_from_reader_specialized::h0f5510fbc829928b(arg1, arg2, rdx)
}

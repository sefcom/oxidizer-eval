
  fn uu_cat::write_fast::h4be31f706c06ce8c(arg1: i64, arg2: *mut i32) -> i64

{
    let rbp: i64;
    let var_8: i64 = rbp;
    let r15: i64;
    let var_10: i64 = r15;
    let r14: i64;
    let var_18: i64 = r14;
    let r13: i64;
    let var_20: i64 = r13;
    let r12: i64;
    let var_28: i64 = r12;
    let rbx: i64;
    let mut var_30: i64 = rbx;
    let mut i: *mut i64 = &var_30;
    let mut var_10030: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_10030;
    
    *i.byte_offset(-0x20) = arg1;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    *i.byte_offset(-8) = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let rax: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(i.byte_offset(-8));
    let mut r15_1: *mut i64 = rax;
    *i.byte_offset(-0x28) = rax;
    uu_cat::splice::write_fast_using_splice::h744b995d7f4d97cf(i, arg2);
    let rcx: i64 = *i;
    let rax_1: i8 = i[1];
    
    if rcx != -0x7ffffffffffffffa
    {
        let rdx_4: i64 = *i.byte_offset(9);
        let rdi_6: *mut i64 = *i.byte_offset(-0x20);
        rdi_6[2] = i[2];
        *rdi_6.byte_offset(9) = rdx_4;
        *rdi_6 = rcx;
        rdi_6[1] = rax_1;
    }
    else if (rax_1 & 1) == 0
    {
        **i.byte_offset(-0x20) = -0x7ffffffffffffffa;
    }
    else
    {
        memset(i, 0, 0x10000);
        
        loop
        {
            let mut rax_2: i64;
            let mut rdx_1: i64;
            rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(arg2, 
                i, 0x10000);
            *i.byte_offset(-0x18) = rax_2;
            *i.byte_offset(-0x10) = rdx_1;
            
            if (rax_2 & 1) != 0 || rdx_1 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i.byte_offset(-0x18));
                let rax_6: ssize_t = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(i.byte_offset(-0x28));
                
                if rax_6 == 0
                {
                    **i.byte_offset(-0x20) = -0x7ffffffffffffffa;
                }
                else
                {
                    let rcx_1: *mut i64 = *i.byte_offset(-0x20);
                    *rcx_1 = -0x8000000000000000;
                    rcx_1[1] = rax_6;
                }
                
                break;
            }
            
            let mut rax_3: i64;
            let mut rdx_3: u64;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, i, 0x10000);
            let rax_4: ssize_t = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(i.byte_offset(-0x28), rax_3, rdx_3);
            
            if rax_4 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i.byte_offset(-0x18));
                continue;
            }
            
            let rcx_2: *mut i64 = *i.byte_offset(-0x20);
            *rcx_2 = -0x8000000000000000;
            rcx_2[1] = rax_4;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i.byte_offset(-0x18));
            break;
        }
        
        r15_1 = *i.byte_offset(-0x28);
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h364967744e8570e4(r15_1);
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    result
}

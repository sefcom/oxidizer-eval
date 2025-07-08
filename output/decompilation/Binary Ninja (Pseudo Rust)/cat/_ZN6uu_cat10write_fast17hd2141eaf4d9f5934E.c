
  fn uu_cat::write_fast::hd2141eaf4d9f5934(arg1: i64, arg2: *mut i32) -> i64

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
    std::io::stdio::stdout::h077da66234850927();
    *i.byte_offset(-8) = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let rax: *mut i64 = std::io::stdio::Stderr::lock::h890f7962a170fc90(i.byte_offset(-8));
    *i.byte_offset(-0x28) = rax;
    uu_cat::splice::write_fast_using_splice::hbaaa5718090ebd33(i, arg2, i.byte_offset(-0x28));
    let rcx: i64 = *i;
    let rax_1: i8 = i[1];
    let mut rdi_8: *mut i64;
    
    if rcx != -0x7ffffffffffffffa
    {
        let rdx_3: i64 = *i.byte_offset(9);
        let rdi_7: *mut i64 = *i.byte_offset(-0x20);
        rdi_7[2] = i[2];
        *rdi_7.byte_offset(9) = rdx_3;
        *rdi_7 = rcx;
        rdi_7[1] = rax_1;
        rdi_8 = rax;
    }
    else if rax_1 == 0
    {
        **i.byte_offset(-0x20) = -0x7ffffffffffffffa;
        rdi_8 = rax;
    }
    else
    {
        memset(i, 0, 0x10000);
        
        loop
        {
            let mut rax_2: i64;
            let mut rdx_1: i64;
            rax_2 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::hcece2f3bec9614ed(arg2, i, 0x10000);
            *i.byte_offset(-0x18) = rax_2;
            *i.byte_offset(-0x10) = rdx_1;
            
            if rax_2 != 0 || rdx_1 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i.byte_offset(-0x18));
                let rax_6: *mut *mut c_void = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(i.byte_offset(-0x28));
                
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
            let mut rdx_2: u64;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx_1, i, 0x10000);
            let rax_4: *mut *mut [i8; 0x92] = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i.byte_offset(-0x28), rax_3, rdx_2);
            
            if rax_4 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i.byte_offset(-0x18));
                continue;
            }
            
            let rcx_2: *mut i64 = *i.byte_offset(-0x20);
            *rcx_2 = -0x8000000000000000;
            rcx_2[1] = rax_4;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i.byte_offset(-0x18));
            break;
        }
        
        rdi_8 = *i.byte_offset(-0x28);
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(rdi_8);
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    result
}

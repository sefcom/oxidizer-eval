
  fn uu_head::read_but_last_n_bytes::hcec7d62dae3b0b23(arg1: *mut i64, arg2: i64) -> *mut *mut c_void

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
    
    if arg2 == 0
    {
        i[0x2000];
        i[0x2001];
        i[0x2002];
        i[0x2003];
        i[0x2004];
        i[0x2005];
        /* tailcall */
        return uu_head::read_n_bytes::h336678ff3f92cdc9(arg1);
    }
    
    *i.byte_offset(-0x20) = arg2;
    std::io::stdio::stdout::h077da66234850927();
    *i.byte_offset(-8) = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    *i.byte_offset(-0x40) = std::io::stdio::Stderr::lock::h890f7962a170fc90(i.byte_offset(-8));
    *i.byte_offset(-0x38) = 0;
    *i.byte_offset(-0x30) = 1;
    *i.byte_offset(-0x28) = 0;
    *i.byte_offset(-0x18) = 0;
    memset(i, 0, 0x10000);
    let mut result: *mut *mut c_void;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read::h16586897cfb9760d(arg1, i, 0x10000);
        let mut r12_1: i64 = rdx_1;
        
        if rax_1 == 0
        {
            if r12_1 == 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(i.
                    byte_offset(-0x38));
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(
                    *i.byte_offset(-0x40));
                result = nullptr;
                break;
            }
            
            let rcx_2: i64 = *i.byte_offset(-0x18) + r12_1;
            let rax_3: i64 = *i.byte_offset(-0x20);
            *i.byte_offset(-0x18) = rcx_2;
            let mut rbp_2: i64;
            
            if rcx_2 <= rax_3
            {
                r12_1 = r12_1 + rax_3 - rcx_2;
                rbp_2 = 0;
                'label_4b98d9:
                let mut rax_5: i64;
                let mut rdx_6: i64;
                rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(rbp_2, r12_1, i);
                let mut rax_6: i64;
                let mut rdx_8: u64;
                rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::hbdca4b1d4fdb647e(rax_5, 
                    rdx_6 + rax_5);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h638c534dbe90cd22(
                    i.byte_offset(-0x38), rax_6, rdx_8);
                continue;
            }
            else
            {
                let result_1: *mut *mut c_void = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i.byte_offset(-0x40), *i.byte_offset(-0x30), 
                    *i.byte_offset(-0x28));
                result = result_1;
                
                if result_1 == 0
                {
                    rbp_2 = r12_1 - *i.byte_offset(-0x20);
                    let mut rax_4: i64;
                    let mut rdx_4: u64;
                    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(0, *i.byte_offset(-0x28) + rbp_2, i);
                    let result_2: *mut *mut c_void = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i.byte_offset(-0x40), rax_4, rdx_4);
                    result = result_2;
                    
                    if result_2 == 0
                    {
                        *i.byte_offset(-0x28) = 0;
                        goto 'label_4b98d9;
                    }
                }
            }
        }
        else
        {
            *i.byte_offset(-0x10) = r12_1;
            
            if std::io::error::Error::kind::hb2ff5fa058639b3d(r12_1) != 0x23
            {
                result = *i.byte_offset(-0x10);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57d894b44a41053e(i.
                    byte_offset(-0x10));
                continue;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(i.
            byte_offset(-0x38));
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(
            *i.byte_offset(-0x40));
        break;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    result
}

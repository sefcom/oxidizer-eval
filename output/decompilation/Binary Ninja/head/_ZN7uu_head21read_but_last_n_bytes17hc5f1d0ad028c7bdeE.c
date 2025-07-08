
  void** uu_head::read_but_last_n_bytes::hc5f1d0ad028c7bde(int64_t* arg1, int64_t arg2)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t r15;
    int64_t var_10 = r15;
    int64_t r14;
    int64_t var_18 = r14;
    int64_t r13;
    int64_t var_20 = r13;
    int64_t r12;
    int64_t var_28 = r12;
    int64_t rbx;
    int64_t var_30 = rbx;
    int64_t* i = &var_30;
    void var_10030;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_10030);
    
    if (!arg2)
    {
        i[0x2000];
        i[0x2001];
        i[0x2002];
        i[0x2003];
        i[0x2004];
        i[0x2005];
        /* tailcall */
        return uu_head::read_n_bytes::h6fceecc1df8e2d16(arg1);
    }
    
    *(i - 0x20) = arg2;
    std::io::stdio::stdout::h077da66234850927();
    *(i - 8) = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    *(i - 0x40) = std::io::stdio::Stderr::lock::h890f7962a170fc90(i - 8);
    *(i - 0x38) = 0;
    *(i - 0x30) = 1;
    *(i - 0x28) = 0;
    *(i - 0x18) = 0;
    memset(i, 0, 0x10000);
    void** result;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 =
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read::he60828ebe1a3e725(
            arg1, i, 0x10000);
        int64_t r12_1 = rdx_1;
        
        if (!rax_1)
        {
            if (!r12_1)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(i
                    - 0x38);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(
                    *(i - 0x40));
                result = nullptr;
                break;
            }
            
            int64_t rcx_2 = *(i - 0x18) + r12_1;
            int64_t rax_3 = *(i - 0x20);
            *(i - 0x18) = rcx_2;
            void** result_1;
            int64_t rbp_2;
            
            if (rcx_2 <= rax_3)
            {
                r12_1 = r12_1 + rax_3 - rcx_2;
                rbp_2 = 0;
                label_4b9695:
                int64_t rax_5;
                int64_t rdx_6;
                rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(rbp_2, r12_1, i);
                int64_t rax_6;
                uint64_t rdx_8;
                rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::hbdca4b1d4fdb647e(rax_5, 
                    rdx_6 + rax_5);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h638c534dbe90cd22(i - 0x38, rax_6, 
                    rdx_8);
                continue;
            }
            else
            {
                result_1 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i - 0x40, *(i - 0x30), *(i - 0x28));
                
                if (!result_1)
                {
                    rbp_2 = r12_1 - *(i - 0x20);
                    int64_t rax_4;
                    uint64_t rdx_4;
                    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::ha1b168ca8ea64d34(0, *(i - 0x28) + rbp_2, i);
                    result_1 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i - 0x40, rax_4, rdx_4);
                    
                    if (!result_1)
                    {
                        *(i - 0x28) = 0;
                        goto label_4b9695;
                    }
                }
            }
            result = result_1;
        }
        else
        {
            *(i - 0x10) = r12_1;
            
            if (std::io::error::Error::kind::hb2ff5fa058639b3d(r12_1) != 0x23)
                result = *(i - 0x10);
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h57d894b44a41053e(i - 0x10);
                continue;
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(i - 0x38);
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(*(i - 0x40));
        break;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    return result;
}

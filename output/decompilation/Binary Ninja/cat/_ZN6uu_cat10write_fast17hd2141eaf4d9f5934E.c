
  int64_t uu_cat::write_fast::hd2141eaf4d9f5934(int64_t arg1, int32_t* arg2)

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
    
    *(i - 0x20) = arg1;
    std::io::stdio::stdout::h077da66234850927();
    *(i - 8) = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* rax = std::io::stdio::Stderr::lock::h890f7962a170fc90(i - 8);
    *(i - 0x28) = rax;
    uu_cat::splice::write_fast_using_splice::hbaaa5718090ebd33(i, arg2, i - 0x28);
    int64_t rcx = *i;
    char rax_1 = i[1];
    int64_t* rdi_8;
    
    if (rcx != -0x7ffffffffffffffa)
    {
        int64_t rdx_3 = *(i + 9);
        int64_t* rdi_7 = *(i - 0x20);
        rdi_7[2] = i[2];
        *(rdi_7 + 9) = rdx_3;
        *rdi_7 = rcx;
        rdi_7[1] = rax_1;
        rdi_8 = rax;
    }
    else if (!rax_1)
    {
        **(i - 0x20) = -0x7ffffffffffffffa;
        rdi_8 = rax;
    }
    else
    {
        memset(i, 0, 0x10000);
        
        while (true)
        {
            int64_t rax_2;
            int64_t rdx_1;
            rax_2 = _$LT$std..os..unix..net..stream..UnixStream$u20$as$u20$std..io..Read$GT$::read::hcece2f3bec9614ed(arg2, i, 0x10000);
            *(i - 0x18) = rax_2;
            *(i - 0x10) = rdx_1;
            
            if (rax_2 || !rdx_1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i - 0x18);
                void** rax_6 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(i - 0x28);
                
                if (!rax_6)
                    **(i - 0x20) = -0x7ffffffffffffffa;
                else
                {
                    int64_t* rcx_1 = *(i - 0x20);
                    *rcx_1 = -0x8000000000000000;
                    rcx_1[1] = rax_6;
                }
                
                break;
            }
            
            int64_t rax_3;
            uint64_t rdx_2;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2183ab5a6b7a9c40(rdx_1, i, 0x10000);
            char const (** rax_4)[0x92] = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(i - 0x28, rax_3, rdx_2);
            
            if (!rax_4)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i - 0x18);
                continue;
            }
            
            int64_t* rcx_2 = *(i - 0x20);
            *rcx_2 = -0x8000000000000000;
            rcx_2[1] = rax_4;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hdeb0a990ca1d4581(i - 0x18);
            break;
        }
        
        rdi_8 = *(i - 0x28);
    }
    
    int64_t result =
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h7157efe841e7afad(rdi_8);
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    return result;
}

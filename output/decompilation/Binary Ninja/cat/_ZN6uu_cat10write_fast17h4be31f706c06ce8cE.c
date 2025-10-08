
  int64_t uu_cat::write_fast::h4be31f706c06ce8c(int64_t arg1, int32_t* arg2)

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
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    *(i - 8) = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* rax = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(i - 8);
    int64_t* r15_1 = rax;
    *(i - 0x28) = rax;
    uu_cat::splice::write_fast_using_splice::h744b995d7f4d97cf(i, arg2);
    int64_t rcx = *i;
    char rax_1 = i[1];
    
    if (rcx != -0x7ffffffffffffffa)
    {
        int64_t rdx_4 = *(i + 9);
        int64_t* rdi_6 = *(i - 0x20);
        rdi_6[2] = i[2];
        *(rdi_6 + 9) = rdx_4;
        *rdi_6 = rcx;
        rdi_6[1] = rax_1;
    }
    else if (!(rax_1 & 1))
        **(i - 0x20) = -0x7ffffffffffffffa;
    else
    {
        memset(i, 0, 0x10000);
        
        while (true)
        {
            int64_t rax_2;
            int64_t rdx_1;
            rax_2 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(arg2, 
                i, 0x10000);
            *(i - 0x18) = rax_2;
            *(i - 0x10) = rdx_1;
            
            if (rax_2 & 1 || !rdx_1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i - 0x18);
                ssize_t rax_6 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::h9c181f7575a57cf0(i - 0x28);
                
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
            uint64_t rdx_3;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hefdaf78919a7c5d0(0, rdx_1, i, 0x10000);
            ssize_t rax_4 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(i - 0x28, rax_3, rdx_3);
            
            if (!rax_4)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i - 0x18);
                continue;
            }
            
            int64_t* rcx_2 = *(i - 0x20);
            *rcx_2 = -0x8000000000000000;
            rcx_2[1] = rax_4;
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hed7edf1086309a68(i - 0x18);
            break;
        }
        
        r15_1 = *(i - 0x28);
    }
    
    int64_t result =
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h364967744e8570e4(r15_1);
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    return result;
}

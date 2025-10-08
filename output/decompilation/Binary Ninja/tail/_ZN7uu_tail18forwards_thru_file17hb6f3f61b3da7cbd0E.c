
  int64_t uu_tail::forwards_thru_file::hb6f3f61b3da7cbd0(int32_t* arg1, int64_t arg2, int32_t arg3)

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
    void var_8030;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_8030);
    
    *(i - 0x3c) = arg3;
    int32_t* r15_1 = arg1;
    void* i_1 = i;
    memset(i_1, 0, 0x8000);
    int64_t rbp_1 = 0;
    *(i - 0x48) = 0;
    *(i - 0x28) = r15_1;
    label_4a75a4:
    int64_t rax_1;
    int64_t rdx;
    rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(r15_1, i_1, 
        0x8000);
    
    while (true)
    {
        *(i - 0x38) = rax_1;
        *(i - 0x30) = rdx;
        int64_t result;
        
        if (!(rax_1 & 1))
        {
            if (!rdx)
            {
                result = 0;
                *(i - 0x48);
            }
            else
            {
                int64_t rax_4;
                int64_t rdx_2;
                rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hdb1cc250d47cebe0(0, rdx, i_1, 0x8000);
                *(i - 0x20) = rax_4;
                *(i - 0x18) = rax_4;
                *(i - 0x10) = rdx_2 + rax_4;
                *(i - 8) = *(i - 0x3c);
                
                do
                {
                    char rax_6;
                    int64_t rdx_4;
                    rax_6 = memchr::arch::generic::memchr::Iter::next::haf3629eb4700264f(i - 0x20, 
                        i - 8);
                    
                    if (!(rax_6 & 1))
                    {
                        *(i - 0x48) += rdx;
                        r15_1 = *(i - 0x28);
                        goto label_4a75a4;
                    }
                    
                    rbp_1 += 1;
                } while (arg2 != rbp_1);
                
                *(i - 0x48);
                result = 0;
            }
            
            goto label_4a7697;
        }
        
        if (std::io::error::Error::kind::h135fe00c4e7365f3(rdx) != 0x23)
        {
            *(i - 0x30);
            result = 1;
            label_4a7697:
            i[0x1000];
            i[0x1001];
            i[0x1002];
            i[0x1003];
            i[0x1004];
            i[0x1005];
            return result;
        }
        
        *(i - 0x20) = *(i - 0x30);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf9bb92bdb8e06921(i - 0x20);
        rax_1 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h614ade6d36e62b0e(
            *(i - 0x28), i_1, 0x8000);
    }
}

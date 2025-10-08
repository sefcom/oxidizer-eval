
  int64_t uu_shred::BytesWriter::from_pass_type::hee8253cabbfb6b71(char* arg1, char* arg2)

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
    void var_20030;
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while (i != &var_20030);
    
    char rax = *arg2;
    int64_t result;
    
    if (rax != 2)
    {
        if (!(rax & 1))
            memset(i - 4, arg2[1], 0x10002);
        else
        {
            memset(i + 0xfffe, 0, 0x10002);
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::hc65588b0192ca83c(
                i - 0x30, i + 0xfffe, 0x10002, 3);
            int64_t r13_1 = *(i - 0x18);
            uint64_t r15_2 = *(i - 0x10);
            
            if (r13_1 >= r15_2)
            {
                int64_t rdi_4 = *(i - 0x20);
                
                do
                {
                    r13_1 -= r15_2;
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h0641c419a2aac1ad(
                        rdi_4, r15_2, &arg2[1], 3);
                    rdi_4 += r15_2;
                } while (r13_1 >= r15_2);
            }
            
            memcpy(i - 4, i + 0xfffe, 0x10002);
        }
        
        *(arg1 + 0x10008) = 0;
        result = memcpy(&arg1[1], i - 4, 0x10002);
        rbp = 1;
    }
    else
    {
        rand_core::SeedableRng::from_os_rng::hd386da512c6ef0d4(&arg1[0x10]);
        rbp = 0;
        result = memset(&arg1[0x150], 0, 0x10000);
    }
    
    *arg1 = rbp;
    i[0x4000];
    i[0x4001];
    i[0x4002];
    i[0x4003];
    i[0x4004];
    i[0x4005];
    return result;
}

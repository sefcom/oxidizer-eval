
  uint64_t uu_head::find_nth_line_from_end::h5c4d4ddf46229ebf(int32_t* arg1, int64_t arg2, int32_t arg3)

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
    
    uint64_t result = 1;
    int64_t rax;
    char const (** rdx)[0x8b];
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(arg1, 1, 0);
    char const (** rbx_1)[0x8b] = rdx;
    
    if (!rax)
    {
        *(i - 0x34) = arg3;
        *(i - 0x40) = arg1;
        int64_t r13_1 = 0;
        memset(i, 0, 0x10000);
        int64_t rax_2;
        uint64_t rdx_1;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hd5561b86696466f7(core::cmp::min_by::h2078b6bb6ba69746(rbx_1), i);
        uint64_t r12_2 = rdx_1;
        *(i - 0x18) = rax_2;
        *(i - 0x28) = rax_2 + rdx_1;
        int64_t r14_2 = 0;
        *(i - 0x20) = rbx_1;
        *(i - 0x30) = rdx_1;
        bool result_1;
        
        while (true)
        {
            int64_t rax_5 = -(core::cmp::min_by::hae32659e1ae087e7(r12_2, rbx_1 - r13_1));
            int32_t* rbx_3 = *(i - 0x40);
            int64_t rax_6;
            char const (** rdx_3)[0x8b];
            rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(rbx_3, 
                2, rax_5);
            
            if (rax_6)
            {
                result_1 = true;
                break;
            }
            
            int64_t rbx_4 = *(i - 0x18);
            
            if (std::io::Read::read_exact::h4f03c53f641b4de7(rbx_3, rbx_4, r12_2))
            {
                result_1 = true;
                break;
            }
            
            *(i - 0x10) = rbx_4;
            *(i - 8) = *(i - 0x28);
            char* rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(i - 0x10);
            rbx_1 = *(i - 0x20);
            char rbp_2 = *(i - 0x34);
            
            if (rax_9)
            {
                while (true)
                {
                    int64_t r14_3;
                    r14_3 = *rax_9 == rbp_2;
                    r14_2 += r14_3;
                    
                    if (r14_2 == arg2 + 1)
                    {
                        result_1 = std::io::Seek::rewind::hc8a3d0d593dc2463(*(i - 0x40));
                        break;
                    }
                    
                    r13_1 += 1;
                    rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hbe5502fe4b8ea8e6(i - 0x10);
                    
                    if (!rax_9)
                        goto label_4b9d43;
                }
                
                break;
            }
            
            label_4b9d43:
            r12_2 = *(i - 0x30);
            
            if (r13_1 == rbx_1)
            {
                result_1 = std::io::Seek::rewind::hc8a3d0d593dc2463(*(i - 0x40));
                break;
            }
        }
        
        result = result_1;
    }
    
    i[0x2000];
    i[0x2001];
    i[0x2002];
    i[0x2003];
    i[0x2004];
    i[0x2005];
    return result;
}

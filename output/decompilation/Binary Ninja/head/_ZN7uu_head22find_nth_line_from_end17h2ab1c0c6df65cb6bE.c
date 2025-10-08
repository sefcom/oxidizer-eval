
  uint64_t uu_head::find_nth_line_from_end::h2ab1c0c6df65cb6b(int32_t* arg1, int64_t arg2, int32_t arg3)

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
    char rax;
    int64_t rdx;
    rax = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 1, 0);
    
    if (!(rax & 1))
    {
        *(i - 0x30) = arg1;
        int64_t r13_1 = 0;
        int64_t rbx_1 = rdx;
        memset(i, 0, 0x10000);
        int64_t rbp_3 = 0;
        *(i - 0x20) = rbx_1;
        *(i - 0x24) = arg3;
        *(i - 0x18) = arg2 + 1;
        bool result_1;
        
        while (true)
        {
            int64_t rbx_2 = rbx_1 - rbp_3;
            int64_t rax_1 = core::cmp::Ord::min::h08a96a0a44b5e327(rbx_2, 0x10000);
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hafeb32239145e8d7(rax_1, i, 0x10000);
            int32_t* r15_2 = *(i - 0x30);
            
            if (_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(r15_2, 0, 
                rbx_2 - rax_1) & 1)
            {
                result_1 = true;
                break;
            }
            
            if (std::io::Read::read_exact::hc1cd067067766de9(r15_2, rax_2, rdx_1))
            {
                result_1 = true;
                break;
            }
            
            *(i - 0x10) = rax_2;
            *(i - 8) = rax_2 + rdx_1;
            char* rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h1cf0d536d1ebcd32(i - 0x10);
            
            if (rax_7)
            {
                char r15_3 = *(i - 0x24);
                int64_t r14_3 = *(i - 0x18);
                
                while (true)
                {
                    int64_t r13_2;
                    r13_2 = *rax_7 == r15_3;
                    r13_1 += r13_2;
                    
                    if (r13_1 == r14_3)
                    {
                        int64_t rax_8 = std::io::Seek::rewind::h5a487aea7136159b(*(i - 0x30));
                        *(i - 0x20);
                        result_1 = rax_8;
                        break;
                    }
                    
                    rbp_3 += 1;
                    rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h1cf0d536d1ebcd32(i - 0x10);
                    
                    if (!rax_7)
                        goto label_4675b0;
                }
                
                break;
            }
            
            label_4675b0:
            rbx_1 = *(i - 0x20);
            
            if (rbp_3 == rbx_1)
            {
                result_1 = std::io::Seek::rewind::h5a487aea7136159b(*(i - 0x30));
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

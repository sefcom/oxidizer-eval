
  int64_t* uu_dd::Input::fill_consecutive::h39d193754d2b2b2d(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t rax_1 = *(*(arg2 + 8) + 0x70);
    void** const var_60;
    
    if (!rax_1)
    {
        var_60 = &data_53d1a0;
        int64_t var_58 = 1;
        int64_t var_50_1 = 8;
        int128_t var_48 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    var_60 = *(arg3 + 8);
    int64_t var_50 = rax_1;
    int64_t* i;
    int64_t rdx;
    i = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h042a7a090798bd25(&var_60);
    int64_t rbp;
    int64_t r13;
    int64_t r14;
    
    if (!i)
    {
        r13 = 0;
        rbp = 0;
        r14 = 0;
        *(arg3 + 0x10) = r14;
    }
    else
    {
        r13 = 0;
        rbp = 0;
        r14 = 0;
        
        do
        {
            char rax_2;
            int64_t rdx_1;
            rax_2 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h4a29ff4f57f9a098(arg2, 
                i, rdx);
            
            if (rax_2 & 1)
            {
                i = arg1;
                i[1] = rdx_1;
                *i = 1;
                goto label_49013d;
            }
            
            i = *(arg2 + 8);
            
            if (i[0xe] == rdx_1)
                r13 += 1;
            else
            {
                if (!rdx_1)
                    break;
                
                rbp += 1;
            }
            
            r14 += rdx_1;
            i = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h042a7a090798bd25(&var_60);
        } while (i);
        
        if (r14 <= *(arg3 + 0x10))
            *(arg3 + 0x10) = r14;
    }
    
    arg1[1] = r13;
    arg1[2] = rbp;
    arg1[3] = r14;
    arg1[4] = 0;
    *arg1 = 0;
    label_49013d:
    return i;
}

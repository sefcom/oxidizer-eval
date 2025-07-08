
  void* uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t rax_1 = *(*(arg2 + 8) + 0x70);
    void** const var_60;
    
    if (!rax_1)
    {
        var_60 = &data_5610a0;
        int64_t var_58 = 1;
        int64_t var_50_1 = 8;
        int128_t var_48 = {0};
        core::panicking::panic_fmt::he12d0d7468628bb4(&var_60);
        /* no return */
    }
    
    var_60 = *(arg3 + 8);
    int64_t var_50 = rax_1;
    void* result;
    int64_t rdx;
    result = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&var_60);
    int64_t rbp;
    int64_t r12;
    int64_t r14;
    
    if (!result)
    {
        r12 = 0;
        r14 = 0;
        rbp = 0;
        label_4d7126:
        alloc::vec::Vec$LT$T$C$A$GT$::truncate::h705e1c902b347a7b(arg3, r12);
        arg1[1] = rbp;
        arg1[2] = r14;
        arg1[3] = r12;
        arg1[4] = 0;
        *arg1 = 0;
    }
    else
    {
        rbp = 0;
        r14 = 0;
        r12 = 0;
        
        while (true)
        {
            int64_t rdx_1;
            result = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(arg2, 
                result, rdx);
            
            if (result)
            {
                arg1[1] = rdx_1;
                *arg1 = 1;
                break;
            }
            
            result = *(arg2 + 8);
            
            if (*(result + 0x70) == rdx_1)
                rbp += 1;
            else
            {
                if (!rdx_1)
                    goto label_4d7126;
                
                r14 += 1;
            }
            
            r12 += rdx_1;
            result = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&var_60);
            
            if (!result)
                goto label_4d7126;
        }
    }
    return result;
}
